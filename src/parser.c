#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  aux_sym__newline_token1 = 1,
  sym__space = 2,
  sym_glue = 3,
  sym_tag = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  sym_knot_mark = 9,
  sym_divert_mark = 10,
  anon_sym_EQ = 11,
  anon_sym_INCLUDE = 12,
  aux_sym_include_token1 = 13,
  aux_sym_expr_token1 = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_not = 17,
  anon_sym_STAR = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_SLASH = 21,
  anon_sym_EQ_EQ = 22,
  anon_sym_GT_EQ = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_GT = 25,
  anon_sym_LT = 26,
  sym_identifier = 27,
  anon_sym_DOT = 28,
  sym_comment = 29,
  sym_line_comment = 30,
  anon_sym_TODO = 31,
  anon_sym_COLON = 32,
  aux_sym_todo_comment_token1 = 33,
  sym_text = 34,
  sym_ink = 35,
  sym__newline = 36,
  sym__toplevel = 37,
  sym_paragraph = 38,
  sym_flow = 39,
  sym_choice = 40,
  sym_condition = 41,
  sym__choice_content = 42,
  sym__compound_choice_content = 43,
  sym_knot = 44,
  sym_stitch = 45,
  sym_divert = 46,
  sym_include = 47,
  sym_paren = 48,
  sym_binary = 49,
  sym_unary = 50,
  sym__unary_operator = 51,
  sym__binary_operator = 52,
  sym_qualified_name = 53,
  sym_symbol = 54,
  sym_todo_comment = 55,
  aux_sym_ink_repeat1 = 56,
  aux_sym__toplevel_repeat1 = 57,
  aux_sym_flow_repeat1 = 58,
  aux_sym_choice_repeat1 = 59,
  anon_alias_sym_ = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__space] = "_space",
  [sym_glue] = "glue",
  [sym_tag] = "tag",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_knot_mark] = "knot_mark",
  [sym_divert_mark] = "divert_mark",
  [anon_sym_EQ] = "stitch_mark",
  [anon_sym_INCLUDE] = "INCLUDE",
  [aux_sym_include_token1] = "path",
  [aux_sym_expr_token1] = "number",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_not] = "not",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [sym_line_comment] = "comment",
  [anon_sym_TODO] = "TODO",
  [anon_sym_COLON] = ":",
  [aux_sym_todo_comment_token1] = "todo_comment_token1",
  [sym_text] = "text",
  [sym_ink] = "ink",
  [sym__newline] = "_newline",
  [sym__toplevel] = "_toplevel",
  [sym_paragraph] = "paragraph",
  [sym_flow] = "flow",
  [sym_choice] = "choice",
  [sym_condition] = "condition",
  [sym__choice_content] = "_choice_content",
  [sym__compound_choice_content] = "_compound_choice_content",
  [sym_knot] = "knot",
  [sym_stitch] = "stitch",
  [sym_divert] = "divert",
  [sym_include] = "include",
  [sym_paren] = "paren",
  [sym_binary] = "binary",
  [sym_unary] = "unary",
  [sym__unary_operator] = "_unary_operator",
  [sym__binary_operator] = "_binary_operator",
  [sym_qualified_name] = "qualified_name",
  [sym_symbol] = "symbol",
  [sym_todo_comment] = "todo_comment",
  [aux_sym_ink_repeat1] = "ink_repeat1",
  [aux_sym__toplevel_repeat1] = "_toplevel_repeat1",
  [aux_sym_flow_repeat1] = "flow_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [anon_alias_sym_] = "",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__space] = sym__space,
  [sym_glue] = sym_glue,
  [sym_tag] = sym_tag,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_knot_mark] = sym_knot_mark,
  [sym_divert_mark] = sym_divert_mark,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [aux_sym_expr_token1] = aux_sym_expr_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_comment] = sym_comment,
  [sym_line_comment] = sym_comment,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_todo_comment_token1] = aux_sym_todo_comment_token1,
  [sym_text] = sym_text,
  [sym_ink] = sym_ink,
  [sym__newline] = sym__newline,
  [sym__toplevel] = sym__toplevel,
  [sym_paragraph] = sym_paragraph,
  [sym_flow] = sym_flow,
  [sym_choice] = sym_choice,
  [sym_condition] = sym_condition,
  [sym__choice_content] = sym__choice_content,
  [sym__compound_choice_content] = sym__compound_choice_content,
  [sym_knot] = sym_knot,
  [sym_stitch] = sym_stitch,
  [sym_divert] = sym_divert,
  [sym_include] = sym_include,
  [sym_paren] = sym_paren,
  [sym_binary] = sym_binary,
  [sym_unary] = sym_unary,
  [sym__unary_operator] = sym__unary_operator,
  [sym__binary_operator] = sym__binary_operator,
  [sym_qualified_name] = sym_qualified_name,
  [sym_symbol] = sym_symbol,
  [sym_todo_comment] = sym_todo_comment,
  [aux_sym_ink_repeat1] = aux_sym_ink_repeat1,
  [aux_sym__toplevel_repeat1] = aux_sym__toplevel_repeat1,
  [aux_sym_flow_repeat1] = aux_sym_flow_repeat1,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [anon_alias_sym_] = anon_alias_sym_,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [aux_sym_expr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
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
  [sym__newline] = {
    .visible = false,
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
  [sym_condition] = {
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
  [sym_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_unary] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_operator] = {
    .visible = false,
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
  [aux_sym_choice_repeat1] = {
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
  field_op = 5,
  field_target = 6,
  field_temporary = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_final] = "final",
  [field_main] = "main",
  [field_mark] = "mark",
  [field_name] = "name",
  [field_op] = "op",
  [field_target] = "target",
  [field_temporary] = "temporary",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 4},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 4},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 3},
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
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_mark, 0},
    {field_temporary, 2, .inherited = true},
  [14] =
    {field_op, 0},
  [15] =
    {field_final, 2},
  [16] =
    {field_temporary, 1},
  [17] =
    {field_op, 1},
  [18] =
    {field_final, 3},
    {field_temporary, 1},
  [20] =
    {field_final, 3},
    {field_main, 0},
  [22] =
    {field_main, 0},
    {field_temporary, 2},
  [24] =
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
  [46] = 16,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 73,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'O') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(9);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(20);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(21);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22, .external_lex_state = 1},
  [2] = {.lex_state = 22, .external_lex_state = 1},
  [3] = {.lex_state = 22, .external_lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 22, .external_lex_state = 1},
  [6] = {.lex_state = 22, .external_lex_state = 1},
  [7] = {.lex_state = 22, .external_lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 22, .external_lex_state = 1},
  [20] = {.lex_state = 22, .external_lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 22, .external_lex_state = 1},
  [27] = {.lex_state = 22, .external_lex_state = 1},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22, .external_lex_state = 1},
  [30] = {.lex_state = 22, .external_lex_state = 1},
  [31] = {.lex_state = 22, .external_lex_state = 1},
  [32] = {.lex_state = 22, .external_lex_state = 1},
  [33] = {.lex_state = 22, .external_lex_state = 1},
  [34] = {.lex_state = 22, .external_lex_state = 1},
  [35] = {.lex_state = 22, .external_lex_state = 1},
  [36] = {.lex_state = 22, .external_lex_state = 1},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22, .external_lex_state = 1},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22, .external_lex_state = 1},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 82},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 23},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_knot_mark] = ACTIONS(1),
    [sym_divert_mark] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [aux_sym_expr_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(78),
    [sym__newline] = STATE(3),
    [sym__toplevel] = STATE(56),
    [sym_paragraph] = STATE(56),
    [sym_flow] = STATE(28),
    [sym_choice] = STATE(56),
    [sym_knot] = STATE(56),
    [sym_stitch] = STATE(56),
    [sym_divert] = STATE(56),
    [sym_include] = STATE(56),
    [sym_symbol] = STATE(7),
    [sym_todo_comment] = STATE(56),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(50),
    [aux_sym_flow_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__newline_token1] = ACTIONS(7),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym__newline_token1,
    ACTIONS(35), 1,
      sym_tag,
    ACTIONS(38), 1,
      sym_knot_mark,
    ACTIONS(41), 1,
      sym_divert_mark,
    ACTIONS(44), 1,
      anon_sym_EQ,
    ACTIONS(47), 1,
      anon_sym_INCLUDE,
    ACTIONS(53), 1,
      sym_line_comment,
    ACTIONS(56), 1,
      anon_sym_TODO,
    STATE(7), 1,
      sym_symbol,
    STATE(20), 1,
      aux_sym_flow_repeat1,
    STATE(28), 1,
      sym_flow,
    STATE(50), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(32), 2,
      sym_text,
      sym_glue,
    ACTIONS(50), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(2), 2,
      sym__newline,
      aux_sym_ink_repeat1,
    STATE(64), 8,
      sym__toplevel,
      sym_paragraph,
      sym_choice,
      sym_knot,
      sym_stitch,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [66] = 18,
    ACTIONS(11), 1,
      sym_tag,
    ACTIONS(13), 1,
      sym_knot_mark,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(19), 1,
      anon_sym_INCLUDE,
    ACTIONS(25), 1,
      anon_sym_TODO,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym__newline_token1,
    ACTIONS(63), 1,
      sym_line_comment,
    STATE(7), 1,
      sym_symbol,
    STATE(20), 1,
      aux_sym_flow_repeat1,
    STATE(28), 1,
      sym_flow,
    STATE(50), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(2), 2,
      sym__newline,
      aux_sym_ink_repeat1,
    STATE(54), 8,
      sym__toplevel,
      sym_paragraph,
      sym_choice,
      sym_knot,
      sym_stitch,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [132] = 5,
    ACTIONS(69), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [158] = 11,
    ACTIONS(71), 1,
      aux_sym__newline_token1,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_divert_mark,
    STATE(20), 1,
      aux_sym_flow_repeat1,
    STATE(44), 1,
      sym_flow,
    STATE(48), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(26), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(62), 2,
      sym__choice_content,
      sym_divert,
  [196] = 3,
    ACTIONS(79), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(27), 12,
      sym_text,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_glue,
      sym_tag,
      sym_knot_mark,
      sym_divert_mark,
      anon_sym_INCLUDE,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym_line_comment,
      anon_sym_TODO,
  [218] = 11,
    ACTIONS(71), 1,
      aux_sym__newline_token1,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_divert_mark,
    STATE(20), 1,
      aux_sym_flow_repeat1,
    STATE(44), 1,
      sym_flow,
    STATE(48), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(5), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(71), 2,
      sym__choice_content,
      sym_divert,
  [256] = 6,
    ACTIONS(69), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(85), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [284] = 6,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [311] = 5,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(85), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [336] = 6,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [363] = 6,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [390] = 4,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [413] = 5,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [437] = 5,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [461] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [481] = 5,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [505] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [525] = 4,
    STATE(19), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(103), 2,
      sym_text,
      sym_glue,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [546] = 4,
    STATE(19), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(108), 2,
      sym_text,
      sym_glue,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [567] = 7,
    ACTIONS(110), 1,
      aux_sym_expr_token1,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_not,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(22), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(14), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [593] = 7,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_not,
    ACTIONS(118), 1,
      aux_sym_expr_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(22), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(13), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [619] = 7,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_not,
    ACTIONS(122), 1,
      aux_sym_expr_token1,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(22), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(15), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [645] = 7,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_not,
    ACTIONS(126), 1,
      aux_sym_expr_token1,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(22), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(17), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [671] = 7,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_not,
    ACTIONS(130), 1,
      aux_sym_expr_token1,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(22), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(10), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [697] = 5,
    ACTIONS(134), 1,
      aux_sym__newline_token1,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(26), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    ACTIONS(137), 4,
      sym_text,
      sym_glue,
      anon_sym_LBRACK,
      sym_divert_mark,
  [718] = 5,
    STATE(20), 1,
      aux_sym_flow_repeat1,
    STATE(53), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [738] = 7,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(146), 1,
      sym_tag,
    ACTIONS(148), 1,
      sym_line_comment,
    STATE(41), 1,
      sym_divert,
    STATE(42), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [762] = 5,
    STATE(20), 1,
      aux_sym_flow_repeat1,
    STATE(51), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [782] = 5,
    STATE(20), 1,
      aux_sym_flow_repeat1,
    STATE(58), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [802] = 5,
    STATE(20), 1,
      aux_sym_flow_repeat1,
    STATE(57), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [822] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(156), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_divert_mark,
  [835] = 3,
    ACTIONS(158), 1,
      aux_sym__newline_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(160), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_divert_mark,
  [850] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(162), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_divert_mark,
  [863] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(164), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_divert_mark,
  [876] = 3,
    ACTIONS(166), 1,
      aux_sym__newline_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(162), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_divert_mark,
  [891] = 5,
    ACTIONS(170), 1,
      sym_tag,
    ACTIONS(172), 1,
      sym_line_comment,
    STATE(39), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [909] = 3,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [923] = 4,
    ACTIONS(180), 1,
      sym_tag,
    STATE(39), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_line_comment,
  [939] = 5,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_flow_repeat1,
    STATE(77), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [957] = 5,
    ACTIONS(187), 1,
      sym_tag,
    ACTIONS(189), 1,
      sym_line_comment,
    STATE(37), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [975] = 5,
    ACTIONS(170), 1,
      sym_tag,
    ACTIONS(189), 1,
      sym_line_comment,
    STATE(39), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [993] = 5,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_flow_repeat1,
    STATE(74), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [1011] = 5,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1029] = 4,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(47), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1044] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1055] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1066] = 4,
    ACTIONS(15), 1,
      sym_divert_mark,
    STATE(61), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1081] = 4,
    ACTIONS(205), 1,
      sym_knot_mark,
    ACTIONS(207), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1096] = 4,
    ACTIONS(170), 1,
      sym_tag,
    STATE(39), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1111] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1121] = 3,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1133] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1143] = 4,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      aux_sym__newline_token1,
    STATE(6), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1157] = 3,
    ACTIONS(225), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1169] = 4,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      aux_sym__newline_token1,
    STATE(6), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1183] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1193] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1203] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1212] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1221] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1230] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1239] = 3,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(47), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1250] = 3,
    ACTIONS(221), 1,
      aux_sym__newline_token1,
    STATE(6), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1261] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1270] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1279] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1288] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1297] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1306] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1315] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1324] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1333] = 2,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1341] = 2,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1349] = 2,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1357] = 2,
    ACTIONS(255), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1365] = 2,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1373] = 2,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1381] = 2,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1389] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(263), 1,
      aux_sym_include_token1,
    ACTIONS(265), 1,
      sym_comment,
  [1399] = 2,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1407] = 2,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1415] = 2,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 158,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 284,
  [SMALL_STATE(10)] = 311,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 413,
  [SMALL_STATE(15)] = 437,
  [SMALL_STATE(16)] = 461,
  [SMALL_STATE(17)] = 481,
  [SMALL_STATE(18)] = 505,
  [SMALL_STATE(19)] = 525,
  [SMALL_STATE(20)] = 546,
  [SMALL_STATE(21)] = 567,
  [SMALL_STATE(22)] = 593,
  [SMALL_STATE(23)] = 619,
  [SMALL_STATE(24)] = 645,
  [SMALL_STATE(25)] = 671,
  [SMALL_STATE(26)] = 697,
  [SMALL_STATE(27)] = 718,
  [SMALL_STATE(28)] = 738,
  [SMALL_STATE(29)] = 762,
  [SMALL_STATE(30)] = 782,
  [SMALL_STATE(31)] = 802,
  [SMALL_STATE(32)] = 822,
  [SMALL_STATE(33)] = 835,
  [SMALL_STATE(34)] = 850,
  [SMALL_STATE(35)] = 863,
  [SMALL_STATE(36)] = 876,
  [SMALL_STATE(37)] = 891,
  [SMALL_STATE(38)] = 909,
  [SMALL_STATE(39)] = 923,
  [SMALL_STATE(40)] = 939,
  [SMALL_STATE(41)] = 957,
  [SMALL_STATE(42)] = 975,
  [SMALL_STATE(43)] = 993,
  [SMALL_STATE(44)] = 1011,
  [SMALL_STATE(45)] = 1029,
  [SMALL_STATE(46)] = 1044,
  [SMALL_STATE(47)] = 1055,
  [SMALL_STATE(48)] = 1066,
  [SMALL_STATE(49)] = 1081,
  [SMALL_STATE(50)] = 1096,
  [SMALL_STATE(51)] = 1111,
  [SMALL_STATE(52)] = 1121,
  [SMALL_STATE(53)] = 1133,
  [SMALL_STATE(54)] = 1143,
  [SMALL_STATE(55)] = 1157,
  [SMALL_STATE(56)] = 1169,
  [SMALL_STATE(57)] = 1183,
  [SMALL_STATE(58)] = 1193,
  [SMALL_STATE(59)] = 1203,
  [SMALL_STATE(60)] = 1212,
  [SMALL_STATE(61)] = 1221,
  [SMALL_STATE(62)] = 1230,
  [SMALL_STATE(63)] = 1239,
  [SMALL_STATE(64)] = 1250,
  [SMALL_STATE(65)] = 1261,
  [SMALL_STATE(66)] = 1270,
  [SMALL_STATE(67)] = 1279,
  [SMALL_STATE(68)] = 1288,
  [SMALL_STATE(69)] = 1297,
  [SMALL_STATE(70)] = 1306,
  [SMALL_STATE(71)] = 1315,
  [SMALL_STATE(72)] = 1324,
  [SMALL_STATE(73)] = 1333,
  [SMALL_STATE(74)] = 1341,
  [SMALL_STATE(75)] = 1349,
  [SMALL_STATE(76)] = 1357,
  [SMALL_STATE(77)] = 1365,
  [SMALL_STATE(78)] = 1373,
  [SMALL_STATE(79)] = 1381,
  [SMALL_STATE(80)] = 1389,
  [SMALL_STATE(81)] = 1399,
  [SMALL_STATE(82)] = 1407,
  [SMALL_STATE(83)] = 1415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(20),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(50),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(82),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(63),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(81),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(80),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(35),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(64),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(79),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 8),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 8),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 11),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(75),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(23),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 14),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 10),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(39),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 15),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 9),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 12),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 13),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
