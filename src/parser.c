#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_text_token1 = 2,
  aux_sym_text_token2 = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACE = 5,
  anon_sym_PIPE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_and = 8,
  anon_sym_or = 9,
  sym_ink = 10,
  sym__line = 11,
  sym_text = 12,
  sym_flow = 13,
  sym_conditional_text = 14,
  sym_alternatives = 15,
  sym_binary = 16,
  sym__binary_operator = 17,
  sym_identifier = 18,
  aux_sym_ink_repeat1 = 19,
  aux_sym_text_repeat1 = 20,
  aux_sym_flow_repeat1 = 21,
  aux_sym_alternatives_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\\n",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [sym_ink] = "ink",
  [sym__line] = "_line",
  [sym_text] = "text",
  [sym_flow] = "flow",
  [sym_conditional_text] = "conditional_text",
  [sym_alternatives] = "alternatives",
  [sym_binary] = "binary",
  [sym__binary_operator] = "_binary_operator",
  [sym_identifier] = "identifier",
  [aux_sym_ink_repeat1] = "ink_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_flow_repeat1] = "flow_repeat1",
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [sym_ink] = sym_ink,
  [sym__line] = sym__line,
  [sym_text] = sym_text,
  [sym_flow] = sym_flow,
  [sym_conditional_text] = sym_conditional_text,
  [sym_alternatives] = sym_alternatives,
  [sym_binary] = sym_binary,
  [sym__binary_operator] = sym__binary_operator,
  [sym_identifier] = sym_identifier,
  [aux_sym_ink_repeat1] = aux_sym_ink_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_flow_repeat1] = aux_sym_flow_repeat1,
  [aux_sym_alternatives_repeat1] = aux_sym_alternatives_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [sym_ink] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_text] = {
    .visible = true,
    .named = true,
  },
  [sym_alternatives] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym__binary_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ink_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
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
  [2] = {.index = 1, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_op, 1},
  [1] =
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
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 13,
  [14] = 13,
  [15] = 10,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 24,
  [28] = 22,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 34,
  [38] = 36,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '{') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
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
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(35),
    [sym__line] = STATE(5),
    [sym_text] = STATE(15),
    [sym_flow] = STATE(39),
    [sym_conditional_text] = STATE(15),
    [sym_alternatives] = STATE(15),
    [sym__binary_operator] = STATE(20),
    [aux_sym_ink_repeat1] = STATE(5),
    [aux_sym_text_repeat1] = STATE(20),
    [aux_sym_flow_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [aux_sym_text_token2] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(5),
    [anon_sym_or] = ACTIONS(5),
  },
  [2] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(4),
    [sym_conditional_text] = STATE(10),
    [sym_alternatives] = STATE(10),
    [sym_binary] = STATE(29),
    [sym__binary_operator] = STATE(17),
    [sym_identifier] = STATE(29),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_alternatives_repeat1] = STATE(4),
    [aux_sym_text_token1] = ACTIONS(11),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
  },
  [3] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(7),
    [sym_conditional_text] = STATE(10),
    [sym_alternatives] = STATE(10),
    [sym_binary] = STATE(31),
    [sym__binary_operator] = STATE(17),
    [sym_identifier] = STATE(31),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_alternatives_repeat1] = STATE(7),
    [aux_sym_text_token1] = ACTIONS(11),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
  },
  [4] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(6),
    [sym_conditional_text] = STATE(10),
    [sym_alternatives] = STATE(10),
    [sym__binary_operator] = STATE(17),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_alternatives_repeat1] = STATE(6),
    [aux_sym_text_token1] = ACTIONS(13),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
  },
  [5] = {
    [sym__line] = STATE(8),
    [sym_text] = STATE(15),
    [sym_flow] = STATE(39),
    [sym_conditional_text] = STATE(15),
    [sym_alternatives] = STATE(15),
    [sym__binary_operator] = STATE(20),
    [aux_sym_ink_repeat1] = STATE(8),
    [aux_sym_text_repeat1] = STATE(20),
    [aux_sym_flow_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_text_token1] = ACTIONS(5),
    [aux_sym_text_token2] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(5),
    [anon_sym_or] = ACTIONS(5),
  },
  [6] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(6),
    [sym_conditional_text] = STATE(10),
    [sym_alternatives] = STATE(10),
    [sym__binary_operator] = STATE(17),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_alternatives_repeat1] = STATE(6),
    [aux_sym_text_token1] = ACTIONS(33),
    [aux_sym_text_token2] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_or] = ACTIONS(33),
  },
  [7] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(6),
    [sym_conditional_text] = STATE(10),
    [sym_alternatives] = STATE(10),
    [sym__binary_operator] = STATE(17),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_alternatives_repeat1] = STATE(6),
    [aux_sym_text_token1] = ACTIONS(13),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
  },
  [8] = {
    [sym__line] = STATE(8),
    [sym_text] = STATE(15),
    [sym_flow] = STATE(39),
    [sym_conditional_text] = STATE(15),
    [sym_alternatives] = STATE(15),
    [sym__binary_operator] = STATE(20),
    [aux_sym_ink_repeat1] = STATE(8),
    [aux_sym_text_repeat1] = STATE(20),
    [aux_sym_flow_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_text_token1] = ACTIONS(51),
    [aux_sym_text_token2] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(51),
  },
  [9] = {
    [sym_text] = STATE(9),
    [sym_conditional_text] = STATE(9),
    [sym_alternatives] = STATE(9),
    [sym__binary_operator] = STATE(17),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(9),
    [aux_sym_text_token1] = ACTIONS(60),
    [aux_sym_text_token2] = ACTIONS(60),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_and] = ACTIONS(60),
    [anon_sym_or] = ACTIONS(60),
  },
  [10] = {
    [sym_text] = STATE(9),
    [sym_conditional_text] = STATE(9),
    [sym_alternatives] = STATE(9),
    [sym__binary_operator] = STATE(17),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(9),
    [aux_sym_text_token1] = ACTIONS(13),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
  },
  [11] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(34),
    [sym_conditional_text] = STATE(10),
    [sym_alternatives] = STATE(10),
    [sym__binary_operator] = STATE(17),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_text_token1] = ACTIONS(13),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
  },
  [12] = {
    [sym_text] = STATE(12),
    [sym_conditional_text] = STATE(12),
    [sym_alternatives] = STATE(12),
    [sym__binary_operator] = STATE(20),
    [aux_sym_text_repeat1] = STATE(20),
    [aux_sym_flow_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(69),
    [aux_sym_text_token1] = ACTIONS(73),
    [aux_sym_text_token2] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_and] = ACTIONS(73),
    [anon_sym_or] = ACTIONS(73),
  },
  [13] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(36),
    [sym_conditional_text] = STATE(10),
    [sym_alternatives] = STATE(10),
    [sym__binary_operator] = STATE(17),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_text_token1] = ACTIONS(13),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
  },
  [14] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(38),
    [sym_conditional_text] = STATE(10),
    [sym_alternatives] = STATE(10),
    [sym__binary_operator] = STATE(17),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_text_token1] = ACTIONS(13),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
  },
  [15] = {
    [sym_text] = STATE(12),
    [sym_conditional_text] = STATE(12),
    [sym_alternatives] = STATE(12),
    [sym__binary_operator] = STATE(20),
    [aux_sym_text_repeat1] = STATE(20),
    [aux_sym_flow_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(71),
    [aux_sym_text_token1] = ACTIONS(5),
    [aux_sym_text_token2] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_and] = ACTIONS(5),
    [anon_sym_or] = ACTIONS(5),
  },
  [16] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(37),
    [sym_conditional_text] = STATE(10),
    [sym_alternatives] = STATE(10),
    [sym__binary_operator] = STATE(17),
    [aux_sym_text_repeat1] = STATE(17),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_text_token1] = ACTIONS(13),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_and] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON,
    STATE(18), 2,
      sym__binary_operator,
      aux_sym_text_repeat1,
    ACTIONS(85), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
    ACTIONS(81), 4,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_and,
      anon_sym_or,
  [19] = 4,
    ACTIONS(90), 1,
      anon_sym_COLON,
    STATE(18), 2,
      sym__binary_operator,
      aux_sym_text_repeat1,
    ACTIONS(93), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
    ACTIONS(87), 4,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_and,
      anon_sym_or,
  [38] = 4,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(19), 2,
      sym__binary_operator,
      aux_sym_text_repeat1,
    ACTIONS(95), 5,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_or,
  [56] = 4,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    STATE(19), 2,
      sym__binary_operator,
      aux_sym_text_repeat1,
    ACTIONS(100), 5,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_or,
  [74] = 4,
    ACTIONS(106), 1,
      anon_sym_COLON,
    ACTIONS(104), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    ACTIONS(111), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(109), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [91] = 2,
    ACTIONS(114), 4,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(116), 4,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [104] = 2,
    ACTIONS(118), 4,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(120), 4,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [117] = 2,
    ACTIONS(122), 4,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(124), 4,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [130] = 2,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(118), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
  [142] = 2,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LBRACE,
    ACTIONS(128), 4,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_and,
      anon_sym_or,
  [154] = 2,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(122), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
  [166] = 2,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(114), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_and,
      anon_sym_or,
  [178] = 3,
    ACTIONS(130), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym__binary_operator,
    ACTIONS(132), 2,
      anon_sym_and,
      anon_sym_or,
  [189] = 2,
    STATE(33), 1,
      sym__binary_operator,
    ACTIONS(134), 3,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_or,
  [198] = 3,
    ACTIONS(136), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym__binary_operator,
    ACTIONS(132), 2,
      anon_sym_and,
      anon_sym_or,
  [209] = 1,
    ACTIONS(138), 3,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_or,
  [215] = 2,
    ACTIONS(140), 1,
      aux_sym_text_token1,
    STATE(30), 2,
      sym_binary,
      sym_identifier,
  [223] = 1,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
  [227] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [231] = 1,
    ACTIONS(146), 1,
      anon_sym_PIPE,
  [235] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
  [239] = 1,
    ACTIONS(150), 1,
      anon_sym_PIPE,
  [243] = 1,
    ACTIONS(152), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 19,
  [SMALL_STATE(19)] = 38,
  [SMALL_STATE(20)] = 56,
  [SMALL_STATE(21)] = 74,
  [SMALL_STATE(22)] = 91,
  [SMALL_STATE(23)] = 104,
  [SMALL_STATE(24)] = 117,
  [SMALL_STATE(25)] = 130,
  [SMALL_STATE(26)] = 142,
  [SMALL_STATE(27)] = 154,
  [SMALL_STATE(28)] = 166,
  [SMALL_STATE(29)] = 178,
  [SMALL_STATE(30)] = 189,
  [SMALL_STATE(31)] = 198,
  [SMALL_STATE(32)] = 209,
  [SMALL_STATE(33)] = 215,
  [SMALL_STATE(34)] = 223,
  [SMALL_STATE(35)] = 227,
  [SMALL_STATE(36)] = 231,
  [SMALL_STATE(37)] = 235,
  [SMALL_STATE(38)] = 239,
  [SMALL_STATE(39)] = 243,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(17),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(17),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(20),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(20),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(17),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(17),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(20),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(18),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(19),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), REDUCE(aux_sym_text_repeat1, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), REDUCE(aux_sym_text_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_text, 7, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_text, 7, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
