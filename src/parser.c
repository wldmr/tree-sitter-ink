#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 1
#define TOKEN_COUNT 19
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
  anon_sym_EQ = 9,
  sym_identifier = 10,
  anon_sym_DOT = 11,
  sym_symbol = 12,
  sym_comment = 13,
  sym_line_comment = 14,
  anon_sym_TODO = 15,
  anon_sym_COLON = 16,
  aux_sym_todo_comment_token1 = 17,
  sym_text = 18,
  sym_ink = 19,
  sym__toplevel = 20,
  sym_paragraph = 21,
  sym_flow = 22,
  sym_choice = 23,
  sym__choice_content = 24,
  sym__compound_choice_content = 25,
  sym_knot = 26,
  sym_stitch = 27,
  sym_divert = 28,
  sym_qualified_name = 29,
  sym_todo_comment = 30,
  aux_sym_ink_repeat1 = 31,
  aux_sym__toplevel_repeat1 = 32,
  aux_sym_flow_repeat1 = 33,
  anon_alias_sym_ = 34,
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
  [anon_sym_EQ] = "stitch_mark",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
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
  [sym_stitch] = "stitch",
  [sym_divert] = "divert",
  [sym_qualified_name] = "qualified_name",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_stitch] = sym_stitch,
  [sym_divert] = sym_divert,
  [sym_qualified_name] = sym_qualified_name,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
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
  [sym_stitch] = {
    .visible = true,
    .named = true,
  },
  [sym_divert] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(18);
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
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(23);
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
      if (lookahead == 'O') ADVANCE(35);
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
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 1},
  [2] = {.lex_state = 13, .external_lex_state = 1},
  [3] = {.lex_state = 13, .external_lex_state = 1},
  [4] = {.lex_state = 13, .external_lex_state = 1},
  [5] = {.lex_state = 13, .external_lex_state = 1},
  [6] = {.lex_state = 13, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 13, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 13, .external_lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 13, .external_lex_state = 1},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
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
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 41},
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
    [anon_sym_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(52),
    [sym__toplevel] = STATE(43),
    [sym_paragraph] = STATE(43),
    [sym_flow] = STATE(12),
    [sym_choice] = STATE(43),
    [sym_knot] = STATE(43),
    [sym_stitch] = STATE(43),
    [sym_divert] = STATE(43),
    [sym_todo_comment] = STATE(43),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(24),
    [aux_sym_flow_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [sym_tag] = ACTIONS(11),
    [sym_knot_mark] = ACTIONS(13),
    [sym_divert_mark] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [sym_symbol] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(21),
    [anon_sym_TODO] = ACTIONS(23),
    [sym_text] = ACTIONS(9),
  },
  [2] = {
    [sym__toplevel] = STATE(49),
    [sym_paragraph] = STATE(49),
    [sym_flow] = STATE(12),
    [sym_choice] = STATE(49),
    [sym_knot] = STATE(49),
    [sym_stitch] = STATE(49),
    [sym_divert] = STATE(49),
    [sym_todo_comment] = STATE(49),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(24),
    [aux_sym_flow_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__newline] = ACTIONS(27),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(30),
    [sym_tag] = ACTIONS(33),
    [sym_knot_mark] = ACTIONS(36),
    [sym_divert_mark] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(42),
    [sym_symbol] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(48),
    [anon_sym_TODO] = ACTIONS(51),
    [sym_text] = ACTIONS(30),
  },
  [3] = {
    [sym__toplevel] = STATE(36),
    [sym_paragraph] = STATE(36),
    [sym_flow] = STATE(12),
    [sym_choice] = STATE(36),
    [sym_knot] = STATE(36),
    [sym_stitch] = STATE(36),
    [sym_divert] = STATE(36),
    [sym_todo_comment] = STATE(36),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(24),
    [aux_sym_flow_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym__newline] = ACTIONS(56),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [sym_tag] = ACTIONS(11),
    [sym_knot_mark] = ACTIONS(13),
    [sym_divert_mark] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [sym_symbol] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(58),
    [anon_sym_TODO] = ACTIONS(23),
    [sym_text] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(60), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(25), 10,
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
  [20] = 4,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(64), 2,
      sym_text,
      sym_glue,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [41] = 4,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(69), 2,
      sym_text,
      sym_glue,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [62] = 5,
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
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [82] = 5,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(28), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [102] = 5,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(29), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [122] = 7,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(17), 1,
      sym_flow,
    STATE(23), 1,
      sym__compound_choice_content,
    STATE(41), 1,
      sym__choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [146] = 5,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(30), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [166] = 7,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(83), 1,
      sym_tag,
    ACTIONS(85), 1,
      sym_line_comment,
    STATE(13), 1,
      aux_sym__toplevel_repeat1,
    STATE(18), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__newline,
  [190] = 5,
    ACTIONS(89), 1,
      sym_tag,
    ACTIONS(91), 1,
      sym_line_comment,
    STATE(19), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym__newline,
  [208] = 5,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(48), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [226] = 3,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [240] = 5,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(51), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [258] = 5,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym__newline,
  [276] = 5,
    ACTIONS(91), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      sym_tag,
    STATE(20), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym__newline,
  [294] = 4,
    ACTIONS(109), 1,
      sym_tag,
    STATE(19), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_line_comment,
  [310] = 5,
    ACTIONS(89), 1,
      sym_tag,
    ACTIONS(114), 1,
      sym_line_comment,
    STATE(19), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym__newline,
  [328] = 4,
    ACTIONS(118), 1,
      sym_knot_mark,
    ACTIONS(120), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym__newline,
  [343] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [354] = 4,
    ACTIONS(15), 1,
      sym_divert_mark,
    STATE(38), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym__newline,
  [369] = 4,
    ACTIONS(89), 1,
      sym_tag,
    STATE(19), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym__newline,
  [384] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [395] = 3,
    ACTIONS(130), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym__newline,
  [407] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [417] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [427] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [437] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [447] = 3,
    ACTIONS(142), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym__newline,
  [459] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym__newline,
  [468] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym__newline,
  [477] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym__newline,
  [486] = 3,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(22), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [497] = 3,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [508] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym__newline,
  [517] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym__newline,
  [526] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      sym__newline,
  [535] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym__newline,
  [544] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym__newline,
  [553] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym__newline,
  [562] = 3,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [573] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym__newline,
  [582] = 2,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [590] = 2,
    ACTIONS(166), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [598] = 2,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [606] = 2,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [614] = 2,
    ACTIONS(152), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [622] = 2,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [630] = 2,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [638] = 2,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [646] = 2,
    ACTIONS(178), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 41,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 166,
  [SMALL_STATE(13)] = 190,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 226,
  [SMALL_STATE(16)] = 240,
  [SMALL_STATE(17)] = 258,
  [SMALL_STATE(18)] = 276,
  [SMALL_STATE(19)] = 294,
  [SMALL_STATE(20)] = 310,
  [SMALL_STATE(21)] = 328,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 369,
  [SMALL_STATE(25)] = 384,
  [SMALL_STATE(26)] = 395,
  [SMALL_STATE(27)] = 407,
  [SMALL_STATE(28)] = 417,
  [SMALL_STATE(29)] = 427,
  [SMALL_STATE(30)] = 437,
  [SMALL_STATE(31)] = 447,
  [SMALL_STATE(32)] = 459,
  [SMALL_STATE(33)] = 468,
  [SMALL_STATE(34)] = 477,
  [SMALL_STATE(35)] = 486,
  [SMALL_STATE(36)] = 497,
  [SMALL_STATE(37)] = 508,
  [SMALL_STATE(38)] = 517,
  [SMALL_STATE(39)] = 526,
  [SMALL_STATE(40)] = 535,
  [SMALL_STATE(41)] = 544,
  [SMALL_STATE(42)] = 553,
  [SMALL_STATE(43)] = 562,
  [SMALL_STATE(44)] = 573,
  [SMALL_STATE(45)] = 582,
  [SMALL_STATE(46)] = 590,
  [SMALL_STATE(47)] = 598,
  [SMALL_STATE(48)] = 606,
  [SMALL_STATE(49)] = 614,
  [SMALL_STATE(50)] = 622,
  [SMALL_STATE(51)] = 630,
  [SMALL_STATE(52)] = 638,
  [SMALL_STATE(53)] = 646,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(24),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(50),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(35),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(47),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(10),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(49),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(46),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 11),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(19),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 12),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 10),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 9),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 7),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
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
