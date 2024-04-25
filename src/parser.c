#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 1
#define TOKEN_COUNT 22
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
  anon_sym_STAR = 14,
  anon_sym_PLUS = 15,
  sym_comment = 16,
  sym_line_comment = 17,
  anon_sym_TODO = 18,
  anon_sym_COLON = 19,
  aux_sym_todo_comment_token1 = 20,
  sym_text = 21,
  sym_ink = 22,
  sym__toplevel = 23,
  sym_paragraph = 24,
  sym_flow = 25,
  sym_choice = 26,
  sym__choice_content = 27,
  sym__compound_choice_content = 28,
  sym_knot = 29,
  sym_stitch = 30,
  sym_divert = 31,
  sym_include = 32,
  sym_qualified_name = 33,
  sym_symbol = 34,
  sym_todo_comment = 35,
  aux_sym_ink_repeat1 = 36,
  aux_sym__toplevel_repeat1 = 37,
  aux_sym_flow_repeat1 = 38,
  anon_alias_sym_ = 39,
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
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
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
  [sym_symbol] = "symbol",
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
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [sym_symbol] = sym_symbol,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
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
  [sym_symbol] = {
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
  [56] = 56,
  [57] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '<') ADVANCE(5);
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
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'U') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(17);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(13);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(48);
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
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(17);
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
      if (lookahead == 'O') ADVANCE(55);
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
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 1},
  [2] = {.lex_state = 19, .external_lex_state = 1},
  [3] = {.lex_state = 19, .external_lex_state = 1},
  [4] = {.lex_state = 19, .external_lex_state = 1},
  [5] = {.lex_state = 19, .external_lex_state = 1},
  [6] = {.lex_state = 19, .external_lex_state = 1},
  [7] = {.lex_state = 19, .external_lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 19, .external_lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 19, .external_lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 19, .external_lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 20},
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
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 20},
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(56),
    [sym__toplevel] = STATE(37),
    [sym_paragraph] = STATE(37),
    [sym_flow] = STATE(8),
    [sym_choice] = STATE(37),
    [sym_knot] = STATE(37),
    [sym_stitch] = STATE(37),
    [sym_divert] = STATE(37),
    [sym_include] = STATE(37),
    [sym_symbol] = STATE(7),
    [sym_todo_comment] = STATE(37),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(21),
    [aux_sym_flow_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [sym_tag] = ACTIONS(11),
    [sym_knot_mark] = ACTIONS(13),
    [sym_divert_mark] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_INCLUDE] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(23),
    [anon_sym_TODO] = ACTIONS(25),
    [sym_text] = ACTIONS(9),
  },
  [2] = {
    [sym__toplevel] = STATE(49),
    [sym_paragraph] = STATE(49),
    [sym_flow] = STATE(8),
    [sym_choice] = STATE(49),
    [sym_knot] = STATE(49),
    [sym_stitch] = STATE(49),
    [sym_divert] = STATE(49),
    [sym_include] = STATE(49),
    [sym_symbol] = STATE(7),
    [sym_todo_comment] = STATE(49),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(21),
    [aux_sym_flow_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__newline] = ACTIONS(29),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(32),
    [sym_tag] = ACTIONS(35),
    [sym_knot_mark] = ACTIONS(38),
    [sym_divert_mark] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(44),
    [anon_sym_INCLUDE] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(53),
    [anon_sym_TODO] = ACTIONS(56),
    [sym_text] = ACTIONS(32),
  },
  [3] = {
    [sym__toplevel] = STATE(36),
    [sym_paragraph] = STATE(36),
    [sym_flow] = STATE(8),
    [sym_choice] = STATE(36),
    [sym_knot] = STATE(36),
    [sym_stitch] = STATE(36),
    [sym_divert] = STATE(36),
    [sym_include] = STATE(36),
    [sym_symbol] = STATE(7),
    [sym_todo_comment] = STATE(36),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(21),
    [aux_sym_flow_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym__newline] = ACTIONS(61),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [sym_tag] = ACTIONS(11),
    [sym_knot_mark] = ACTIONS(13),
    [sym_divert_mark] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_INCLUDE] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
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
    ACTIONS(27), 12,
      sym_text,
      ts_builtin_sym_end,
      sym__newline,
      sym_glue,
      sym_tag,
      sym_knot_mark,
      sym_divert_mark,
      anon_sym_INCLUDE,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym_line_comment,
      anon_sym_TODO,
  [22] = 4,
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
  [43] = 4,
    STATE(5), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(74), 2,
      sym_text,
      sym_glue,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [64] = 8,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      sym_divert_mark,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(17), 1,
      sym_flow,
    STATE(25), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(35), 2,
      sym__choice_content,
      sym_divert,
  [92] = 7,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(82), 1,
      sym_tag,
    ACTIONS(84), 1,
      sym_line_comment,
    STATE(18), 1,
      sym_divert,
    STATE(19), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym__newline,
  [116] = 5,
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
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [136] = 5,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(33), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [156] = 5,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(31), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [176] = 5,
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
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [196] = 4,
    ACTIONS(96), 1,
      sym_tag,
    STATE(13), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_line_comment,
  [212] = 5,
    ACTIONS(101), 1,
      sym_tag,
    ACTIONS(103), 1,
      sym_line_comment,
    STATE(13), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym__newline,
  [230] = 5,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(53), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [248] = 3,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [262] = 5,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__newline,
  [280] = 5,
    ACTIONS(117), 1,
      sym_tag,
    ACTIONS(119), 1,
      sym_line_comment,
    STATE(14), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__newline,
  [298] = 5,
    ACTIONS(101), 1,
      sym_tag,
    ACTIONS(119), 1,
      sym_line_comment,
    STATE(13), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__newline,
  [316] = 5,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_flow_repeat1,
    STATE(50), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [334] = 4,
    ACTIONS(101), 1,
      sym_tag,
    STATE(13), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym__newline,
  [349] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [360] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [371] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(127), 4,
      sym_text,
      sym_glue,
      anon_sym_LBRACK,
      sym_divert_mark,
  [382] = 4,
    ACTIONS(15), 1,
      sym_divert_mark,
    STATE(44), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym__newline,
  [397] = 4,
    ACTIONS(133), 1,
      sym_knot_mark,
    ACTIONS(135), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__newline,
  [412] = 4,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(22), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym__newline,
  [427] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [437] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [447] = 3,
    ACTIONS(147), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__newline,
  [459] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [469] = 3,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym__newline,
  [481] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [491] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym__newline,
  [500] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      sym__newline,
  [509] = 3,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [520] = 3,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [531] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym__newline,
  [540] = 3,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(22), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [551] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      sym__newline,
  [560] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      sym__newline,
  [569] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym__newline,
  [578] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      sym__newline,
  [587] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym__newline,
  [596] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym__newline,
  [605] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      sym__newline,
  [614] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym__newline,
  [623] = 2,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [631] = 2,
    ACTIONS(161), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [639] = 2,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [647] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(181), 1,
      aux_sym_include_token1,
    ACTIONS(183), 1,
      sym_comment,
  [657] = 2,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [665] = 2,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [673] = 2,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [681] = 2,
    ACTIONS(191), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [689] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [697] = 2,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 43,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 116,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 156,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 298,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 334,
  [SMALL_STATE(22)] = 349,
  [SMALL_STATE(23)] = 360,
  [SMALL_STATE(24)] = 371,
  [SMALL_STATE(25)] = 382,
  [SMALL_STATE(26)] = 397,
  [SMALL_STATE(27)] = 412,
  [SMALL_STATE(28)] = 427,
  [SMALL_STATE(29)] = 437,
  [SMALL_STATE(30)] = 447,
  [SMALL_STATE(31)] = 459,
  [SMALL_STATE(32)] = 469,
  [SMALL_STATE(33)] = 481,
  [SMALL_STATE(34)] = 491,
  [SMALL_STATE(35)] = 500,
  [SMALL_STATE(36)] = 509,
  [SMALL_STATE(37)] = 520,
  [SMALL_STATE(38)] = 531,
  [SMALL_STATE(39)] = 540,
  [SMALL_STATE(40)] = 551,
  [SMALL_STATE(41)] = 560,
  [SMALL_STATE(42)] = 569,
  [SMALL_STATE(43)] = 578,
  [SMALL_STATE(44)] = 587,
  [SMALL_STATE(45)] = 596,
  [SMALL_STATE(46)] = 605,
  [SMALL_STATE(47)] = 614,
  [SMALL_STATE(48)] = 623,
  [SMALL_STATE(49)] = 631,
  [SMALL_STATE(50)] = 639,
  [SMALL_STATE(51)] = 647,
  [SMALL_STATE(52)] = 657,
  [SMALL_STATE(53)] = 665,
  [SMALL_STATE(54)] = 673,
  [SMALL_STATE(55)] = 681,
  [SMALL_STATE(56)] = 689,
  [SMALL_STATE(57)] = 697,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(21),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(48),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(39),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(52),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(51),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(24),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(49),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 11),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 8),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(13),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 10),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 12),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 9),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
