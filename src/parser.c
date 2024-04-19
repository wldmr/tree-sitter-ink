#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  sym_text = 1,
  sym_tag = 2,
  anon_sym_SPACE = 3,
  sym_knot_mark = 4,
  aux_sym_identifier_token1 = 5,
  sym_symbol = 6,
  sym_bracket_open = 7,
  sym_bracket_close = 8,
  sym_comment = 9,
  sym_todo_keyword = 10,
  anon_sym_COLON = 11,
  aux_sym_todo_comment_token1 = 12,
  aux_sym_todo_comment_token2 = 13,
  sym_ink = 14,
  sym__toplevel = 15,
  sym_choice = 16,
  sym_choice_text = 17,
  sym__compound_choice_text = 18,
  sym_knot = 19,
  sym_identifier = 20,
  sym_todo_comment = 21,
  aux_sym_ink_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [sym_tag] = "tag",
  [anon_sym_SPACE] = " ",
  [sym_knot_mark] = "knot_mark",
  [aux_sym_identifier_token1] = "identifier_token1",
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
  [sym_knot] = "knot",
  [sym_identifier] = "identifier",
  [sym_todo_comment] = "todo_comment",
  [aux_sym_ink_repeat1] = "ink_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [sym_tag] = sym_tag,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [sym_knot_mark] = sym_knot_mark,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
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
  [sym_knot] = sym_knot,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [sym_knot_mark] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
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
  [sym_knot] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  field_name = 4,
  field_temporary = 5,
  field_text = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_final] = "final",
  [field_main] = "main",
  [field_mark] = "mark",
  [field_name] = "name",
  [field_temporary] = "temporary",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_main, 0},
  [2] =
    {field_mark, 0},
    {field_text, 1},
  [4] =
    {field_final, 0, .inherited = true},
    {field_main, 0, .inherited = true},
    {field_temporary, 0, .inherited = true},
  [7] =
    {field_temporary, 1},
  [8] =
    {field_final, 2},
  [9] =
    {field_main, 0},
    {field_temporary, 2},
  [11] =
    {field_final, 3},
    {field_main, 0},
  [13] =
    {field_final, 3},
    {field_temporary, 1},
  [15] =
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '=') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(12);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '[') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r')) ADVANCE(17);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_bracket_open);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_bracket_close);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_todo_keyword);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_todo_comment_token2);
      if (lookahead == '\n') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 41},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_knot_mark] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_bracket_open] = ACTIONS(1),
    [sym_bracket_close] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_todo_keyword] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(25),
    [sym__toplevel] = STATE(2),
    [sym_choice] = STATE(2),
    [sym_knot] = STATE(2),
    [sym_todo_comment] = STATE(2),
    [aux_sym_ink_repeat1] = STATE(2),
    [sym_text] = ACTIONS(5),
    [sym_tag] = ACTIONS(5),
    [sym_knot_mark] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_todo_keyword] = ACTIONS(13),
  },
  [2] = {
    [sym__toplevel] = STATE(3),
    [sym_choice] = STATE(3),
    [sym_knot] = STATE(3),
    [sym_todo_comment] = STATE(3),
    [aux_sym_ink_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_text] = ACTIONS(17),
    [sym_tag] = ACTIONS(17),
    [sym_knot_mark] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_todo_keyword] = ACTIONS(13),
  },
  [3] = {
    [sym__toplevel] = STATE(3),
    [sym_choice] = STATE(3),
    [sym_knot] = STATE(3),
    [sym_todo_comment] = STATE(3),
    [aux_sym_ink_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
    [sym_tag] = ACTIONS(21),
    [sym_knot_mark] = ACTIONS(24),
    [sym_symbol] = ACTIONS(27),
    [sym_comment] = ACTIONS(11),
    [sym_todo_keyword] = ACTIONS(30),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 6,
      sym_text,
      sym_tag,
      anon_sym_SPACE,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [15] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_SPACE,
    ACTIONS(39), 5,
      sym_text,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [32] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_bracket_open,
    ACTIONS(45), 5,
      sym_text,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [49] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_text,
    ACTIONS(53), 4,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [65] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 5,
      sym_text,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [79] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 5,
      sym_text,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [93] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 5,
      sym_text,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [107] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 5,
      sym_text,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [121] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 5,
      sym_text,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [135] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 5,
      sym_text,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [149] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_text,
    ACTIONS(83), 4,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [165] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_text,
    ACTIONS(89), 4,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [181] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 5,
      sym_text,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [195] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 5,
      sym_text,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [209] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_text,
    ACTIONS(103), 4,
      sym_tag,
      sym_knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [225] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_text,
    ACTIONS(107), 1,
      sym_bracket_open,
    STATE(10), 1,
      sym_choice_text,
    STATE(11), 1,
      sym__compound_choice_text,
  [241] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_text,
    ACTIONS(111), 1,
      sym_bracket_close,
  [251] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_text,
    ACTIONS(115), 1,
      sym_bracket_close,
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      sym_identifier,
  [271] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_todo_comment_token1,
  [278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_bracket_close,
  [285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_knot_mark,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_COLON,
  [306] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_todo_comment_token2,
  [313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_bracket_close,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 49,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 93,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 121,
  [SMALL_STATE(13)] = 135,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 181,
  [SMALL_STATE(17)] = 195,
  [SMALL_STATE(18)] = 209,
  [SMALL_STATE(19)] = 225,
  [SMALL_STATE(20)] = 241,
  [SMALL_STATE(21)] = 251,
  [SMALL_STATE(22)] = 261,
  [SMALL_STATE(23)] = 271,
  [SMALL_STATE(24)] = 278,
  [SMALL_STATE(25)] = 285,
  [SMALL_STATE(26)] = 292,
  [SMALL_STATE(27)] = 299,
  [SMALL_STATE(28)] = 306,
  [SMALL_STATE(29)] = 313,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(22),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(19),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_knot, 2, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_text, 1, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 5),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 3, .production_id = 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 6),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 3, .production_id = 6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 5, .production_id = 10),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 5, .production_id = 10),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice, 2, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, .production_id = 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_text, 1, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 9),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 4, .production_id = 9),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 4, .production_id = 8),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 7),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 4, .production_id = 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_todo_comment, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_knot, 4, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 3, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
