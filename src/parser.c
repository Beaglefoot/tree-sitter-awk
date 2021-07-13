#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

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
  sym_func_call = 26,
  sym_args = 27,
  sym_comment = 28,
  aux_sym_program_repeat1 = 29,
  aux_sym_block_repeat1 = 30,
  aux_sym_string_repeat1 = 31,
  aux_sym_param_list_repeat1 = 32,
  aux_sym_args_repeat1 = 33,
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
  [sym_func_call] = "func_call",
  [sym_args] = "args",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
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
  [sym_func_call] = sym_func_call,
  [sym_args] = sym_args,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
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
  [sym_func_call] = {
    .visible = true,
    .named = true,
  },
  [sym_args] = {
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
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_func_name = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_func_name] = "func_name",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_func_name, 0},
  [1] =
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
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
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
          lookahead == 'v') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(12);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(53),
    [sym_rule] = STATE(29),
    [sym_pattern] = STATE(14),
    [sym_exp] = STATE(16),
    [sym_string] = STATE(8),
    [sym_func_def] = STATE(29),
    [sym_func_call] = STATE(8),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_binary_exp] = ACTIONS(9),
    [sym_unary_exp] = ACTIONS(9),
    [sym_regex] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_regex,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_function,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_pattern,
    STATE(16), 1,
      sym_exp,
    ACTIONS(9), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(8), 2,
      sym_string,
      sym_func_call,
    STATE(29), 2,
      sym_rule,
      sym_func_def,
  [46] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_regex,
    ACTIONS(32), 1,
      sym_number,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_function,
    STATE(14), 1,
      sym_pattern,
    STATE(16), 1,
      sym_exp,
    ACTIONS(26), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(3), 2,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(8), 2,
      sym_string,
      sym_func_call,
    STATE(29), 2,
      sym_rule,
      sym_func_def,
  [90] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_block_repeat1,
    STATE(18), 1,
      sym_exp,
    ACTIONS(43), 2,
      sym_statement,
      sym_regex,
    ACTIONS(47), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(25), 2,
      sym_string,
      sym_func_call,
  [127] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_comment,
    ACTIONS(55), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [152] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_number,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_exp,
    ACTIONS(62), 2,
      sym_statement,
      sym_regex,
    ACTIONS(67), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(6), 2,
      sym_comment,
      aux_sym_block_repeat1,
    STATE(25), 2,
      sym_string,
      sym_func_call,
  [187] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(18), 1,
      sym_exp,
    ACTIONS(43), 2,
      sym_statement,
      sym_regex,
    ACTIONS(47), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(25), 2,
      sym_string,
      sym_func_call,
  [224] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(55), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [246] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(80), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [268] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(84), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [290] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(88), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [312] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(92), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [334] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(41), 1,
      sym_exp,
    STATE(55), 1,
      sym_args,
    ACTIONS(9), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(8), 2,
      sym_string,
      sym_func_call,
  [367] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_comment,
    STATE(23), 1,
      sym_block,
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
  [392] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_comment,
    STATE(41), 1,
      sym_exp,
    STATE(48), 1,
      sym_args,
    ACTIONS(9), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(8), 2,
      sym_string,
      sym_func_call,
  [425] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(106), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [445] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(55), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [467] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(110), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [486] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(116), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [505] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(78), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(80), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [524] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(90), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(92), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [543] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(86), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(88), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [562] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(120), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [581] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(82), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(84), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [600] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(55), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [619] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(124), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [638] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(128), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [657] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(132), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [676] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(136), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [695] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_comment,
    STATE(46), 1,
      sym_exp,
    ACTIONS(9), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(8), 2,
      sym_string,
      sym_func_call,
  [722] = 6,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      aux_sym_string_token1,
    ACTIONS(142), 1,
      sym_escape_sequence,
    ACTIONS(144), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [741] = 6,
    ACTIONS(140), 1,
      aux_sym_string_token1,
    ACTIONS(142), 1,
      sym_escape_sequence,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_string_repeat1,
  [760] = 6,
    ACTIONS(140), 1,
      aux_sym_string_token1,
    ACTIONS(142), 1,
      sym_escape_sequence,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_string_repeat1,
    STATE(33), 1,
      sym_comment,
  [779] = 6,
    ACTIONS(140), 1,
      aux_sym_string_token1,
    ACTIONS(142), 1,
      sym_escape_sequence,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [798] = 5,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      aux_sym_string_token1,
    ACTIONS(157), 1,
      sym_escape_sequence,
    STATE(35), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [815] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(36), 2,
      sym_comment,
      aux_sym_param_list_repeat1,
  [829] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_param_list_repeat1,
  [845] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_comment,
    STATE(54), 1,
      sym_param_list,
  [861] = 4,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(175), 1,
      sym_escape_sequence,
    STATE(39), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [875] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(40), 2,
      sym_comment,
      aux_sym_args_repeat1,
  [889] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_args_repeat1,
  [905] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_param_list_repeat1,
    STATE(42), 1,
      sym_comment,
  [921] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_args_repeat1,
    STATE(43), 1,
      sym_comment,
  [937] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
    STATE(44), 1,
      sym_comment,
  [950] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [961] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [972] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
    STATE(47), 1,
      sym_comment,
  [985] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_comment,
  [995] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(49), 1,
      sym_comment,
  [1005] = 3,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
  [1015] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_comment,
  [1025] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(52), 1,
      sym_comment,
  [1035] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_comment,
  [1045] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_comment,
  [1055] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_comment,
  [1065] = 1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 224,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 312,
  [SMALL_STATE(13)] = 334,
  [SMALL_STATE(14)] = 367,
  [SMALL_STATE(15)] = 392,
  [SMALL_STATE(16)] = 425,
  [SMALL_STATE(17)] = 445,
  [SMALL_STATE(18)] = 467,
  [SMALL_STATE(19)] = 486,
  [SMALL_STATE(20)] = 505,
  [SMALL_STATE(21)] = 524,
  [SMALL_STATE(22)] = 543,
  [SMALL_STATE(23)] = 562,
  [SMALL_STATE(24)] = 581,
  [SMALL_STATE(25)] = 600,
  [SMALL_STATE(26)] = 619,
  [SMALL_STATE(27)] = 638,
  [SMALL_STATE(28)] = 657,
  [SMALL_STATE(29)] = 676,
  [SMALL_STATE(30)] = 695,
  [SMALL_STATE(31)] = 722,
  [SMALL_STATE(32)] = 741,
  [SMALL_STATE(33)] = 760,
  [SMALL_STATE(34)] = 779,
  [SMALL_STATE(35)] = 798,
  [SMALL_STATE(36)] = 815,
  [SMALL_STATE(37)] = 829,
  [SMALL_STATE(38)] = 845,
  [SMALL_STATE(39)] = 861,
  [SMALL_STATE(40)] = 875,
  [SMALL_STATE(41)] = 889,
  [SMALL_STATE(42)] = 905,
  [SMALL_STATE(43)] = 921,
  [SMALL_STATE(44)] = 937,
  [SMALL_STATE(45)] = 950,
  [SMALL_STATE(46)] = 961,
  [SMALL_STATE(47)] = 972,
  [SMALL_STATE(48)] = 985,
  [SMALL_STATE(49)] = 995,
  [SMALL_STATE(50)] = 1005,
  [SMALL_STATE(51)] = 1015,
  [SMALL_STATE(52)] = 1025,
  [SMALL_STATE(53)] = 1035,
  [SMALL_STATE(54)] = 1045,
  [SMALL_STATE(55)] = 1055,
  [SMALL_STATE(56)] = 1065,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 4, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 4, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 3, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 3, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def, 6, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def, 6, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def, 5, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def, 5, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(39),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(39),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(52),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(30),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
