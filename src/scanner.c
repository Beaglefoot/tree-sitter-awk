#include <tree_sitter/parser.h>
#include <stdio.h>
#include <inttypes.h>

enum TokenType
{
  CONCATENATING_SPACE
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

static int32_t previous = 0;

bool tree_sitter_awk_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols)
{
  if (valid_symbols[CONCATENATING_SPACE])
  {
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t')
    {
      // log(lexer);
      lexer->advance(lexer, false);
    }

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
