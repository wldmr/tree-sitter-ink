#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym__line_token1 = 1,
  sym_text = 2,
  anon_sym_LBRACE = 3,
  anon_sym_PIPE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COLON = 6,
  anon_sym_and = 7,
  anon_sym_or = 8,
  sym_identifier = 9,
  sym_number = 10,
  sym_ink = 11,
  sym__line = 12,
  sym_flow = 13,
  sym_alternatives = 14,
  sym_conditional_text = 15,
  sym_binary = 16,
  sym__binary_operator = 17,
  aux_sym_ink_repeat1 = 18,
  aux_sym_flow_repeat1 = 19,
  aux_sym_alternatives_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "\\n",
  [sym_text] = "text",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_ink] = "ink",
  [sym__line] = "_line",
  [sym_flow] = "flow",
  [sym_alternatives] = "alternatives",
  [sym_conditional_text] = "conditional_text",
  [sym_binary] = "binary",
  [sym__binary_operator] = "_binary_operator",
  [aux_sym_ink_repeat1] = "ink_repeat1",
  [aux_sym_flow_repeat1] = "flow_repeat1",
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym_text] = sym_text,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_ink] = sym_ink,
  [sym__line] = sym__line,
  [sym_flow] = sym_flow,
  [sym_alternatives] = sym_alternatives,
  [sym_conditional_text] = sym_conditional_text,
  [sym_binary] = sym_binary,
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
  [aux_sym__line_token1] = {
    .visible = true,
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
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_ink] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
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
  [4] = 2,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 8,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 17,
  [19] = 15,
  [20] = 15,
  [21] = 15,
  [22] = 14,
  [23] = 17,
  [24] = 13,
  [25] = 14,
  [26] = 13,
  [27] = 17,
  [28] = 13,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 30,
  [34] = 34,
  [35] = 30,
  [36] = 29,
  [37] = 29,
  [38] = 32,
  [39] = 32,
  [40] = 29,
  [41] = 41,
  [42] = 32,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 45,
  [48] = 44,
  [49] = 49,
  [50] = 44,
  [51] = 45,
  [52] = 52,
  [53] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '{') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < 'A' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '{') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 11:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '{') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '{') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < 'A' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '{') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(52),
    [sym__line] = STATE(7),
    [sym_flow] = STATE(49),
    [sym_alternatives] = STATE(22),
    [sym_conditional_text] = STATE(22),
    [aux_sym_ink_repeat1] = STATE(7),
    [aux_sym_flow_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(31), 1,
      sym_binary,
    STATE(8), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(14), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [25] = 7,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(35), 1,
      sym_binary,
    STATE(9), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(14), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [50] = 7,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(33), 1,
      sym_binary,
    STATE(11), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(14), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [75] = 7,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(30), 1,
      sym_binary,
    STATE(12), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(14), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [100] = 6,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(32), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(14), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [122] = 6,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_flow,
    STATE(10), 2,
      sym__line,
      aux_sym_ink_repeat1,
    STATE(22), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [144] = 6,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(14), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [166] = 6,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(14), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [188] = 6,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      sym_text,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_flow,
    STATE(10), 2,
      sym__line,
      aux_sym_ink_repeat1,
    STATE(22), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [210] = 6,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(14), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [232] = 6,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(14), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [254] = 4,
    ACTIONS(60), 1,
      sym_text,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [270] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym_text,
    ACTIONS(70), 2,
      anon_sym_PIPE,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [286] = 4,
    ACTIONS(72), 1,
      sym_text,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_flow,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [301] = 4,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      sym_text,
    STATE(28), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [316] = 4,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_flow,
    STATE(25), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [331] = 4,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_flow,
    STATE(25), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [346] = 4,
    ACTIONS(72), 1,
      sym_text,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_flow,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [361] = 4,
    ACTIONS(72), 1,
      sym_text,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_flow,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [376] = 4,
    ACTIONS(72), 1,
      sym_text,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_flow,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [391] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      aux_sym__line_token1,
    ACTIONS(82), 1,
      sym_text,
    STATE(24), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [406] = 4,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_flow,
    STATE(25), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [421] = 4,
    ACTIONS(66), 1,
      aux_sym__line_token1,
    ACTIONS(84), 1,
      sym_text,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(24), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [436] = 4,
    ACTIONS(70), 1,
      anon_sym_PIPE,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      sym_text,
    STATE(26), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [451] = 4,
    ACTIONS(66), 1,
      anon_sym_PIPE,
    ACTIONS(92), 1,
      sym_text,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(26), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [466] = 4,
    ACTIONS(78), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_flow,
    STATE(25), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [481] = 4,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      sym_text,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(28), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [496] = 1,
    ACTIONS(104), 4,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [503] = 3,
    ACTIONS(106), 1,
      anon_sym_COLON,
    STATE(43), 1,
      sym__binary_operator,
    ACTIONS(108), 2,
      anon_sym_and,
      anon_sym_or,
  [514] = 3,
    ACTIONS(110), 1,
      anon_sym_COLON,
    STATE(43), 1,
      sym__binary_operator,
    ACTIONS(108), 2,
      anon_sym_and,
      anon_sym_or,
  [525] = 1,
    ACTIONS(112), 4,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [532] = 3,
    ACTIONS(114), 1,
      anon_sym_COLON,
    STATE(43), 1,
      sym__binary_operator,
    ACTIONS(108), 2,
      anon_sym_and,
      anon_sym_or,
  [543] = 2,
    STATE(43), 1,
      sym__binary_operator,
    ACTIONS(116), 3,
      anon_sym_COLON,
      anon_sym_and,
      anon_sym_or,
  [552] = 3,
    ACTIONS(118), 1,
      anon_sym_COLON,
    STATE(43), 1,
      sym__binary_operator,
    ACTIONS(108), 2,
      anon_sym_and,
      anon_sym_or,
  [563] = 1,
    ACTIONS(104), 3,
      aux_sym__line_token1,
      sym_text,
      anon_sym_LBRACE,
  [569] = 1,
    ACTIONS(104), 3,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [575] = 1,
    ACTIONS(112), 3,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [581] = 1,
    ACTIONS(112), 3,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [587] = 1,
    ACTIONS(104), 3,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [593] = 2,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 2,
      sym_text,
      anon_sym_LBRACE,
  [601] = 1,
    ACTIONS(112), 3,
      aux_sym__line_token1,
      sym_text,
      anon_sym_LBRACE,
  [607] = 2,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(34), 1,
      sym_binary,
  [614] = 1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
  [618] = 1,
    ACTIONS(128), 1,
      anon_sym_PIPE,
  [622] = 1,
    ACTIONS(130), 1,
      anon_sym_PIPE,
  [626] = 1,
    ACTIONS(132), 1,
      anon_sym_PIPE,
  [630] = 1,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
  [634] = 1,
    ACTIONS(136), 1,
      aux_sym__line_token1,
  [638] = 1,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
  [642] = 1,
    ACTIONS(140), 1,
      anon_sym_PIPE,
  [646] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [650] = 1,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 166,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 232,
  [SMALL_STATE(13)] = 254,
  [SMALL_STATE(14)] = 270,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 301,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 331,
  [SMALL_STATE(19)] = 346,
  [SMALL_STATE(20)] = 361,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 406,
  [SMALL_STATE(24)] = 421,
  [SMALL_STATE(25)] = 436,
  [SMALL_STATE(26)] = 451,
  [SMALL_STATE(27)] = 466,
  [SMALL_STATE(28)] = 481,
  [SMALL_STATE(29)] = 496,
  [SMALL_STATE(30)] = 503,
  [SMALL_STATE(31)] = 514,
  [SMALL_STATE(32)] = 525,
  [SMALL_STATE(33)] = 532,
  [SMALL_STATE(34)] = 543,
  [SMALL_STATE(35)] = 552,
  [SMALL_STATE(36)] = 563,
  [SMALL_STATE(37)] = 569,
  [SMALL_STATE(38)] = 575,
  [SMALL_STATE(39)] = 581,
  [SMALL_STATE(40)] = 587,
  [SMALL_STATE(41)] = 593,
  [SMALL_STATE(42)] = 601,
  [SMALL_STATE(43)] = 607,
  [SMALL_STATE(44)] = 614,
  [SMALL_STATE(45)] = 618,
  [SMALL_STATE(46)] = 622,
  [SMALL_STATE(47)] = 626,
  [SMALL_STATE(48)] = 630,
  [SMALL_STATE(49)] = 634,
  [SMALL_STATE(50)] = 638,
  [SMALL_STATE(51)] = 642,
  [SMALL_STATE(52)] = 646,
  [SMALL_STATE(53)] = 650,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_text, 7, 0, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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

TS_PUBLIC const TSLanguage *tree_sitter_ink(void) {
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
