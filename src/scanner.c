#include <tree_sitter/parser.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>

enum TokenType
{
  CONCATENATING_SPACE,
  _IF_ELSE_SEPARATOR,
  _AMBIGUOUS_COMMENT,
  _NO_SPACE
};

void tsawk_debug(TSLexer *lexer)
{
  if (lexer->lookahead == '\r')
  {
    printf("column: %3" PRIu32 " | sym: '%c' | lookahead: '\\r' | skipped: %s\n",
           lexer->get_column(lexer),
           lexer->result_symbol,
           lexer->is_at_included_range_start(lexer) ? "true" : "false");
    return;
  }

  if (lexer->lookahead == '\n')
  {
    printf("column: %3" PRIu32 " | sym: '%c' | lookahead: '\\n' | skipped: %s\n",
           lexer->get_column(lexer),
           lexer->result_symbol,
           lexer->is_at_included_range_start(lexer) ? "true" : "false");
    return;
  }

  printf("column: %3" PRIu32 " | sym: '%c' | lookahead:  '%c' | skipped: %s\n",
         lexer->get_column(lexer),
         lexer->result_symbol,
         lexer->lookahead,
         lexer->is_at_included_range_start(lexer) ? "true" : "false");
}

bool tsawk_next_chars_eq(TSLexer *lexer, char *word)
{
  for (int i = 0; i < strlen(word); i++)
  {
    if (lexer->lookahead != word[i])
    {
      return false;
    }

    lexer->advance(lexer, true);
  }
  return true;
}

bool tsawk_is_whitespace(int32_t c)
{
  return c == ' ' || c == '\t';
}

bool tsawk_is_line_continuation(TSLexer *lexer)
{
  if (lexer->lookahead == '\\')
  {
    lexer->advance(lexer, true);

    if (lexer->lookahead == '\r')
      lexer->advance(lexer, true);

    if (lexer->lookahead == '\n')
      return true;
  }

  return false;
}

bool tsawk_is_statement_terminator(int32_t c)
{
  return c == '\n' || c == ';';
}

bool tsawk_skip_whitespace(TSLexer *lexer, bool skip_newlines, bool capture)
{
  bool skipped = false;

  while (tsawk_is_whitespace(lexer->lookahead) || tsawk_is_line_continuation(lexer) || lexer->lookahead == '\r' || (skip_newlines && lexer->lookahead == '\n'))
  {
    lexer->advance(lexer, !capture);
    skipped = true;
  }

  return skipped;
}

void tsawk_skip_comment(TSLexer *lexer)
{
  if (lexer->lookahead != '#')
  {
    return;
  }

  while (lexer->lookahead != '\n')
  {
    lexer->advance(lexer, true);
  }

  lexer->advance(lexer, false);

  tsawk_skip_whitespace(lexer, true, false);

  if (lexer->lookahead == '#')
  {
    tsawk_skip_comment(lexer);
  }
}

bool tsawk_is_if_else_separator(TSLexer *lexer)
{
  while (tsawk_is_whitespace(lexer->lookahead) || tsawk_is_statement_terminator(lexer->lookahead) || lexer->lookahead == '\r')
  {
    lexer->advance(lexer, true);
  }

  lexer->mark_end(lexer);

  if (lexer->lookahead == '#')
  {
    tsawk_skip_comment(lexer);
    tsawk_skip_whitespace(lexer, false, false);
  }

  return tsawk_next_chars_eq(lexer, "else");
}

bool tsawk_is_concatenating_space(TSLexer *lexer)
{
  bool had_whitespace = tsawk_skip_whitespace(lexer, false, true);

  lexer->mark_end(lexer);

  switch (lexer->lookahead)
  {
  case '^':
  case '*':
  case '/':
  case '%':
  case '+':
  case '-':
  case '<':
  case '>':
  case '=':
  case '!':
  case '~':
  case '&':
  case '|':
  case ',':
  case '?':
  case ':':
  case ')':
  case '[':
  case ']':
  case '{':
  case '}':
  case '#':
  case ';':
  case '\n':
    return false;
  case '(':
    return had_whitespace;
  case 'i':
    lexer->advance(lexer, true);

    if (lexer->lookahead == 'n' || lexer->lookahead == 'f')
    {
      lexer->advance(lexer, true);
      return lexer->lookahead != ' ';
    }
  default:
    return true;
  }
}

void *tree_sitter_awk_external_scanner_create()
{
  return NULL;
}

void tree_sitter_awk_external_scanner_destroy(void *payload)
{
}

unsigned tree_sitter_awk_external_scanner_serialize(void *payload, char *state)
{
  return 0;
}

void tree_sitter_awk_external_scanner_deserialize(void *payload, const char *state, unsigned length)
{
}

bool tree_sitter_awk_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols)
{
  bool statement_terminator_was_found = false;

  if (valid_symbols[_AMBIGUOUS_COMMENT])
  {
    if (lexer->lookahead == '#')
    {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      lexer->result_symbol = _AMBIGUOUS_COMMENT;
      return true;
    }
  }

  if (valid_symbols[_NO_SPACE])
  {
    if (!tsawk_is_whitespace(lexer->lookahead))
    {
      lexer->result_symbol = _NO_SPACE;
      return true;
    }
  }

  if (valid_symbols[_IF_ELSE_SEPARATOR])
  {
    tsawk_skip_whitespace(lexer, false, false);

    // Comment ends with '\n' which also terminates statement
    if (tsawk_is_statement_terminator(lexer->lookahead) || lexer->lookahead == '#')
    {
      statement_terminator_was_found = true;
    }

    if (tsawk_is_if_else_separator(lexer))
    {
      lexer->result_symbol = _IF_ELSE_SEPARATOR;
      return true;
    }
  }

  if (valid_symbols[CONCATENATING_SPACE] && !statement_terminator_was_found)
  {
    if (tsawk_is_concatenating_space(lexer))
    {
      lexer->result_symbol = CONCATENATING_SPACE;
      return true;
    }
  }

  return false;
}
