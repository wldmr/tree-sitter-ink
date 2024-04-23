#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  sym__newline = 1,
  sym__space = 2,
  sym_glue = 3,
  sym_text = 4,
  sym_tag = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  sym_knot_mark = 8,
  sym_divert_mark = 9,
  sym_identifier = 10,
  sym_symbol = 11,
  sym_comment = 12,
  sym_line_comment = 13,
  anon_sym_TODO = 14,
  anon_sym_COLON = 15,
  aux_sym_todo_comment_token1 = 16,
  sym_ink = 17,
  sym__toplevel = 18,
  sym_paragraph = 19,
  sym_choice = 20,
  sym_choice_text = 21,
  sym__compound_choice_text = 22,
  sym_knot = 23,
  sym_divert = 24,
  sym_todo_comment = 25,
  aux_sym_ink_repeat1 = 26,
  aux_sym__toplevel_repeat1 = 27,
  aux_sym_paragraph_repeat1 = 28,
  aux_sym_paragraph_repeat2 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [sym__space] = "_space",
  [sym_glue] = "glue",
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
  [aux_sym_paragraph_repeat2] = "paragraph_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [sym__space] = sym__space,
  [sym_glue] = sym_glue,
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
  [aux_sym_paragraph_repeat2] = aux_sym_paragraph_repeat2,
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
  [sym_glue] = {
    .visible = true,
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
  [aux_sym_paragraph_repeat2] = {
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
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(19);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(26);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(16);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(21);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != ']' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 38},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(1),
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
    [sym_ink] = STATE(38),
    [sym__toplevel] = STATE(35),
    [sym_paragraph] = STATE(35),
    [sym_choice] = STATE(35),
    [sym_knot] = STATE(35),
    [sym_divert] = STATE(35),
    [sym_todo_comment] = STATE(35),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(14),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
    [sym_tag] = ACTIONS(13),
    [sym_knot_mark] = ACTIONS(15),
    [sym_divert_mark] = ACTIONS(17),
    [sym_symbol] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(21),
    [anon_sym_TODO] = ACTIONS(23),
  },
  [2] = {
    [sym__toplevel] = STATE(43),
    [sym_paragraph] = STATE(43),
    [sym_choice] = STATE(43),
    [sym_knot] = STATE(43),
    [sym_divert] = STATE(43),
    [sym_todo_comment] = STATE(43),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(14),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__newline] = ACTIONS(27),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(30),
    [sym_text] = ACTIONS(33),
    [sym_tag] = ACTIONS(36),
    [sym_knot_mark] = ACTIONS(39),
    [sym_divert_mark] = ACTIONS(42),
    [sym_symbol] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(48),
    [anon_sym_TODO] = ACTIONS(51),
  },
  [3] = {
    [sym__toplevel] = STATE(24),
    [sym_paragraph] = STATE(24),
    [sym_choice] = STATE(24),
    [sym_knot] = STATE(24),
    [sym_divert] = STATE(24),
    [sym_todo_comment] = STATE(24),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(14),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym__newline] = ACTIONS(56),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
    [sym_tag] = ACTIONS(13),
    [sym_knot_mark] = ACTIONS(15),
    [sym_divert_mark] = ACTIONS(17),
    [sym_symbol] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(58),
    [anon_sym_TODO] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(62), 1,
      sym_glue,
    ACTIONS(64), 1,
      sym_text,
    ACTIONS(66), 1,
      sym_tag,
    ACTIONS(68), 1,
      sym_line_comment,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(9), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(6), 2,
      sym_divert,
      aux_sym_paragraph_repeat2,
  [34] = 3,
    ACTIONS(70), 1,
      sym_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      sym__newline,
      sym_glue,
      sym_tag,
      sym_knot_mark,
      sym_divert_mark,
      sym_symbol,
      sym_line_comment,
      anon_sym_TODO,
  [53] = 7,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(74), 1,
      sym_tag,
    ACTIONS(76), 1,
      sym_line_comment,
    STATE(11), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym__newline,
    STATE(8), 2,
      sym_divert,
      aux_sym_paragraph_repeat2,
  [78] = 5,
    ACTIONS(80), 1,
      sym_glue,
    ACTIONS(83), 1,
      sym_text,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_divert_mark,
      sym_line_comment,
  [99] = 4,
    ACTIONS(88), 1,
      sym_divert_mark,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(8), 2,
      sym_divert,
      aux_sym_paragraph_repeat2,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [117] = 5,
    ACTIONS(76), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      sym_tag,
    STATE(10), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym__newline,
  [135] = 4,
    ACTIONS(95), 1,
      sym_tag,
    STATE(10), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_line_comment,
  [151] = 5,
    ACTIONS(91), 1,
      sym_tag,
    ACTIONS(100), 1,
      sym_line_comment,
    STATE(10), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym__newline,
  [169] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_divert_mark,
      sym_line_comment,
  [181] = 5,
    ACTIONS(104), 1,
      sym_text,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__compound_choice_text,
    STATE(30), 1,
      sym_choice_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [198] = 4,
    ACTIONS(91), 1,
      sym_tag,
    STATE(10), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym__newline,
  [213] = 4,
    ACTIONS(112), 1,
      sym_knot_mark,
    ACTIONS(114), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym__newline,
  [228] = 3,
    ACTIONS(118), 1,
      sym_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym__newline,
  [240] = 3,
    ACTIONS(122), 1,
      sym_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym__newline,
  [252] = 3,
    ACTIONS(126), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym__newline,
  [264] = 3,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym__newline,
  [276] = 3,
    ACTIONS(134), 1,
      sym_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym__newline,
  [288] = 3,
    ACTIONS(138), 1,
      sym_text,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym__newline,
  [300] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym__newline,
  [309] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym__newline,
  [318] = 3,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [329] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym__newline,
  [338] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym__newline,
  [347] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym__newline,
  [356] = 3,
    ACTIONS(148), 1,
      sym_text,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [367] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym__newline,
  [376] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym__newline,
  [385] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym__newline,
  [394] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      sym__newline,
  [403] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym__newline,
  [412] = 3,
    ACTIONS(162), 1,
      sym_text,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [423] = 3,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [434] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym__newline,
  [443] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      sym__newline,
  [452] = 2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [460] = 2,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [468] = 2,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [476] = 2,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [484] = 2,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [492] = 2,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [500] = 2,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [508] = 2,
    ACTIONS(182), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 151,
  [SMALL_STATE(12)] = 169,
  [SMALL_STATE(13)] = 181,
  [SMALL_STATE(14)] = 198,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 240,
  [SMALL_STATE(18)] = 252,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 276,
  [SMALL_STATE(21)] = 288,
  [SMALL_STATE(22)] = 300,
  [SMALL_STATE(23)] = 309,
  [SMALL_STATE(24)] = 318,
  [SMALL_STATE(25)] = 329,
  [SMALL_STATE(26)] = 338,
  [SMALL_STATE(27)] = 347,
  [SMALL_STATE(28)] = 356,
  [SMALL_STATE(29)] = 367,
  [SMALL_STATE(30)] = 376,
  [SMALL_STATE(31)] = 385,
  [SMALL_STATE(32)] = 394,
  [SMALL_STATE(33)] = 403,
  [SMALL_STATE(34)] = 412,
  [SMALL_STATE(35)] = 423,
  [SMALL_STATE(36)] = 434,
  [SMALL_STATE(37)] = 443,
  [SMALL_STATE(38)] = 452,
  [SMALL_STATE(39)] = 460,
  [SMALL_STATE(40)] = 468,
  [SMALL_STATE(41)] = 476,
  [SMALL_STATE(42)] = 484,
  [SMALL_STATE(43)] = 492,
  [SMALL_STATE(44)] = 500,
  [SMALL_STATE(45)] = 508,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(14),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(41),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(42),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(13),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(43),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(39),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(7),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat2, 2), SHIFT_REPEAT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(10),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 8),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 6),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 5, .production_id = 11),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 10),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 4, .production_id = 9),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_text, 3, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
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
