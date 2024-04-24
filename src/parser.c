#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 1
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  sym__newline = 1,
  sym__space = 2,
  sym_glue = 3,
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
  sym_text = 16,
  sym_ink = 17,
  sym__toplevel = 18,
  sym_paragraph = 19,
  sym_flow = 20,
  sym_choice = 21,
  sym__choice_content = 22,
  sym__compound_choice_content = 23,
  sym_knot = 24,
  sym_divert = 25,
  sym_todo_comment = 26,
  aux_sym_ink_repeat1 = 27,
  aux_sym__toplevel_repeat1 = 28,
  aux_sym_flow_repeat1 = 29,
  anon_alias_sym_ = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [sym__space] = "_space",
  [sym_glue] = "glue",
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
  [sym_text] = "text",
  [sym_ink] = "ink",
  [sym__toplevel] = "_toplevel",
  [sym_paragraph] = "paragraph",
  [sym_flow] = "flow",
  [sym_choice] = "choice",
  [sym__choice_content] = "_choice_content",
  [sym__compound_choice_content] = "_compound_choice_content",
  [sym_knot] = "knot",
  [sym_divert] = "divert",
  [sym_todo_comment] = "todo_comment",
  [aux_sym_ink_repeat1] = "ink_repeat1",
  [aux_sym__toplevel_repeat1] = "_toplevel_repeat1",
  [aux_sym_flow_repeat1] = "flow_repeat1",
  [anon_alias_sym_] = "",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [sym__space] = sym__space,
  [sym_glue] = sym_glue,
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
  [sym_text] = sym_text,
  [sym_ink] = sym_ink,
  [sym__toplevel] = sym__toplevel,
  [sym_paragraph] = sym_paragraph,
  [sym_flow] = sym_flow,
  [sym_choice] = sym_choice,
  [sym__choice_content] = sym__choice_content,
  [sym__compound_choice_content] = sym__compound_choice_content,
  [sym_knot] = sym_knot,
  [sym_divert] = sym_divert,
  [sym_todo_comment] = sym_todo_comment,
  [aux_sym_ink_repeat1] = aux_sym_ink_repeat1,
  [aux_sym__toplevel_repeat1] = aux_sym__toplevel_repeat1,
  [aux_sym_flow_repeat1] = aux_sym_flow_repeat1,
  [anon_alias_sym_] = anon_alias_sym_,
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
  [sym_text] = {
    .visible = true,
    .named = true,
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
  [sym_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym__choice_content] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_choice_content] = {
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
  [aux_sym_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_] = {
    .visible = true,
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
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_final] = "final",
  [field_main] = "main",
  [field_mark] = "mark",
  [field_name] = "name",
  [field_target] = "target",
  [field_temporary] = "temporary",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 4},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_target, 1},
  [2] =
    {field_main, 0},
  [3] =
    {field_final, 1, .inherited = true},
    {field_main, 1, .inherited = true},
    {field_mark, 0},
    {field_temporary, 1, .inherited = true},
  [7] =
    {field_final, 0, .inherited = true},
    {field_main, 0, .inherited = true},
    {field_temporary, 0, .inherited = true},
  [10] =
    {field_final, 2},
  [11] =
    {field_temporary, 1},
  [12] =
    {field_final, 3},
    {field_temporary, 1},
  [14] =
    {field_final, 3},
    {field_main, 0},
  [16] =
    {field_main, 0},
    {field_temporary, 2},
  [18] =
    {field_final, 4},
    {field_main, 0},
    {field_temporary, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_flow, 2,
    sym_flow,
    anon_alias_sym_,
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
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(19);
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
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(31);
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
      if (lookahead == '*') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14, .external_lex_state = 1},
  [2] = {.lex_state = 14, .external_lex_state = 1},
  [3] = {.lex_state = 14, .external_lex_state = 1},
  [4] = {.lex_state = 14, .external_lex_state = 1},
  [5] = {.lex_state = 14, .external_lex_state = 1},
  [6] = {.lex_state = 14, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 14, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 14, .external_lex_state = 1},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 14, .external_lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 40},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_knot_mark] = ACTIONS(1),
    [sym_divert_mark] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(43),
    [sym__toplevel] = STATE(35),
    [sym_paragraph] = STATE(35),
    [sym_flow] = STATE(12),
    [sym_choice] = STATE(35),
    [sym_knot] = STATE(35),
    [sym_divert] = STATE(35),
    [sym_todo_comment] = STATE(35),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(20),
    [aux_sym_flow_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [sym_tag] = ACTIONS(11),
    [sym_knot_mark] = ACTIONS(13),
    [sym_divert_mark] = ACTIONS(15),
    [sym_symbol] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(19),
    [anon_sym_TODO] = ACTIONS(21),
    [sym_text] = ACTIONS(9),
  },
  [2] = {
    [sym__toplevel] = STATE(38),
    [sym_paragraph] = STATE(38),
    [sym_flow] = STATE(12),
    [sym_choice] = STATE(38),
    [sym_knot] = STATE(38),
    [sym_divert] = STATE(38),
    [sym_todo_comment] = STATE(38),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(20),
    [aux_sym_flow_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__newline] = ACTIONS(25),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [sym_tag] = ACTIONS(11),
    [sym_knot_mark] = ACTIONS(13),
    [sym_divert_mark] = ACTIONS(15),
    [sym_symbol] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(27),
    [anon_sym_TODO] = ACTIONS(21),
    [sym_text] = ACTIONS(9),
  },
  [3] = {
    [sym__toplevel] = STATE(41),
    [sym_paragraph] = STATE(41),
    [sym_flow] = STATE(12),
    [sym_choice] = STATE(41),
    [sym_knot] = STATE(41),
    [sym_divert] = STATE(41),
    [sym_todo_comment] = STATE(41),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(20),
    [aux_sym_flow_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym__newline] = ACTIONS(31),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(34),
    [sym_tag] = ACTIONS(37),
    [sym_knot_mark] = ACTIONS(40),
    [sym_divert_mark] = ACTIONS(43),
    [sym_symbol] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(49),
    [anon_sym_TODO] = ACTIONS(52),
    [sym_text] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(29), 10,
      sym_text,
      ts_builtin_sym_end,
      sym__newline,
      sym_glue,
      sym_tag,
      sym_knot_mark,
      sym_divert_mark,
      sym_symbol,
      sym_line_comment,
      anon_sym_TODO,
  [17] = 4,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(57), 2,
      sym_text,
      sym_glue,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [38] = 4,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(62), 2,
      sym_text,
      sym_glue,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [59] = 5,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(24), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [79] = 5,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(25), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [99] = 7,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(15), 1,
      sym_flow,
    STATE(21), 1,
      sym__compound_choice_content,
    STATE(36), 1,
      sym__choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [123] = 5,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(26), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [143] = 5,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(27), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [163] = 7,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(76), 1,
      sym_tag,
    ACTIONS(78), 1,
      sym_line_comment,
    STATE(16), 1,
      sym_divert,
    STATE(17), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym__newline,
  [187] = 5,
    ACTIONS(82), 1,
      sym_tag,
    ACTIONS(84), 1,
      sym_line_comment,
    STATE(18), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym__newline,
  [205] = 5,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(40), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [223] = 5,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym__newline,
  [241] = 5,
    ACTIONS(94), 1,
      sym_tag,
    ACTIONS(96), 1,
      sym_line_comment,
    STATE(13), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__newline,
  [259] = 5,
    ACTIONS(82), 1,
      sym_tag,
    ACTIONS(96), 1,
      sym_line_comment,
    STATE(18), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__newline,
  [277] = 4,
    ACTIONS(100), 1,
      sym_tag,
    STATE(18), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_line_comment,
  [293] = 5,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(45), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [311] = 4,
    ACTIONS(82), 1,
      sym_tag,
    STATE(18), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym__newline,
  [326] = 4,
    ACTIONS(15), 1,
      sym_divert_mark,
    STATE(32), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__newline,
  [341] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [352] = 4,
    ACTIONS(113), 1,
      sym_knot_mark,
    ACTIONS(115), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__newline,
  [367] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [377] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [387] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [397] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [407] = 3,
    ACTIONS(127), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym__newline,
  [419] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym__newline,
  [428] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym__newline,
  [437] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__newline,
  [446] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym__newline,
  [455] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym__newline,
  [464] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym__newline,
  [473] = 3,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [484] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym__newline,
  [493] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      sym__newline,
  [502] = 3,
    ACTIONS(137), 1,
      sym__newline,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [513] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__newline,
  [522] = 2,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [530] = 2,
    ACTIONS(137), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [538] = 2,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [546] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [554] = 2,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [562] = 2,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [570] = 2,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [578] = 2,
    ACTIONS(157), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 59,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 187,
  [SMALL_STATE(14)] = 205,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 259,
  [SMALL_STATE(18)] = 277,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 326,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 377,
  [SMALL_STATE(26)] = 387,
  [SMALL_STATE(27)] = 397,
  [SMALL_STATE(28)] = 407,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 428,
  [SMALL_STATE(31)] = 437,
  [SMALL_STATE(32)] = 446,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 464,
  [SMALL_STATE(35)] = 473,
  [SMALL_STATE(36)] = 484,
  [SMALL_STATE(37)] = 493,
  [SMALL_STATE(38)] = 502,
  [SMALL_STATE(39)] = 513,
  [SMALL_STATE(40)] = 522,
  [SMALL_STATE(41)] = 530,
  [SMALL_STATE(42)] = 538,
  [SMALL_STATE(43)] = 546,
  [SMALL_STATE(44)] = 554,
  [SMALL_STATE(45)] = 562,
  [SMALL_STATE(46)] = 570,
  [SMALL_STATE(47)] = 578,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(20),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(42),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(46),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(41),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(44),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 11),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 8),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 12),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 10),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 7),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_text = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_text] = sym_text,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_text] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ink_external_scanner_create(void);
void tree_sitter_ink_external_scanner_destroy(void *);
bool tree_sitter_ink_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ink_external_scanner_serialize(void *, char *);
void tree_sitter_ink_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_ink_external_scanner_create,
      tree_sitter_ink_external_scanner_destroy,
      tree_sitter_ink_external_scanner_scan,
      tree_sitter_ink_external_scanner_serialize,
      tree_sitter_ink_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
