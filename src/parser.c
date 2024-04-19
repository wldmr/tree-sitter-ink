#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym_text = 1,
  sym_tag = 2,
  sym_symbol = 3,
  sym_bracket_open = 4,
  sym_bracket_close = 5,
  sym_comment = 6,
  sym_todo_keyword = 7,
  anon_sym_COLON = 8,
  aux_sym_todo_comment_token1 = 9,
  aux_sym_todo_comment_token2 = 10,
  sym_ink = 11,
  sym__toplevel = 12,
  sym_choice = 13,
  sym_choice_text = 14,
  sym__compound_choice_text = 15,
  sym_todo_comment = 16,
  aux_sym_ink_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [sym_tag] = "tag",
  [sym_symbol] = "symbol",
  [sym_bracket_open] = "bracket_open",
  [sym_bracket_close] = "bracket_close",
  [sym_comment] = "comment",
  [sym_todo_keyword] = "todo_keyword",
  [anon_sym_COLON] = ":",
  [aux_sym_todo_comment_token1] = "todo_comment_token1",
  [aux_sym_todo_comment_token2] = "todo_comment_token2",
  [sym_ink] = "ink",
  [sym__toplevel] = "_toplevel",
  [sym_choice] = "choice",
  [sym_choice_text] = "choice_text",
  [sym__compound_choice_text] = "_compound_choice_text",
  [sym_todo_comment] = "todo_comment",
  [aux_sym_ink_repeat1] = "ink_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [sym_tag] = sym_tag,
  [sym_symbol] = sym_symbol,
  [sym_bracket_open] = sym_bracket_open,
  [sym_bracket_close] = sym_bracket_close,
  [sym_comment] = sym_comment,
  [sym_todo_keyword] = sym_todo_keyword,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_todo_comment_token1] = aux_sym_todo_comment_token1,
  [aux_sym_todo_comment_token2] = aux_sym_todo_comment_token2,
  [sym_ink] = sym_ink,
  [sym__toplevel] = sym__toplevel,
  [sym_choice] = sym_choice,
  [sym_choice_text] = sym_choice_text,
  [sym__compound_choice_text] = sym__compound_choice_text,
  [sym_todo_comment] = sym_todo_comment,
  [aux_sym_ink_repeat1] = aux_sym_ink_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_open] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_close] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_todo_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_todo_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_ink] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel] = {
    .visible = false,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_text] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_choice_text] = {
    .visible = false,
    .named = true,
  },
  [sym_todo_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ink_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_final = 1,
  field_main = 2,
  field_mark = 3,
  field_temporary = 4,
  field_text = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_final] = "final",
  [field_main] = "main",
  [field_mark] = "mark",
  [field_temporary] = "temporary",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_main, 0},
  [1] =
    {field_mark, 0},
    {field_text, 1},
  [3] =
    {field_final, 0, .inherited = true},
    {field_main, 0, .inherited = true},
    {field_temporary, 0, .inherited = true},
  [6] =
    {field_temporary, 1},
  [7] =
    {field_final, 2},
  [8] =
    {field_main, 0},
    {field_temporary, 2},
  [10] =
    {field_final, 3},
    {field_main, 0},
  [12] =
    {field_final, 3},
    {field_temporary, 1},
  [14] =
    {field_final, 4},
    {field_main, 0},
    {field_temporary, 2},
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '[') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_bracket_open);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_bracket_close);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_todo_keyword);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_todo_comment_token2);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_bracket_open] = ACTIONS(1),
    [sym_bracket_close] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_todo_keyword] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(19),
    [sym__toplevel] = STATE(2),
    [sym_choice] = STATE(2),
    [sym_todo_comment] = STATE(2),
    [aux_sym_ink_repeat1] = STATE(2),
    [sym_text] = ACTIONS(5),
    [sym_tag] = ACTIONS(5),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_todo_keyword] = ACTIONS(11),
  },
  [2] = {
    [sym__toplevel] = STATE(3),
    [sym_choice] = STATE(3),
    [sym_todo_comment] = STATE(3),
    [aux_sym_ink_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_tag] = ACTIONS(15),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_todo_keyword] = ACTIONS(11),
  },
  [3] = {
    [sym__toplevel] = STATE(3),
    [sym_choice] = STATE(3),
    [sym_todo_comment] = STATE(3),
    [aux_sym_ink_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
    [sym_tag] = ACTIONS(19),
    [sym_symbol] = ACTIONS(22),
    [sym_comment] = ACTIONS(9),
    [sym_todo_keyword] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_bracket_open,
    ACTIONS(30), 4,
      sym_text,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [16] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      sym_text,
    ACTIONS(38), 3,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [31] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 4,
      sym_text,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [44] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 4,
      sym_text,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [57] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      sym_text,
    ACTIONS(52), 3,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [72] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_text,
    ACTIONS(58), 3,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [87] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 4,
      sym_text,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [100] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 4,
      sym_text,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [113] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_text,
    ACTIONS(72), 3,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [128] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 4,
      sym_text,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [141] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 4,
      sym_text,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [154] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 4,
      sym_text,
      sym_tag,
      sym_symbol,
      sym_todo_keyword,
  [167] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_text,
    ACTIONS(88), 1,
      sym_bracket_open,
    STATE(6), 1,
      sym_choice_text,
    STATE(7), 1,
      sym__compound_choice_text,
  [183] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_text,
    ACTIONS(92), 1,
      sym_bracket_close,
  [193] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_text,
    ACTIONS(96), 1,
      sym_bracket_close,
  [203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [210] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_todo_comment_token1,
  [217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_bracket_close,
  [224] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_todo_comment_token2,
  [231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_bracket_close,
  [238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 31,
  [SMALL_STATE(7)] = 44,
  [SMALL_STATE(8)] = 57,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 113,
  [SMALL_STATE(13)] = 128,
  [SMALL_STATE(14)] = 141,
  [SMALL_STATE(15)] = 154,
  [SMALL_STATE(16)] = 167,
  [SMALL_STATE(17)] = 183,
  [SMALL_STATE(18)] = 193,
  [SMALL_STATE(19)] = 203,
  [SMALL_STATE(20)] = 210,
  [SMALL_STATE(21)] = 217,
  [SMALL_STATE(22)] = 224,
  [SMALL_STATE(23)] = 231,
  [SMALL_STATE(24)] = 238,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(16),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(24),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, .production_id = 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_text, 1, .production_id = 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 4),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 3, .production_id = 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice, 2, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, .production_id = 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_text, 1, .production_id = 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 3, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 5),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 3, .production_id = 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_todo_comment, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 6),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 4, .production_id = 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 7),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 4, .production_id = 7),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 8),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 4, .production_id = 8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 5, .production_id = 9),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 5, .production_id = 9),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
