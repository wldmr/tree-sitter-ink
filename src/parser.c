#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  sym_text = 1,
  sym_tag = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  aux_sym_knot_token1 = 5,
  sym__knot_mark = 6,
  aux_sym_identifier_token1 = 7,
  sym_symbol = 8,
  sym_comment = 9,
  sym_todo_keyword = 10,
  anon_sym_COLON = 11,
  aux_sym_todo_comment_token1 = 12,
  sym_ink = 13,
  sym__toplevel = 14,
  sym_choice = 15,
  sym_choice_text = 16,
  sym__compound_choice_text = 17,
  sym_knot = 18,
  sym_identifier = 19,
  sym_todo_comment = 20,
  aux_sym_ink_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [sym_tag] = "tag",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_knot_token1] = "knot_token1",
  [sym__knot_mark] = "_knot_mark",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [sym_todo_keyword] = "todo_keyword",
  [anon_sym_COLON] = ":",
  [aux_sym_todo_comment_token1] = "todo_comment_token1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_knot_token1] = aux_sym_knot_token1,
  [sym__knot_mark] = sym__knot_mark,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_symbol] = sym_symbol,
  [sym_comment] = sym_comment,
  [sym_todo_keyword] = sym_todo_keyword,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_todo_comment_token1] = aux_sym_todo_comment_token1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_knot_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__knot_mark] = {
    .visible = false,
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
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
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
    {field_name, 1},
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
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '=') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '=') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(11);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '[') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'D') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'O') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_knot_token1);
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__knot_mark);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_todo_keyword);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__knot_mark] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_todo_keyword] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(30),
    [sym__toplevel] = STATE(3),
    [sym_choice] = STATE(3),
    [sym_knot] = STATE(3),
    [sym_todo_comment] = STATE(3),
    [aux_sym_ink_repeat1] = STATE(3),
    [sym_text] = ACTIONS(5),
    [sym_tag] = ACTIONS(5),
    [sym__knot_mark] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_todo_keyword] = ACTIONS(13),
  },
  [2] = {
    [sym__toplevel] = STATE(2),
    [sym_choice] = STATE(2),
    [sym_knot] = STATE(2),
    [sym_todo_comment] = STATE(2),
    [aux_sym_ink_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_text] = ACTIONS(17),
    [sym_tag] = ACTIONS(17),
    [sym__knot_mark] = ACTIONS(20),
    [sym_symbol] = ACTIONS(23),
    [sym_comment] = ACTIONS(11),
    [sym_todo_keyword] = ACTIONS(26),
  },
  [3] = {
    [sym__toplevel] = STATE(2),
    [sym_choice] = STATE(2),
    [sym_knot] = STATE(2),
    [sym_todo_comment] = STATE(2),
    [aux_sym_ink_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_text] = ACTIONS(31),
    [sym_tag] = ACTIONS(31),
    [sym__knot_mark] = ACTIONS(7),
    [sym_symbol] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_todo_keyword] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 5,
      sym_text,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [17] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 5,
      sym_text,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [31] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(47), 4,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [47] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 5,
      sym_text,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [61] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 5,
      sym_text,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [75] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 5,
      sym_text,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [89] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(65), 4,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [105] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 5,
      sym_text,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [119] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 5,
      sym_text,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [133] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 5,
      sym_text,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [147] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 5,
      sym_text,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [161] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 5,
      sym_text,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [175] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym_text,
    ACTIONS(91), 4,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [191] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym_text,
    ACTIONS(97), 4,
      sym_tag,
      sym__knot_mark,
      sym_symbol,
      sym_todo_keyword,
  [207] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_text,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_choice_text,
    STATE(12), 1,
      sym__compound_choice_text,
  [223] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_text,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
  [233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      aux_sym_identifier_token1,
    STATE(22), 1,
      sym_identifier,
  [243] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_text,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
  [253] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_knot_token1,
    ACTIONS(115), 1,
      sym__knot_mark,
  [263] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_knot_token1,
    ACTIONS(119), 1,
      sym__knot_mark,
  [273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
  [280] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_knot_token1,
  [287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
  [294] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_knot_token1,
  [301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_COLON,
  [308] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_todo_comment_token1,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 31,
  [SMALL_STATE(7)] = 47,
  [SMALL_STATE(8)] = 61,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 89,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 119,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 147,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 191,
  [SMALL_STATE(18)] = 207,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 233,
  [SMALL_STATE(21)] = 243,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 263,
  [SMALL_STATE(24)] = 273,
  [SMALL_STATE(25)] = 280,
  [SMALL_STATE(26)] = 287,
  [SMALL_STATE(27)] = 294,
  [SMALL_STATE(28)] = 301,
  [SMALL_STATE(29)] = 308,
  [SMALL_STATE(30)] = 315,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(20),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(18),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_text, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_knot, 4, .production_id = 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 3, .production_id = 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 5, .production_id = 10),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 5, .production_id = 10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 9),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 4, .production_id = 9),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 8),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 4, .production_id = 8),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 4, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice, 2, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_text, 1, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_todo_comment, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 3, .production_id = 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_knot, 3, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 3, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_text, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
