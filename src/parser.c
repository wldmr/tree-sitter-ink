#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 1
#define TOKEN_COUNT 21
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
  anon_sym_INCLUDE = 10,
  aux_sym_include_token1 = 11,
  sym_identifier = 12,
  anon_sym_DOT = 13,
  sym_symbol = 14,
  sym_comment = 15,
  sym_line_comment = 16,
  anon_sym_TODO = 17,
  anon_sym_COLON = 18,
  aux_sym_todo_comment_token1 = 19,
  sym_text = 20,
  sym_ink = 21,
  sym__toplevel = 22,
  sym_paragraph = 23,
  sym_flow = 24,
  sym_choice = 25,
  sym__choice_content = 26,
  sym__compound_choice_content = 27,
  sym_knot = 28,
  sym_stitch = 29,
  sym_divert = 30,
  sym_include = 31,
  sym_qualified_name = 32,
  sym_todo_comment = 33,
  aux_sym_ink_repeat1 = 34,
  aux_sym__toplevel_repeat1 = 35,
  aux_sym_flow_repeat1 = 36,
  anon_alias_sym_ = 37,
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
  [anon_sym_INCLUDE] = "INCLUDE",
  [aux_sym_include_token1] = "path",
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
  [sym_include] = "include",
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
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [aux_sym_include_token1] = aux_sym_include_token1,
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
  [sym_include] = sym_include,
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
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_token1] = {
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
  [sym_include] = {
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
  [54] = 54,
  [55] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 20, .external_lex_state = 1},
  [2] = {.lex_state = 20, .external_lex_state = 1},
  [3] = {.lex_state = 20, .external_lex_state = 1},
  [4] = {.lex_state = 20, .external_lex_state = 1},
  [5] = {.lex_state = 20, .external_lex_state = 1},
  [6] = {.lex_state = 20, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 20, .external_lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 20, .external_lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20, .external_lex_state = 1},
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
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 60},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
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
    [anon_sym_INCLUDE] = ACTIONS(1),
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
    [sym_ink] = STATE(54),
    [sym__toplevel] = STATE(34),
    [sym_paragraph] = STATE(34),
    [sym_flow] = STATE(12),
    [sym_choice] = STATE(34),
    [sym_knot] = STATE(34),
    [sym_stitch] = STATE(34),
    [sym_divert] = STATE(34),
    [sym_include] = STATE(34),
    [sym_todo_comment] = STATE(34),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(23),
    [aux_sym_flow_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [sym_tag] = ACTIONS(11),
    [sym_knot_mark] = ACTIONS(13),
    [sym_divert_mark] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_INCLUDE] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(23),
    [anon_sym_TODO] = ACTIONS(25),
    [sym_text] = ACTIONS(9),
  },
  [2] = {
    [sym__toplevel] = STATE(47),
    [sym_paragraph] = STATE(47),
    [sym_flow] = STATE(12),
    [sym_choice] = STATE(47),
    [sym_knot] = STATE(47),
    [sym_stitch] = STATE(47),
    [sym_divert] = STATE(47),
    [sym_include] = STATE(47),
    [sym_todo_comment] = STATE(47),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(23),
    [aux_sym_flow_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__newline] = ACTIONS(29),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(32),
    [sym_tag] = ACTIONS(35),
    [sym_knot_mark] = ACTIONS(38),
    [sym_divert_mark] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(44),
    [anon_sym_INCLUDE] = ACTIONS(47),
    [sym_symbol] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(53),
    [anon_sym_TODO] = ACTIONS(56),
    [sym_text] = ACTIONS(32),
  },
  [3] = {
    [sym__toplevel] = STATE(43),
    [sym_paragraph] = STATE(43),
    [sym_flow] = STATE(12),
    [sym_choice] = STATE(43),
    [sym_knot] = STATE(43),
    [sym_stitch] = STATE(43),
    [sym_divert] = STATE(43),
    [sym_include] = STATE(43),
    [sym_todo_comment] = STATE(43),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(23),
    [aux_sym_flow_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym__newline] = ACTIONS(61),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [sym_tag] = ACTIONS(11),
    [sym_knot_mark] = ACTIONS(13),
    [sym_divert_mark] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_INCLUDE] = ACTIONS(19),
    [sym_symbol] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(63),
    [anon_sym_TODO] = ACTIONS(25),
    [sym_text] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(27), 11,
      sym_text,
      ts_builtin_sym_end,
      sym__newline,
      sym_glue,
      sym_tag,
      sym_knot_mark,
      sym_divert_mark,
      anon_sym_INCLUDE,
      sym_symbol,
      sym_line_comment,
      anon_sym_TODO,
  [21] = 4,
    STATE(6), 1,
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
  [42] = 4,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(73), 2,
      sym_text,
      sym_glue,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [63] = 5,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    STATE(28), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [83] = 5,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    STATE(31), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [103] = 5,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    STATE(29), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [123] = 5,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    STATE(30), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [143] = 7,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    STATE(19), 1,
      sym_flow,
    STATE(22), 1,
      sym__compound_choice_content,
    STATE(36), 1,
      sym__choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [167] = 7,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(88), 1,
      sym_tag,
    ACTIONS(90), 1,
      sym_line_comment,
    STATE(13), 1,
      aux_sym__toplevel_repeat1,
    STATE(18), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym__newline,
  [191] = 5,
    ACTIONS(94), 1,
      sym_tag,
    ACTIONS(96), 1,
      sym_line_comment,
    STATE(14), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__newline,
  [209] = 4,
    ACTIONS(100), 1,
      sym_tag,
    STATE(14), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_line_comment,
  [225] = 5,
    ACTIONS(94), 1,
      sym_tag,
    ACTIONS(105), 1,
      sym_line_comment,
    STATE(14), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__newline,
  [243] = 5,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    STATE(50), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [261] = 3,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [275] = 5,
    ACTIONS(96), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      sym_tag,
    STATE(15), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__newline,
  [293] = 5,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__newline,
  [311] = 5,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    STATE(52), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [329] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [340] = 4,
    ACTIONS(15), 1,
      sym_divert_mark,
    STATE(40), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__newline,
  [355] = 4,
    ACTIONS(94), 1,
      sym_tag,
    STATE(14), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym__newline,
  [370] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [381] = 4,
    ACTIONS(129), 1,
      sym_knot_mark,
    ACTIONS(131), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym__newline,
  [396] = 3,
    ACTIONS(135), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym__newline,
  [408] = 3,
    ACTIONS(139), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym__newline,
  [420] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [430] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [440] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [450] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [460] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym__newline,
  [469] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      sym__newline,
  [478] = 3,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [489] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym__newline,
  [498] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym__newline,
  [507] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      sym__newline,
  [516] = 3,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(24), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [527] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym__newline,
  [536] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      sym__newline,
  [545] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      sym__newline,
  [554] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__newline,
  [563] = 3,
    ACTIONS(151), 1,
      sym__newline,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [574] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym__newline,
  [583] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__newline,
  [592] = 2,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [600] = 2,
    ACTIONS(151), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [608] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(173), 1,
      aux_sym_include_token1,
    ACTIONS(175), 1,
      sym_comment,
  [618] = 2,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [626] = 2,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [634] = 2,
    ACTIONS(181), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [642] = 2,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [650] = 2,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [658] = 2,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [666] = 2,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 63,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 191,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 243,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 275,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 329,
  [SMALL_STATE(22)] = 340,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 381,
  [SMALL_STATE(26)] = 396,
  [SMALL_STATE(27)] = 408,
  [SMALL_STATE(28)] = 420,
  [SMALL_STATE(29)] = 430,
  [SMALL_STATE(30)] = 440,
  [SMALL_STATE(31)] = 450,
  [SMALL_STATE(32)] = 460,
  [SMALL_STATE(33)] = 469,
  [SMALL_STATE(34)] = 478,
  [SMALL_STATE(35)] = 489,
  [SMALL_STATE(36)] = 498,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 516,
  [SMALL_STATE(39)] = 527,
  [SMALL_STATE(40)] = 536,
  [SMALL_STATE(41)] = 545,
  [SMALL_STATE(42)] = 554,
  [SMALL_STATE(43)] = 563,
  [SMALL_STATE(44)] = 574,
  [SMALL_STATE(45)] = 583,
  [SMALL_STATE(46)] = 592,
  [SMALL_STATE(47)] = 600,
  [SMALL_STATE(48)] = 608,
  [SMALL_STATE(49)] = 618,
  [SMALL_STATE(50)] = 626,
  [SMALL_STATE(51)] = 634,
  [SMALL_STATE(52)] = 642,
  [SMALL_STATE(53)] = 650,
  [SMALL_STATE(54)] = 658,
  [SMALL_STATE(55)] = 666,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(55),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(38),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(49),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(48),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(11),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(47),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(53),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 11),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 12),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 9),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 10),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
