#include <tree_sitter/parser.h>
#include <stdio.h>
#include <inttypes.h>

enum TokenType
{
  CONCATENATING_SPACE,
  _IF_ELSE_SEPARATOR
};

void log(TSLexer *lexer)
{
  printf("column: %3" PRIu32 " | sym: '%c' | lookahead: '%c' | skipped: %s\n",
         lexer->get_column(lexer),
         lexer->result_symbol,
         lexer->lookahead,
         lexer->is_at_included_range_start(lexer) ? "true" : "false");
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
  if (valid_symbols[_IF_ELSE_SEPARATOR])
  {
    if (is_if_else_separator(lexer))
    {
      lexer->result_symbol = _IF_ELSE_SEPARATOR;
      return true;
    }
  }

  if (valid_symbols[CONCATENATING_SPACE])
  {
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t')
    {
      lexer->advance(lexer, false);
    }

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
    case '(':
    case ')':
    case '[':
    case ']':
    case '{':
    case '}':
    case ';':
    case '\n':
      return false;
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

  return false;
}

void skip_comment(TSLexer *lexer)
{
  if (lexer->lookahead != '#')
  {
    return;
  }

  while (lexer->lookahead != '\n')
  {
    lexer->advance(lexer, true);
  }

  lexer->advance(lexer, true);
}

void skip_whitespace(TSLexer *lexer)
{
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t')
  {
    lexer->advance(lexer, true);
  }
}

int is_if_else_separator(TSLexer *lexer)
{
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\n' || lexer->lookahead == ';')
  {
    lexer->advance(lexer, true);
  }

  lexer->mark_end(lexer);

  if (lexer->lookahead == '#')
  {
    skip_comment(lexer);
    skip_whitespace(lexer);
  }

  for (int i = 0; i < 4; i++)
  {
    if (lexer->lookahead != "else"[i])
    {
      return false;
    }

    lexer->advance(lexer, true);
  }

  return true;
}
