#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_text = 1,
  sym_comment = 2,
  sym_todo_keyword = 3,
  anon_sym_COLON = 4,
  aux_sym_todo_comment_token1 = 5,
  aux_sym_todo_comment_token2 = 6,
  sym_ink = 7,
  sym__toplevel = 8,
  sym_todo_comment = 9,
  aux_sym_ink_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym_todo_keyword] = "todo_keyword",
  [anon_sym_COLON] = ":",
  [aux_sym_todo_comment_token1] = "todo_comment_token1",
  [aux_sym_todo_comment_token2] = "todo_comment_token2",
  [sym_ink] = "ink",
  [sym__toplevel] = "_toplevel",
  [sym_todo_comment] = "todo_comment",
  [aux_sym_ink_repeat1] = "ink_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym_todo_keyword] = sym_todo_keyword,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_todo_comment_token1] = aux_sym_todo_comment_token1,
  [aux_sym_todo_comment_token2] = aux_sym_todo_comment_token2,
  [sym_ink] = sym_ink,
  [sym__toplevel] = sym__toplevel,
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
  [sym_todo_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ink_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'O') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_todo_keyword);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_todo_comment_token2);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_todo_keyword] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(6),
    [sym__toplevel] = STATE(2),
    [sym_todo_comment] = STATE(2),
    [aux_sym_ink_repeat1] = STATE(2),
    [sym_text] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_todo_keyword] = ACTIONS(9),
  },
  [2] = {
    [sym__toplevel] = STATE(3),
    [sym_todo_comment] = STATE(3),
    [aux_sym_ink_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_text] = ACTIONS(13),
    [sym_comment] = ACTIONS(7),
    [sym_todo_keyword] = ACTIONS(9),
  },
  [3] = {
    [sym__toplevel] = STATE(3),
    [sym_todo_comment] = STATE(3),
    [aux_sym_ink_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_text] = ACTIONS(17),
    [sym_comment] = ACTIONS(7),
    [sym_todo_keyword] = ACTIONS(20),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      sym_text,
      sym_todo_keyword,
  [11] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_COLON,
  [18] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [25] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym_todo_comment_token1,
  [32] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_todo_comment_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 25,
  [SMALL_STATE(8)] = 32,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 4),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_todo_comment, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
