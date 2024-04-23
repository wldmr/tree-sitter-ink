#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  sym__newline = 1,
  sym__space = 2,
  sym_text = 3,
  sym_tag = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_knot_mark = 7,
  sym_divert_mark = 8,
  sym_identifier = 9,
  sym_symbol = 10,
  sym_comment = 11,
  sym_line_comment = 12,
  anon_sym_TODO = 13,
  anon_sym_COLON = 14,
  aux_sym_todo_comment_token1 = 15,
  sym_ink = 16,
  sym__toplevel = 17,
  sym_paragraph = 18,
  sym_choice = 19,
  sym_choice_text = 20,
  sym__compound_choice_text = 21,
  sym_knot = 22,
  sym_divert = 23,
  sym_todo_comment = 24,
  aux_sym_ink_repeat1 = 25,
  aux_sym__toplevel_repeat1 = 26,
  aux_sym_paragraph_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [sym__space] = "_space",
  [sym_text] = "text",
  [sym_tag] = "tag",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_knot_mark] = "knot_mark",
  [sym_divert_mark] = "divert_mark",
  [sym_identifier] = "identifier",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [sym_line_comment] = "comment",
  [anon_sym_TODO] = "TODO",
  [anon_sym_COLON] = ":",
  [aux_sym_todo_comment_token1] = "todo_comment_token1",
  [sym_ink] = "ink",
  [sym__toplevel] = "_toplevel",
  [sym_paragraph] = "paragraph",
  [sym_choice] = "choice",
  [sym_choice_text] = "choice_text",
  [sym__compound_choice_text] = "_compound_choice_text",
  [sym_knot] = "knot",
  [sym_divert] = "divert",
  [sym_todo_comment] = "todo_comment",
  [aux_sym_ink_repeat1] = "ink_repeat1",
  [aux_sym__toplevel_repeat1] = "_toplevel_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [sym__space] = sym__space,
  [sym_text] = sym_text,
  [sym_tag] = sym_tag,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_knot_mark] = sym_knot_mark,
  [sym_divert_mark] = sym_divert_mark,
  [sym_identifier] = sym_identifier,
  [sym_symbol] = sym_symbol,
  [sym_comment] = sym_comment,
  [sym_line_comment] = sym_comment,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_todo_comment_token1] = aux_sym_todo_comment_token1,
  [sym_ink] = sym_ink,
  [sym__toplevel] = sym__toplevel,
  [sym_paragraph] = sym_paragraph,
  [sym_choice] = sym_choice,
  [sym_choice_text] = sym_choice_text,
  [sym__compound_choice_text] = sym__compound_choice_text,
  [sym_knot] = sym_knot,
  [sym_divert] = sym_divert,
  [sym_todo_comment] = sym_todo_comment,
  [aux_sym_ink_repeat1] = aux_sym_ink_repeat1,
  [aux_sym__toplevel_repeat1] = aux_sym__toplevel_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
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
  [sym_knot_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_divert_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
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
  [sym_paragraph] = {
    .visible = true,
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
  [sym_divert] = {
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
  [aux_sym__toplevel_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_final = 1,
  field_main = 2,
  field_mark = 3,
  field_name = 4,
  field_target = 5,
  field_temporary = 6,
  field_text = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_final] = "final",
  [field_main] = "main",
  [field_mark] = "mark",
  [field_name] = "name",
  [field_target] = "target",
  [field_temporary] = "temporary",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_target, 1},
  [2] =
    {field_main, 0},
  [3] =
    {field_mark, 0},
    {field_text, 1},
  [5] =
    {field_final, 0, .inherited = true},
    {field_main, 0, .inherited = true},
    {field_temporary, 0, .inherited = true},
  [8] =
    {field_temporary, 1},
  [9] =
    {field_final, 2},
  [10] =
    {field_main, 0},
    {field_temporary, 2},
  [12] =
    {field_final, 3},
    {field_main, 0},
  [14] =
    {field_final, 3},
    {field_temporary, 1},
  [16] =
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(24);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(19);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(19);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'D') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
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
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_text] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_knot_mark] = ACTIONS(1),
    [sym_divert_mark] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(40),
    [sym__toplevel] = STATE(34),
    [sym_paragraph] = STATE(34),
    [sym_choice] = STATE(34),
    [sym_knot] = STATE(34),
    [sym_divert] = STATE(34),
    [sym_todo_comment] = STATE(34),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(11),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym_text] = ACTIONS(9),
    [sym_tag] = ACTIONS(11),
    [sym_knot_mark] = ACTIONS(13),
    [sym_divert_mark] = ACTIONS(15),
    [sym_symbol] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(19),
    [anon_sym_TODO] = ACTIONS(21),
  },
  [2] = {
    [sym__toplevel] = STATE(23),
    [sym_paragraph] = STATE(23),
    [sym_choice] = STATE(23),
    [sym_knot] = STATE(23),
    [sym_divert] = STATE(23),
    [sym_todo_comment] = STATE(23),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(11),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__newline] = ACTIONS(25),
    [sym__space] = ACTIONS(3),
    [sym_text] = ACTIONS(9),
    [sym_tag] = ACTIONS(11),
    [sym_knot_mark] = ACTIONS(13),
    [sym_divert_mark] = ACTIONS(15),
    [sym_symbol] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(27),
    [anon_sym_TODO] = ACTIONS(21),
  },
  [3] = {
    [sym__toplevel] = STATE(37),
    [sym_paragraph] = STATE(37),
    [sym_choice] = STATE(37),
    [sym_knot] = STATE(37),
    [sym_divert] = STATE(37),
    [sym_todo_comment] = STATE(37),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(11),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym__newline] = ACTIONS(31),
    [sym__space] = ACTIONS(3),
    [sym_text] = ACTIONS(34),
    [sym_tag] = ACTIONS(37),
    [sym_knot_mark] = ACTIONS(40),
    [sym_divert_mark] = ACTIONS(43),
    [sym_symbol] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(49),
    [anon_sym_TODO] = ACTIONS(52),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(55), 1,
      sym_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_knot_mark,
      sym_divert_mark,
      sym_symbol,
      sym_line_comment,
      anon_sym_TODO,
  [18] = 9,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(59), 1,
      sym_text,
    ACTIONS(61), 1,
      sym_tag,
    ACTIONS(63), 1,
      sym_line_comment,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(9), 1,
      aux_sym__toplevel_repeat1,
    STATE(10), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym__newline,
  [48] = 4,
    ACTIONS(67), 1,
      sym_text,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_divert_mark,
      sym_line_comment,
  [66] = 5,
    ACTIONS(72), 1,
      sym_tag,
    ACTIONS(74), 1,
      sym_line_comment,
    STATE(8), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym__newline,
  [84] = 4,
    ACTIONS(78), 1,
      sym_tag,
    STATE(8), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_line_comment,
  [100] = 5,
    ACTIONS(72), 1,
      sym_tag,
    ACTIONS(83), 1,
      sym_line_comment,
    STATE(8), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__newline,
  [118] = 5,
    ACTIONS(83), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      sym_tag,
    STATE(7), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__newline,
  [136] = 4,
    ACTIONS(72), 1,
      sym_tag,
    STATE(8), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym__newline,
  [151] = 4,
    ACTIONS(91), 1,
      sym_knot_mark,
    ACTIONS(93), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym__newline,
  [166] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [177] = 5,
    ACTIONS(97), 1,
      sym_text,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym__compound_choice_text,
    STATE(26), 1,
      sym_choice_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [194] = 3,
    ACTIONS(103), 1,
      sym_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym__newline,
  [206] = 3,
    ACTIONS(107), 1,
      sym_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym__newline,
  [218] = 3,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym__newline,
  [230] = 3,
    ACTIONS(115), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__newline,
  [242] = 3,
    ACTIONS(119), 1,
      sym_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym__newline,
  [254] = 3,
    ACTIONS(123), 1,
      sym_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym__newline,
  [266] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__newline,
  [275] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym__newline,
  [284] = 3,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [295] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__newline,
  [304] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym__newline,
  [313] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym__newline,
  [322] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__newline,
  [331] = 3,
    ACTIONS(137), 1,
      sym_text,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [342] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      sym__newline,
  [351] = 3,
    ACTIONS(143), 1,
      sym_text,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [362] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym__newline,
  [371] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      sym__newline,
  [380] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym__newline,
  [389] = 3,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [400] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym__newline,
  [409] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym__newline,
  [418] = 2,
    ACTIONS(129), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [426] = 2,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [434] = 2,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [442] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [450] = 2,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [458] = 2,
    ACTIONS(163), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [466] = 2,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [474] = 2,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 166,
  [SMALL_STATE(14)] = 177,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 206,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 230,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 254,
  [SMALL_STATE(21)] = 266,
  [SMALL_STATE(22)] = 275,
  [SMALL_STATE(23)] = 284,
  [SMALL_STATE(24)] = 295,
  [SMALL_STATE(25)] = 304,
  [SMALL_STATE(26)] = 313,
  [SMALL_STATE(27)] = 322,
  [SMALL_STATE(28)] = 331,
  [SMALL_STATE(29)] = 342,
  [SMALL_STATE(30)] = 351,
  [SMALL_STATE(31)] = 362,
  [SMALL_STATE(32)] = 371,
  [SMALL_STATE(33)] = 380,
  [SMALL_STATE(34)] = 389,
  [SMALL_STATE(35)] = 400,
  [SMALL_STATE(36)] = 409,
  [SMALL_STATE(37)] = 418,
  [SMALL_STATE(38)] = 426,
  [SMALL_STATE(39)] = 434,
  [SMALL_STATE(40)] = 442,
  [SMALL_STATE(41)] = 450,
  [SMALL_STATE(42)] = 458,
  [SMALL_STATE(43)] = 466,
  [SMALL_STATE(44)] = 474,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(11),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(43),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(41),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(14),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(38),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 8),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 5, .production_id = 11),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 10),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 9),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 7),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
