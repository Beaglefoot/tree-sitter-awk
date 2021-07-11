#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_statement = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_binary_exp = 4,
  sym_unary_exp = 5,
  sym_regex = 6,
  sym_identifier = 7,
  sym_number = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  sym_escape_sequence = 11,
  anon_sym_POUND = 12,
  aux_sym_comment_token1 = 13,
  sym_program = 14,
  sym_rule = 15,
  sym_pattern = 16,
  sym_block = 17,
  sym_exp = 18,
  sym_string = 19,
  sym_comment = 20,
  aux_sym_program_repeat1 = 21,
  aux_sym_block_repeat1 = 22,
  aux_sym_string_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_statement] = "statement",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_binary_exp] = "binary_exp",
  [sym_unary_exp] = "unary_exp",
  [sym_regex] = "regex",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_program] = "program",
  [sym_rule] = "rule",
  [sym_pattern] = "pattern",
  [sym_block] = "block",
  [sym_exp] = "exp",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_statement] = sym_statement,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_binary_exp] = sym_binary_exp,
  [sym_unary_exp] = sym_unary_exp,
  [sym_regex] = sym_regex,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_program] = sym_program,
  [sym_rule] = sym_rule,
  [sym_pattern] = sym_pattern,
  [sym_block] = sym_block,
  [sym_exp] = sym_exp,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_identifier] = {
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
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'x') ADVANCE(33);
      if (lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 32:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_statement);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_binary_exp);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_unary_exp);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
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
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 0},
  [23] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_statement] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_binary_exp] = ACTIONS(1),
    [sym_unary_exp] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(22),
    [sym_rule] = STATE(15),
    [sym_pattern] = STATE(10),
    [sym_exp] = STATE(11),
    [sym_string] = STATE(7),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_binary_exp] = ACTIONS(7),
    [sym_unary_exp] = ACTIONS(7),
    [sym_regex] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_number] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [2] = {
    [sym_rule] = STATE(15),
    [sym_pattern] = STATE(10),
    [sym_exp] = STATE(11),
    [sym_string] = STATE(7),
    [sym_comment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_binary_exp] = ACTIONS(7),
    [sym_unary_exp] = ACTIONS(7),
    [sym_regex] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_number] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [3] = {
    [sym_rule] = STATE(15),
    [sym_pattern] = STATE(10),
    [sym_exp] = STATE(11),
    [sym_string] = STATE(7),
    [sym_comment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_binary_exp] = ACTIONS(19),
    [sym_unary_exp] = ACTIONS(19),
    [sym_regex] = ACTIONS(22),
    [sym_identifier] = ACTIONS(25),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [4] = {
    [sym_exp] = STATE(12),
    [sym_string] = STATE(7),
    [sym_comment] = STATE(4),
    [aux_sym_block_repeat1] = STATE(4),
    [sym_statement] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(34),
    [sym_binary_exp] = ACTIONS(36),
    [sym_unary_exp] = ACTIONS(36),
    [sym_regex] = ACTIONS(31),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [5] = {
    [sym_exp] = STATE(12),
    [sym_string] = STATE(7),
    [sym_comment] = STATE(5),
    [aux_sym_block_repeat1] = STATE(4),
    [sym_statement] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(47),
    [sym_binary_exp] = ACTIONS(7),
    [sym_unary_exp] = ACTIONS(7),
    [sym_regex] = ACTIONS(45),
    [sym_identifier] = ACTIONS(11),
    [sym_number] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [6] = {
    [sym_exp] = STATE(12),
    [sym_string] = STATE(7),
    [sym_comment] = STATE(6),
    [aux_sym_block_repeat1] = STATE(5),
    [sym_statement] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(49),
    [sym_binary_exp] = ACTIONS(7),
    [sym_unary_exp] = ACTIONS(7),
    [sym_regex] = ACTIONS(45),
    [sym_identifier] = ACTIONS(11),
    [sym_number] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(7), 1,
      sym_comment,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      sym_statement,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_number,
      anon_sym_DQUOTE,
  [21] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(8), 1,
      sym_comment,
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      sym_statement,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_number,
      anon_sym_DQUOTE,
  [42] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    ACTIONS(59), 9,
      ts_builtin_sym_end,
      sym_statement,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_number,
      anon_sym_DQUOTE,
  [63] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(10), 1,
      sym_comment,
    STATE(16), 1,
      sym_block,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_number,
      anon_sym_DQUOTE,
  [87] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(11), 1,
      sym_comment,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_number,
      anon_sym_DQUOTE,
  [106] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(12), 1,
      sym_comment,
    ACTIONS(73), 7,
      sym_statement,
      anon_sym_RBRACE,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_number,
      anon_sym_DQUOTE,
  [125] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(13), 1,
      sym_comment,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_number,
      anon_sym_DQUOTE,
  [143] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(14), 1,
      sym_comment,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_number,
      anon_sym_DQUOTE,
  [161] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(15), 1,
      sym_comment,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_number,
      anon_sym_DQUOTE,
  [179] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(16), 1,
      sym_comment,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      sym_binary_exp,
      sym_unary_exp,
      sym_regex,
      sym_number,
      anon_sym_DQUOTE,
  [197] = 6,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_string_token1,
    ACTIONS(97), 1,
      sym_escape_sequence,
    ACTIONS(99), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_string_repeat1,
  [216] = 6,
    ACTIONS(95), 1,
      aux_sym_string_token1,
    ACTIONS(97), 1,
      sym_escape_sequence,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_string_repeat1,
  [235] = 5,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      aux_sym_string_token1,
    ACTIONS(108), 1,
      sym_escape_sequence,
    STATE(19), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [252] = 4,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      sym_escape_sequence,
    STATE(20), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [266] = 3,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
  [276] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_comment,
  [286] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 21,
  [SMALL_STATE(9)] = 42,
  [SMALL_STATE(10)] = 63,
  [SMALL_STATE(11)] = 87,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 125,
  [SMALL_STATE(14)] = 143,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 179,
  [SMALL_STATE(17)] = 197,
  [SMALL_STATE(18)] = 216,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 266,
  [SMALL_STATE(22)] = 276,
  [SMALL_STATE(23)] = 286,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
