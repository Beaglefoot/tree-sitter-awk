#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 35
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
  sym__primitive = 23,
  sym_string = 24,
  sym_func_def = 25,
  sym_param_list = 26,
  sym_func_call = 27,
  sym_args = 28,
  sym_comment = 29,
  aux_sym_program_repeat1 = 30,
  aux_sym_block_repeat1 = 31,
  aux_sym_string_repeat1 = 32,
  aux_sym_param_list_repeat1 = 33,
  aux_sym_args_repeat1 = 34,
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
  [sym__primitive] = "_primitive",
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
  [sym__primitive] = sym__primitive,
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
  [sym__primitive] = {
    .visible = false,
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
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
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
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(52),
    [sym_rule] = STATE(28),
    [sym_pattern] = STATE(16),
    [sym_exp] = STATE(17),
    [sym__primitive] = STATE(17),
    [sym_string] = STATE(11),
    [sym_func_def] = STATE(28),
    [sym_func_call] = STATE(10),
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
  [2] = {
    [sym_rule] = STATE(28),
    [sym_pattern] = STATE(16),
    [sym_exp] = STATE(17),
    [sym__primitive] = STATE(17),
    [sym_string] = STATE(11),
    [sym_func_def] = STATE(28),
    [sym_func_call] = STATE(10),
    [sym_comment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(7),
    [sym_binary_exp] = ACTIONS(9),
    [sym_unary_exp] = ACTIONS(9),
    [sym_regex] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [3] = {
    [sym_rule] = STATE(28),
    [sym_pattern] = STATE(16),
    [sym_exp] = STATE(17),
    [sym__primitive] = STATE(17),
    [sym_string] = STATE(11),
    [sym_func_def] = STATE(28),
    [sym_func_call] = STATE(10),
    [sym_comment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_binary_exp] = ACTIONS(26),
    [sym_unary_exp] = ACTIONS(26),
    [sym_regex] = ACTIONS(29),
    [sym_number] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_function] = ACTIONS(38),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      sym_number,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string,
    STATE(30), 1,
      sym_func_call,
    ACTIONS(44), 2,
      sym_statement,
      sym_regex,
    ACTIONS(49), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(4), 2,
      sym_comment,
      aux_sym_block_repeat1,
    STATE(24), 2,
      sym_exp,
      sym__primitive,
  [38] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(29), 1,
      sym_string,
    STATE(30), 1,
      sym_func_call,
    ACTIONS(60), 2,
      sym_statement,
      sym_regex,
    ACTIONS(64), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(24), 2,
      sym_exp,
      sym__primitive,
  [78] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(29), 1,
      sym_string,
    STATE(30), 1,
      sym_func_call,
    ACTIONS(60), 2,
      sym_statement,
      sym_regex,
    ACTIONS(64), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(24), 2,
      sym_exp,
      sym__primitive,
  [118] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_comment,
    ACTIONS(74), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [143] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
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
  [165] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      sym_func_call,
    STATE(11), 1,
      sym_string,
    STATE(57), 1,
      sym_args,
    ACTIONS(9), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(45), 2,
      sym_exp,
      sym__primitive,
  [201] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(74), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [223] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(86), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [245] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(90), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [267] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_func_call,
    STATE(11), 1,
      sym_string,
    STATE(13), 1,
      sym_comment,
    STATE(56), 1,
      sym_args,
    ACTIONS(9), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(45), 2,
      sym_exp,
      sym__primitive,
  [303] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(96), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [325] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(100), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [347] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_comment,
    STATE(22), 1,
      sym_block,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(104), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [372] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(110), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [392] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
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
  [414] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_func_call,
    STATE(11), 1,
      sym_string,
    STATE(19), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_binary_exp,
      sym_unary_exp,
    STATE(46), 2,
      sym_exp,
      sym__primitive,
  [444] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
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
  [463] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
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
  [482] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
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
  [501] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(88), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(90), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [520] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(126), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [539] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
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
  [558] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(98), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(100), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [577] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(94), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(96), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [596] = 4,
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
  [615] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(84), 3,
      anon_sym_RBRACE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(86), 5,
      sym_statement,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
  [634] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
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
  [653] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
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
  [672] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(140), 5,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_identifier,
      anon_sym_function,
  [691] = 6,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      aux_sym_string_token1,
    ACTIONS(146), 1,
      sym_escape_sequence,
    ACTIONS(148), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_string_repeat1,
  [710] = 6,
    ACTIONS(144), 1,
      aux_sym_string_token1,
    ACTIONS(146), 1,
      sym_escape_sequence,
    ACTIONS(148), 1,
      anon_sym_POUND,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [729] = 6,
    ACTIONS(144), 1,
      aux_sym_string_token1,
    ACTIONS(146), 1,
      sym_escape_sequence,
    ACTIONS(148), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_string_repeat1,
    STATE(35), 1,
      sym_comment,
  [748] = 5,
    ACTIONS(148), 1,
      anon_sym_POUND,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      aux_sym_string_token1,
    ACTIONS(159), 1,
      sym_escape_sequence,
    STATE(36), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [765] = 6,
    ACTIONS(144), 1,
      aux_sym_string_token1,
    ACTIONS(146), 1,
      sym_escape_sequence,
    ACTIONS(148), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym_string_repeat1,
    STATE(37), 1,
      sym_comment,
  [784] = 4,
    ACTIONS(148), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      sym_escape_sequence,
    STATE(38), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [798] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(39), 2,
      sym_comment,
      aux_sym_args_repeat1,
  [812] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_param_list_repeat1,
  [828] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(41), 2,
      sym_comment,
      aux_sym_param_list_repeat1,
  [842] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_param_list_repeat1,
    STATE(42), 1,
      sym_comment,
  [858] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_args_repeat1,
    STATE(43), 1,
      sym_comment,
  [874] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym_comment,
    STATE(53), 1,
      sym_param_list,
  [890] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_args_repeat1,
    STATE(45), 1,
      sym_comment,
  [906] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [917] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
    STATE(47), 1,
      sym_comment,
  [930] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [941] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
    STATE(49), 1,
      sym_comment,
  [954] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(194), 1,
      sym_identifier,
    STATE(50), 1,
      sym_comment,
  [964] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_comment,
  [974] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_comment,
  [984] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_comment,
  [994] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(54), 1,
      sym_comment,
  [1004] = 3,
    ACTIONS(148), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_comment,
  [1014] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      sym_comment,
  [1024] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_comment,
  [1034] = 1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 223,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 267,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 325,
  [SMALL_STATE(16)] = 347,
  [SMALL_STATE(17)] = 372,
  [SMALL_STATE(18)] = 392,
  [SMALL_STATE(19)] = 414,
  [SMALL_STATE(20)] = 444,
  [SMALL_STATE(21)] = 463,
  [SMALL_STATE(22)] = 482,
  [SMALL_STATE(23)] = 501,
  [SMALL_STATE(24)] = 520,
  [SMALL_STATE(25)] = 539,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 577,
  [SMALL_STATE(28)] = 596,
  [SMALL_STATE(29)] = 615,
  [SMALL_STATE(30)] = 634,
  [SMALL_STATE(31)] = 653,
  [SMALL_STATE(32)] = 672,
  [SMALL_STATE(33)] = 691,
  [SMALL_STATE(34)] = 710,
  [SMALL_STATE(35)] = 729,
  [SMALL_STATE(36)] = 748,
  [SMALL_STATE(37)] = 765,
  [SMALL_STATE(38)] = 784,
  [SMALL_STATE(39)] = 798,
  [SMALL_STATE(40)] = 812,
  [SMALL_STATE(41)] = 828,
  [SMALL_STATE(42)] = 842,
  [SMALL_STATE(43)] = 858,
  [SMALL_STATE(44)] = 874,
  [SMALL_STATE(45)] = 890,
  [SMALL_STATE(46)] = 906,
  [SMALL_STATE(47)] = 917,
  [SMALL_STATE(48)] = 930,
  [SMALL_STATE(49)] = 941,
  [SMALL_STATE(50)] = 954,
  [SMALL_STATE(51)] = 964,
  [SMALL_STATE(52)] = 974,
  [SMALL_STATE(53)] = 984,
  [SMALL_STATE(54)] = 994,
  [SMALL_STATE(55)] = 1004,
  [SMALL_STATE(56)] = 1014,
  [SMALL_STATE(57)] = 1024,
  [SMALL_STATE(58)] = 1034,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(35),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 4, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 4, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 3, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 3, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def, 5, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def, 5, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def, 6, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def, 6, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(19),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(50),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
