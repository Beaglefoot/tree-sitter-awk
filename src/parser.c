#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  sym_identifier = 1,
  sym_statement = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym_binary_exp = 5,
  sym_unary_exp = 6,
  sym_regex = 7,
  sym_number = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  sym_escape_sequence = 11,
  anon_sym_function = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_COMMA = 15,
  anon_sym_POUND = 16,
  aux_sym_comment_token1 = 17,
  sym_program = 18,
  sym_rule = 19,
  sym_pattern = 20,
  sym_block = 21,
  sym_exp = 22,
  sym_string = 23,
  sym_func_def = 24,
  sym_param_list = 25,
  sym_comment = 26,
  aux_sym_program_repeat1 = 27,
  aux_sym_block_repeat1 = 28,
  aux_sym_string_repeat1 = 29,
  aux_sym_param_list_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_statement] = "statement",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_binary_exp] = "binary_exp",
  [sym_unary_exp] = "unary_exp",
  [sym_regex] = "regex",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_program] = "program",
  [sym_rule] = "rule",
  [sym_pattern] = "pattern",
  [sym_block] = "block",
  [sym_exp] = "exp",
  [sym_string] = "string",
  [sym_func_def] = "func_def",
  [sym_param_list] = "param_list",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_statement] = sym_statement,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_binary_exp] = sym_binary_exp,
  [sym_unary_exp] = sym_unary_exp,
  [sym_regex] = sym_regex,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_program] = sym_program,
  [sym_rule] = sym_rule,
  [sym_pattern] = sym_pattern,
  [sym_block] = sym_block,
  [sym_exp] = sym_exp,
  [sym_string] = sym_string,
  [sym_func_def] = sym_func_def,
  [sym_param_list] = sym_param_list,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_binary_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_func_def] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(3);
      if (lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 't') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_statement);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_unary_exp);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_binary_exp);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_statement] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_binary_exp] = ACTIONS(1),
    [sym_unary_exp] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(39),
    [sym_rule] = STATE(15),
    [sym_pattern] = STATE(7),
    [sym_exp] = STATE(8),
    [sym_string] = STATE(11),
    [sym_func_def] = STATE(15),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_binary_exp] = ACTIONS(7),
    [sym_unary_exp] = ACTIONS(7),
    [sym_regex] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_function] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [2] = {
    [sym_rule] = STATE(15),
    [sym_pattern] = STATE(7),
    [sym_exp] = STATE(8),
    [sym_string] = STATE(11),
    [sym_func_def] = STATE(15),
    [sym_comment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(7),
    [sym_binary_exp] = ACTIONS(7),
    [sym_unary_exp] = ACTIONS(7),
    [sym_regex] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_function] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [3] = {
    [sym_rule] = STATE(15),
    [sym_pattern] = STATE(7),
    [sym_exp] = STATE(8),
    [sym_string] = STATE(11),
    [sym_func_def] = STATE(15),
    [sym_comment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_binary_exp] = ACTIONS(21),
    [sym_unary_exp] = ACTIONS(21),
    [sym_regex] = ACTIONS(24),
    [sym_number] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      sym_number,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(13), 1,
      sym_string,
    STATE(21), 1,
      sym_exp,
    ACTIONS(38), 2,
      sym_statement,
      sym_regex,
    ACTIONS(36), 3,
      sym_binary_exp,
      sym_unary_exp,
      sym_identifier,
  [34] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_string,
    STATE(21), 1,
      sym_exp,
    ACTIONS(49), 2,
      sym_statement,
      sym_regex,
    STATE(5), 2,
      sym_comment,
      aux_sym_block_repeat1,
    ACTIONS(46), 3,
      sym_binary_exp,
      sym_unary_exp,
      sym_identifier,
  [66] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(42), 1,
      sym_number,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(13), 1,
      sym_string,
    STATE(21), 1,
      sym_exp,
    ACTIONS(38), 2,
      sym_statement,
      sym_regex,
    ACTIONS(36), 3,
      sym_binary_exp,
      sym_unary_exp,
      sym_identifier,
  [100] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(19), 1,
      sym_block,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(64), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [125] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(70), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [145] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(74), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [165] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(78), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [185] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(82), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [205] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(72), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(74), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [224] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(82), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [243] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(86), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [262] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(90), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [281] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(94), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [300] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(98), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [319] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(102), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [338] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(106), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [357] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(76), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(78), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [376] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(110), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(108), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [395] = 5,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      aux_sym_string_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    ACTIONS(120), 1,
      anon_sym_POUND,
    STATE(22), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [412] = 6,
    ACTIONS(120), 1,
      anon_sym_POUND,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      aux_sym_string_token1,
    ACTIONS(126), 1,
      sym_escape_sequence,
    STATE(22), 1,
      aux_sym_string_repeat1,
    STATE(23), 1,
      sym_comment,
  [431] = 6,
    ACTIONS(120), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      aux_sym_string_token1,
    ACTIONS(126), 1,
      sym_escape_sequence,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_repeat1,
    STATE(24), 1,
      sym_comment,
  [450] = 6,
    ACTIONS(120), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      aux_sym_string_token1,
    ACTIONS(126), 1,
      sym_escape_sequence,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [469] = 6,
    ACTIONS(120), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      aux_sym_string_token1,
    ACTIONS(126), 1,
      sym_escape_sequence,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_string_repeat1,
    STATE(26), 1,
      sym_comment,
  [488] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_comment,
    STATE(36), 1,
      sym_param_list,
  [504] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_param_list_repeat1,
  [520] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_param_list_repeat1,
  [536] = 4,
    ACTIONS(120), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      sym_escape_sequence,
    STATE(30), 1,
      sym_comment,
    ACTIONS(144), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [550] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(31), 2,
      sym_comment,
      aux_sym_param_list_repeat1,
  [564] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
    STATE(32), 1,
      sym_comment,
  [577] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
    STATE(33), 1,
      sym_comment,
  [590] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [601] = 3,
    ACTIONS(120), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
  [611] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_comment,
  [621] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_comment,
  [631] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(38), 1,
      sym_comment,
  [641] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_comment,
  [651] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(40), 1,
      sym_comment,
  [661] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 205,
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 243,
  [SMALL_STATE(15)] = 262,
  [SMALL_STATE(16)] = 281,
  [SMALL_STATE(17)] = 300,
  [SMALL_STATE(18)] = 319,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 357,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 412,
  [SMALL_STATE(24)] = 431,
  [SMALL_STATE(25)] = 450,
  [SMALL_STATE(26)] = 469,
  [SMALL_STATE(27)] = 488,
  [SMALL_STATE(28)] = 504,
  [SMALL_STATE(29)] = 520,
  [SMALL_STATE(30)] = 536,
  [SMALL_STATE(31)] = 550,
  [SMALL_STATE(32)] = 564,
  [SMALL_STATE(33)] = 577,
  [SMALL_STATE(34)] = 590,
  [SMALL_STATE(35)] = 601,
  [SMALL_STATE(36)] = 611,
  [SMALL_STATE(37)] = 621,
  [SMALL_STATE(38)] = 631,
  [SMALL_STATE(39)] = 641,
  [SMALL_STATE(40)] = 651,
  [SMALL_STATE(41)] = 661,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def, 6, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def, 6, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def, 5, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def, 5, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(30),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(30),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(38),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_awk(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
