#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 9
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
  anon_sym_COLON = 3,
  aux_sym_text_token2 = 4,
  anon_sym_LBRACE = 5,
  anon_sym_PIPE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_and = 8,
  anon_sym_or = 9,
  sym_ink = 10,
  sym__line = 11,
  sym_text = 12,
  sym_flow = 13,
  sym_alternatives = 14,
  sym_conditional_text = 15,
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
  [anon_sym_COLON] = ":",
  [aux_sym_text_token2] = "text_token2",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [sym_ink] = "ink",
  [sym__line] = "_line",
  [sym_text] = "text",
  [sym_flow] = "flow",
  [sym_alternatives] = "alternatives",
  [sym_conditional_text] = "conditional_text",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [sym_ink] = sym_ink,
  [sym__line] = sym__line,
  [sym_text] = sym_text,
  [sym_flow] = sym_flow,
  [sym_alternatives] = sym_alternatives,
  [sym_conditional_text] = sym_conditional_text,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
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
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 24,
  [28] = 21,
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
      if (eof) ADVANCE(8);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '}') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '{') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(13);
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
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 6:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '}') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'd') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'n') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'r') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
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
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_text_token1);
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
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(14);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
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
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 7},
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
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
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
    [sym_alternatives] = STATE(15),
    [sym_conditional_text] = STATE(15),
    [aux_sym_ink_repeat1] = STATE(5),
    [aux_sym_text_repeat1] = STATE(22),
    [aux_sym_flow_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(5),
    [aux_sym_text_token2] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [2] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(4),
    [sym_alternatives] = STATE(10),
    [sym_conditional_text] = STATE(10),
    [sym_binary] = STATE(29),
    [sym_identifier] = STATE(29),
    [aux_sym_text_repeat1] = STATE(18),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_alternatives_repeat1] = STATE(4),
    [aux_sym_text_token1] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(19),
  },
  [3] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(7),
    [sym_alternatives] = STATE(10),
    [sym_conditional_text] = STATE(10),
    [sym_binary] = STATE(31),
    [sym_identifier] = STATE(31),
    [aux_sym_text_repeat1] = STATE(18),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_alternatives_repeat1] = STATE(7),
    [aux_sym_text_token1] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_text_token2] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(23),
  },
  [4] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(6),
    [sym_alternatives] = STATE(10),
    [sym_conditional_text] = STATE(10),
    [aux_sym_text_repeat1] = STATE(18),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_alternatives_repeat1] = STATE(6),
    [aux_sym_text_token1] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_text_token2] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(29),
  },
  [5] = {
    [sym__line] = STATE(8),
    [sym_text] = STATE(15),
    [sym_flow] = STATE(39),
    [sym_alternatives] = STATE(15),
    [sym_conditional_text] = STATE(15),
    [aux_sym_ink_repeat1] = STATE(8),
    [aux_sym_text_repeat1] = STATE(22),
    [aux_sym_flow_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_text_token1] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(5),
    [aux_sym_text_token2] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [6] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(6),
    [sym_alternatives] = STATE(10),
    [sym_conditional_text] = STATE(10),
    [aux_sym_text_repeat1] = STATE(18),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_alternatives_repeat1] = STATE(6),
    [aux_sym_text_token1] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [aux_sym_text_token2] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(45),
  },
  [7] = {
    [sym_text] = STATE(10),
    [sym_flow] = STATE(6),
    [sym_alternatives] = STATE(10),
    [sym_conditional_text] = STATE(10),
    [aux_sym_text_repeat1] = STATE(18),
    [aux_sym_flow_repeat1] = STATE(10),
    [aux_sym_alternatives_repeat1] = STATE(6),
    [aux_sym_text_token1] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(11),
    [aux_sym_text_token2] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(47),
  },
  [8] = {
    [sym__line] = STATE(8),
    [sym_text] = STATE(15),
    [sym_flow] = STATE(39),
    [sym_alternatives] = STATE(15),
    [sym_conditional_text] = STATE(15),
    [aux_sym_ink_repeat1] = STATE(8),
    [aux_sym_text_repeat1] = STATE(22),
    [aux_sym_flow_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_text_token1] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(51),
    [aux_sym_text_token2] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(57),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(63), 1,
      aux_sym_text_token2,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      aux_sym_text_repeat1,
    ACTIONS(60), 2,
      aux_sym_text_token1,
      anon_sym_COLON,
    ACTIONS(69), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
    STATE(9), 4,
      sym_text,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [24] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      aux_sym_text_token2,
    STATE(18), 1,
      aux_sym_text_repeat1,
    ACTIONS(11), 2,
      aux_sym_text_token1,
      anon_sym_COLON,
    ACTIONS(71), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
    STATE(9), 4,
      sym_text,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [48] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      aux_sym_text_token2,
    STATE(18), 1,
      aux_sym_text_repeat1,
    STATE(34), 1,
      sym_flow,
    ACTIONS(11), 2,
      aux_sym_text_token1,
      anon_sym_COLON,
    STATE(10), 4,
      sym_text,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [71] = 5,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      aux_sym_text_repeat1,
    ACTIONS(73), 3,
      aux_sym_text_token1,
      anon_sym_COLON,
      aux_sym_text_token2,
    STATE(12), 4,
      sym_text,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [92] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      aux_sym_text_token2,
    STATE(18), 1,
      aux_sym_text_repeat1,
    STATE(36), 1,
      sym_flow,
    ACTIONS(11), 2,
      aux_sym_text_token1,
      anon_sym_COLON,
    STATE(10), 4,
      sym_text,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [115] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      aux_sym_text_token2,
    STATE(18), 1,
      aux_sym_text_repeat1,
    STATE(38), 1,
      sym_flow,
    ACTIONS(11), 2,
      aux_sym_text_token1,
      anon_sym_COLON,
    STATE(10), 4,
      sym_text,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [138] = 5,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      aux_sym_text_repeat1,
    ACTIONS(7), 3,
      aux_sym_text_token1,
      anon_sym_COLON,
      aux_sym_text_token2,
    STATE(12), 4,
      sym_text,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [159] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      aux_sym_text_token2,
    STATE(18), 1,
      aux_sym_text_repeat1,
    STATE(37), 1,
      sym_flow,
    ACTIONS(11), 2,
      aux_sym_text_token1,
      anon_sym_COLON,
    STATE(10), 4,
      sym_text,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [182] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(81), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    ACTIONS(88), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(86), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [199] = 4,
    ACTIONS(92), 1,
      aux_sym_text_token2,
    STATE(19), 1,
      aux_sym_text_repeat1,
    ACTIONS(90), 2,
      aux_sym_text_token1,
      anon_sym_COLON,
    ACTIONS(94), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [215] = 4,
    ACTIONS(99), 1,
      aux_sym_text_token2,
    STATE(19), 1,
      aux_sym_text_repeat1,
    ACTIONS(96), 2,
      aux_sym_text_token1,
      anon_sym_COLON,
    ACTIONS(102), 3,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [231] = 4,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      aux_sym_text_repeat1,
    ACTIONS(104), 3,
      aux_sym_text_token1,
      anon_sym_COLON,
      aux_sym_text_token2,
  [246] = 2,
    ACTIONS(111), 1,
      aux_sym_text_token2,
    ACTIONS(109), 5,
      aux_sym_text_token1,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [257] = 4,
    ACTIONS(94), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      aux_sym_text_repeat1,
    ACTIONS(113), 3,
      aux_sym_text_token1,
      anon_sym_COLON,
      aux_sym_text_token2,
  [272] = 2,
    ACTIONS(119), 1,
      aux_sym_text_token2,
    ACTIONS(117), 5,
      aux_sym_text_token1,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [283] = 2,
    ACTIONS(123), 1,
      aux_sym_text_token2,
    ACTIONS(121), 5,
      aux_sym_text_token1,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [294] = 2,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 4,
      aux_sym_text_token1,
      anon_sym_COLON,
      aux_sym_text_token2,
      anon_sym_LBRACE,
  [304] = 2,
    ACTIONS(127), 1,
      aux_sym_text_token2,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      aux_sym_text_token1,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [314] = 2,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 4,
      aux_sym_text_token1,
      anon_sym_COLON,
      aux_sym_text_token2,
      anon_sym_LBRACE,
  [324] = 2,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 4,
      aux_sym_text_token1,
      anon_sym_COLON,
      aux_sym_text_token2,
      anon_sym_LBRACE,
  [334] = 3,
    ACTIONS(129), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym__binary_operator,
    ACTIONS(131), 2,
      anon_sym_and,
      anon_sym_or,
  [345] = 2,
    STATE(33), 1,
      sym__binary_operator,
    ACTIONS(133), 3,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_or,
  [354] = 3,
    ACTIONS(135), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym__binary_operator,
    ACTIONS(131), 2,
      anon_sym_and,
      anon_sym_or,
  [365] = 1,
    ACTIONS(137), 3,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_or,
  [371] = 2,
    ACTIONS(139), 1,
      aux_sym_text_token2,
    STATE(30), 2,
      sym_binary,
      sym_identifier,
  [379] = 1,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
  [383] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [387] = 1,
    ACTIONS(145), 1,
      anon_sym_PIPE,
  [391] = 1,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
  [395] = 1,
    ACTIONS(149), 1,
      anon_sym_PIPE,
  [399] = 1,
    ACTIONS(151), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 24,
  [SMALL_STATE(11)] = 48,
  [SMALL_STATE(12)] = 71,
  [SMALL_STATE(13)] = 92,
  [SMALL_STATE(14)] = 115,
  [SMALL_STATE(15)] = 138,
  [SMALL_STATE(16)] = 159,
  [SMALL_STATE(17)] = 182,
  [SMALL_STATE(18)] = 199,
  [SMALL_STATE(19)] = 215,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 246,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 272,
  [SMALL_STATE(24)] = 283,
  [SMALL_STATE(25)] = 294,
  [SMALL_STATE(26)] = 304,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 324,
  [SMALL_STATE(29)] = 334,
  [SMALL_STATE(30)] = 345,
  [SMALL_STATE(31)] = 354,
  [SMALL_STATE(32)] = 365,
  [SMALL_STATE(33)] = 371,
  [SMALL_STATE(34)] = 379,
  [SMALL_STATE(35)] = 383,
  [SMALL_STATE(36)] = 387,
  [SMALL_STATE(37)] = 391,
  [SMALL_STATE(38)] = 395,
  [SMALL_STATE(39)] = 399,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(18),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(18),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(22),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(22),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(18),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(18),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(22),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), REDUCE(aux_sym_text_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(19),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(20),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_text, 7, .production_id = 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_text, 7, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
