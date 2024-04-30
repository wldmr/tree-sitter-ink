#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_ink_token1 = 1,
  sym_text = 2,
  anon_sym_LBRACE = 3,
  anon_sym_PIPE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COLON = 6,
  aux_sym_expr_token1 = 7,
  anon_sym_not = 8,
  anon_sym_BANG = 9,
  anon_sym_EQ_EQ = 10,
  anon_sym_GT = 11,
  anon_sym_LT = 12,
  anon_sym_or = 13,
  anon_sym_PIPE_PIPE = 14,
  anon_sym_and = 15,
  anon_sym_AMP_AMP = 16,
  sym_identifier = 17,
  sym_ink = 18,
  sym_flow = 19,
  sym_alternatives = 20,
  sym_conditional_text = 21,
  sym_binary = 22,
  sym_unary = 23,
  sym__unary_operator = 24,
  sym__binary_operator = 25,
  aux_sym_ink_repeat1 = 26,
  aux_sym_flow_repeat1 = 27,
  aux_sym_alternatives_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_ink_token1] = "ink_token1",
  [sym_text] = "text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_expr_token1] = "number",
  [anon_sym_not] = "not",
  [anon_sym_BANG] = "!",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_or] = "or",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_and] = "and",
  [anon_sym_AMP_AMP] = "&&",
  [sym_identifier] = "identifier",
  [sym_ink] = "ink",
  [sym_flow] = "flow",
  [sym_alternatives] = "alternatives",
  [sym_conditional_text] = "conditional_text",
  [sym_binary] = "binary",
  [sym_unary] = "unary",
  [sym__unary_operator] = "_unary_operator",
  [sym__binary_operator] = "_binary_operator",
  [aux_sym_ink_repeat1] = "ink_repeat1",
  [aux_sym_flow_repeat1] = "flow_repeat1",
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_ink_token1] = aux_sym_ink_token1,
  [sym_text] = sym_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_expr_token1] = aux_sym_expr_token1,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [sym_identifier] = sym_identifier,
  [sym_ink] = sym_ink,
  [sym_flow] = sym_flow,
  [sym_alternatives] = sym_alternatives,
  [sym_conditional_text] = sym_conditional_text,
  [sym_binary] = sym_binary,
  [sym_unary] = sym_unary,
  [sym__unary_operator] = sym__unary_operator,
  [sym__binary_operator] = sym__binary_operator,
  [aux_sym_ink_repeat1] = aux_sym_ink_repeat1,
  [aux_sym_flow_repeat1] = aux_sym_flow_repeat1,
  [aux_sym_alternatives_repeat1] = aux_sym_alternatives_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_ink_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_ink] = {
    .visible = true,
    .named = true,
  },
  [sym_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_alternatives] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_text] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_unary] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_operator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_ink_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternatives_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_condition = 1,
  field_else = 2,
  field_iftrue = 3,
  field_op = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_else] = "else",
  [field_iftrue] = "iftrue",
  [field_op] = "op",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_op, 0},
  [1] =
    {field_op, 1},
  [2] =
    {field_condition, 1},
    {field_else, 5},
    {field_iftrue, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 15,
  [21] = 19,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 28,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '|') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '{') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '|') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(43);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_ink_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_ink_token1);
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(27);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_expr_token1] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(29),
    [sym_flow] = STATE(33),
    [sym_alternatives] = STATE(20),
    [sym_conditional_text] = STATE(20),
    [aux_sym_ink_repeat1] = STATE(11),
    [aux_sym_flow_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [2] = {
    [sym_flow] = STATE(8),
    [sym_alternatives] = STATE(15),
    [sym_conditional_text] = STATE(15),
    [sym_binary] = STATE(7),
    [sym_unary] = STATE(7),
    [sym__unary_operator] = STATE(16),
    [aux_sym_flow_repeat1] = STATE(15),
    [aux_sym_alternatives_repeat1] = STATE(8),
    [sym_text] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym_expr_token1] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(15),
  },
  [3] = {
    [sym_flow] = STATE(6),
    [sym_alternatives] = STATE(15),
    [sym_conditional_text] = STATE(15),
    [sym_binary] = STATE(5),
    [sym_unary] = STATE(5),
    [sym__unary_operator] = STATE(16),
    [aux_sym_flow_repeat1] = STATE(15),
    [aux_sym_alternatives_repeat1] = STATE(6),
    [sym_text] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(19),
    [aux_sym_expr_token1] = ACTIONS(21),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(17),
    [sym_identifier] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(14), 1,
      sym__binary_operator,
    ACTIONS(23), 8,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [14] = 3,
    ACTIONS(25), 1,
      anon_sym_COLON,
    STATE(14), 1,
      sym__binary_operator,
    ACTIONS(27), 7,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [30] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(15), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [52] = 3,
    ACTIONS(35), 1,
      anon_sym_COLON,
    STATE(14), 1,
      sym__binary_operator,
    ACTIONS(27), 7,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [68] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(15), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [90] = 3,
    ACTIONS(39), 1,
      anon_sym_COLON,
    STATE(14), 1,
      sym__binary_operator,
    ACTIONS(27), 7,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [106] = 6,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(15), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [128] = 6,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_ink_repeat1,
    STATE(33), 1,
      sym_flow,
    STATE(20), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [149] = 6,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_text,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_ink_repeat1,
    STATE(33), 1,
      sym_flow,
    STATE(20), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [170] = 4,
    ACTIONS(62), 1,
      sym_text,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [186] = 6,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(70), 1,
      aux_sym_expr_token1,
    ACTIONS(72), 1,
      anon_sym_BANG,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(16), 1,
      sym__unary_operator,
    STATE(9), 2,
      sym_binary,
      sym_unary,
  [206] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      sym_text,
    ACTIONS(78), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [222] = 6,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(72), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      aux_sym_expr_token1,
    ACTIONS(82), 1,
      sym_identifier,
    STATE(16), 1,
      sym__unary_operator,
    STATE(4), 2,
      sym_binary,
      sym_unary,
  [242] = 4,
    ACTIONS(68), 1,
      aux_sym_ink_token1,
    ACTIONS(84), 1,
      sym_text,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(17), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [257] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_text,
    STATE(28), 1,
      sym_flow,
    STATE(15), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [272] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_text,
    STATE(30), 1,
      sym_flow,
    STATE(15), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [287] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      aux_sym_ink_token1,
    ACTIONS(90), 1,
      sym_text,
    STATE(17), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [302] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_text,
    STATE(31), 1,
      sym_flow,
    STATE(15), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [317] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_text,
    STATE(32), 1,
      sym_flow,
    STATE(15), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [332] = 2,
    ACTIONS(92), 1,
      sym_text,
    ACTIONS(94), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [341] = 2,
    ACTIONS(96), 1,
      sym_text,
    ACTIONS(98), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [350] = 1,
    ACTIONS(94), 3,
      aux_sym_ink_token1,
      sym_text,
      anon_sym_LBRACE,
  [356] = 1,
    ACTIONS(98), 3,
      aux_sym_ink_token1,
      sym_text,
      anon_sym_LBRACE,
  [362] = 2,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym_text,
  [370] = 1,
    ACTIONS(102), 1,
      anon_sym_PIPE,
  [374] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [378] = 1,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
  [382] = 1,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
  [386] = 1,
    ACTIONS(110), 1,
      anon_sym_PIPE,
  [390] = 1,
    ACTIONS(112), 1,
      aux_sym_ink_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 206,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 242,
  [SMALL_STATE(18)] = 257,
  [SMALL_STATE(19)] = 272,
  [SMALL_STATE(20)] = 287,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 317,
  [SMALL_STATE(23)] = 332,
  [SMALL_STATE(24)] = 341,
  [SMALL_STATE(25)] = 350,
  [SMALL_STATE(26)] = 356,
  [SMALL_STATE(27)] = 362,
  [SMALL_STATE(28)] = 370,
  [SMALL_STATE(29)] = 374,
  [SMALL_STATE(30)] = 378,
  [SMALL_STATE(31)] = 382,
  [SMALL_STATE(32)] = 386,
  [SMALL_STATE(33)] = 390,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(15),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(3),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(20),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(13),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(17),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_text, 7, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_text, 7, .production_id = 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ink() {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
