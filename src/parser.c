#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 1
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  aux_sym__newline_token1 = 1,
  sym__space = 2,
  sym_glue = 3,
  anon_sym_LBRACE = 4,
  anon_sym_PIPE = 5,
  anon_sym_RBRACE = 6,
  sym_tag = 7,
  anon_sym_LBRACE2 = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  sym_knot_mark = 11,
  sym_divert_mark = 12,
  anon_sym_EQ = 13,
  anon_sym_INCLUDE = 14,
  aux_sym_include_token1 = 15,
  aux_sym_expr_token1 = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_not = 19,
  anon_sym_BANG = 20,
  anon_sym_STAR = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  anon_sym_SLASH = 24,
  anon_sym_EQ_EQ = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_LT = 29,
  anon_sym_or = 30,
  anon_sym_PIPE_PIPE = 31,
  anon_sym_and = 32,
  anon_sym_AMP_AMP = 33,
  sym_identifier = 34,
  anon_sym_DOT = 35,
  sym_comment = 36,
  sym_line_comment = 37,
  anon_sym_TODO = 38,
  anon_sym_COLON = 39,
  aux_sym_todo_comment_token1 = 40,
  sym_text = 41,
  sym_ink = 42,
  sym__newline = 43,
  sym__toplevel = 44,
  sym_paragraph = 45,
  sym_flow = 46,
  sym_alternatives = 47,
  sym_choice = 48,
  sym_condition = 49,
  sym__choice_content = 50,
  sym__compound_choice_content = 51,
  sym_knot = 52,
  sym_stitch = 53,
  sym_divert = 54,
  sym_include = 55,
  sym_paren = 56,
  sym_binary = 57,
  sym_unary = 58,
  sym__unary_operator = 59,
  sym__binary_operator = 60,
  sym_qualified_name = 61,
  sym_symbol = 62,
  sym_todo_comment = 63,
  aux_sym_ink_repeat1 = 64,
  aux_sym__toplevel_repeat1 = 65,
  aux_sym_flow_repeat1 = 66,
  aux_sym_alternatives_repeat1 = 67,
  aux_sym_choice_repeat1 = 68,
  anon_alias_sym_ = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__space] = "_space",
  [sym_glue] = "glue",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [sym_tag] = "tag",
  [anon_sym_LBRACE2] = "{",
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
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_or] = "or",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_and] = "and",
  [anon_sym_AMP_AMP] = "&&",
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
  [sym_alternatives] = "alternatives",
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
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [anon_alias_sym_] = "",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__space] = sym__space,
  [sym_glue] = sym_glue,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_tag] = sym_tag,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
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
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
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
  [sym_alternatives] = sym_alternatives,
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
  [aux_sym_alternatives_repeat1] = aux_sym_alternatives_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE2] = {
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
  [anon_sym_BANG] = {
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
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
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
  [sym_alternatives] = {
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
  [aux_sym_alternatives_repeat1] = {
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
  [36] = 20,
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
  [54] = 14,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 78,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == '|') ADVANCE(72);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(29);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(85);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(85);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(85);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(85);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 31, .external_lex_state = 1},
  [2] = {.lex_state = 31, .external_lex_state = 1},
  [3] = {.lex_state = 31, .external_lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 31, .external_lex_state = 1},
  [19] = {.lex_state = 31, .external_lex_state = 1},
  [20] = {.lex_state = 31, .external_lex_state = 1},
  [21] = {.lex_state = 31, .external_lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 31, .external_lex_state = 1},
  [28] = {.lex_state = 31, .external_lex_state = 1},
  [29] = {.lex_state = 31, .external_lex_state = 1},
  [30] = {.lex_state = 1, .external_lex_state = 1},
  [31] = {.lex_state = 31, .external_lex_state = 1},
  [32] = {.lex_state = 31, .external_lex_state = 1},
  [33] = {.lex_state = 31, .external_lex_state = 1},
  [34] = {.lex_state = 31, .external_lex_state = 1},
  [35] = {.lex_state = 31, .external_lex_state = 1},
  [36] = {.lex_state = 31, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 1, .external_lex_state = 1},
  [39] = {.lex_state = 1, .external_lex_state = 1},
  [40] = {.lex_state = 31, .external_lex_state = 1},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 1, .external_lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 1},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 32},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 88},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 32},
  [87] = {.lex_state = 32},
  [88] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
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
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(83),
    [sym__newline] = STATE(3),
    [sym__toplevel] = STATE(58),
    [sym_paragraph] = STATE(58),
    [sym_flow] = STATE(41),
    [sym_alternatives] = STATE(20),
    [sym_choice] = STATE(58),
    [sym_knot] = STATE(58),
    [sym_stitch] = STATE(58),
    [sym_divert] = STATE(58),
    [sym_include] = STATE(58),
    [sym_symbol] = STATE(11),
    [sym_todo_comment] = STATE(58),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(52),
    [aux_sym_flow_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__newline_token1] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym_glue] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_tag] = ACTIONS(13),
    [sym_knot_mark] = ACTIONS(15),
    [sym_divert_mark] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_INCLUDE] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(25),
    [anon_sym_TODO] = ACTIONS(27),
    [sym_text] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym__newline_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(40), 1,
      sym_tag,
    ACTIONS(43), 1,
      sym_knot_mark,
    ACTIONS(46), 1,
      sym_divert_mark,
    ACTIONS(49), 1,
      anon_sym_EQ,
    ACTIONS(52), 1,
      anon_sym_INCLUDE,
    ACTIONS(58), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      anon_sym_TODO,
    STATE(11), 1,
      sym_symbol,
    STATE(41), 1,
      sym_flow,
    STATE(52), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(34), 2,
      sym_text,
      sym_glue,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(2), 2,
      sym__newline,
      aux_sym_ink_repeat1,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(69), 8,
      sym__toplevel,
      sym_paragraph,
      sym_choice,
      sym_knot,
      sym_stitch,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [70] = 19,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      sym_knot_mark,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_INCLUDE,
    ACTIONS(27), 1,
      anon_sym_TODO,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      aux_sym__newline_token1,
    ACTIONS(68), 1,
      sym_line_comment,
    STATE(11), 1,
      sym_symbol,
    STATE(41), 1,
      sym_flow,
    STATE(52), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(23), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(2), 2,
      sym__newline,
      aux_sym_ink_repeat1,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(61), 8,
      sym__toplevel,
      sym_paragraph,
      sym_choice,
      sym_knot,
      sym_stitch,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [140] = 5,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(72), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(70), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [170] = 6,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(76), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [202] = 6,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [233] = 5,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(76), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [262] = 4,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(72), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(70), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [289] = 6,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [320] = 6,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [351] = 12,
    ACTIONS(88), 1,
      aux_sym__newline_token1,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_LBRACE2,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym_divert_mark,
    STATE(49), 1,
      sym_flow,
    STATE(55), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(15), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(75), 2,
      sym__choice_content,
      sym_divert,
  [393] = 5,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [421] = 5,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [449] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(100), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(98), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [473] = 12,
    ACTIONS(88), 1,
      aux_sym__newline_token1,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_LBRACE2,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym_divert_mark,
    STATE(49), 1,
      sym_flow,
    STATE(55), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(30), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(67), 2,
      sym__choice_content,
      sym_divert,
  [515] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(104), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [539] = 5,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [567] = 5,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(108), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(106), 9,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [594] = 3,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(29), 13,
      sym_text,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym_knot_mark,
      sym_divert_mark,
      anon_sym_INCLUDE,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym_line_comment,
      anon_sym_TODO,
  [617] = 5,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(118), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [642] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(120), 12,
      sym_text,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [661] = 8,
    ACTIONS(122), 1,
      aux_sym_expr_token1,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(128), 1,
      anon_sym_BANG,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(22), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(8), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [690] = 8,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(128), 1,
      anon_sym_BANG,
    ACTIONS(132), 1,
      aux_sym_expr_token1,
    ACTIONS(134), 1,
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
  [719] = 8,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(128), 1,
      anon_sym_BANG,
    ACTIONS(136), 1,
      aux_sym_expr_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(22), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(12), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [748] = 8,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(128), 1,
      anon_sym_BANG,
    ACTIONS(140), 1,
      aux_sym_expr_token1,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(22), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(7), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [777] = 8,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(128), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      aux_sym_expr_token1,
    ACTIONS(146), 1,
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
  [806] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_PIPE,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(148), 2,
      sym_text,
      sym_glue,
    STATE(32), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(36), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [832] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [856] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [880] = 6,
    ACTIONS(158), 1,
      aux_sym__newline_token1,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_LBRACE2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(30), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    ACTIONS(161), 4,
      sym_text,
      sym_glue,
      anon_sym_LBRACK,
      sym_divert_mark,
  [904] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [928] = 7,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(170), 2,
      sym_text,
      sym_glue,
    STATE(32), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(36), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [954] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [978] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(148), 2,
      sym_text,
      sym_glue,
    STATE(27), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(36), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1001] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1023] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(116), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1039] = 3,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(187), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1055] = 3,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(191), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1071] = 4,
    ACTIONS(195), 1,
      aux_sym__newline_token1,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(197), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1089] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1111] = 7,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(205), 1,
      sym_tag,
    ACTIONS(207), 1,
      sym_line_comment,
    STATE(46), 1,
      aux_sym__toplevel_repeat1,
    STATE(48), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1135] = 3,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(209), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1151] = 4,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      aux_sym__newline_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(209), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1169] = 3,
    ACTIONS(217), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1183] = 5,
    ACTIONS(221), 1,
      sym_tag,
    ACTIONS(223), 1,
      sym_line_comment,
    STATE(47), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1201] = 5,
    ACTIONS(221), 1,
      sym_tag,
    ACTIONS(227), 1,
      sym_line_comment,
    STATE(47), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1219] = 4,
    ACTIONS(231), 1,
      sym_tag,
    STATE(47), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_line_comment,
  [1235] = 5,
    ACTIONS(227), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      sym_tag,
    STATE(45), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1253] = 5,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1271] = 4,
    ACTIONS(242), 1,
      sym_knot_mark,
    ACTIONS(244), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1286] = 4,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(53), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1301] = 4,
    ACTIONS(221), 1,
      sym_tag,
    STATE(47), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1316] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1327] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1338] = 4,
    ACTIONS(17), 1,
      sym_divert_mark,
    STATE(66), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1353] = 3,
    ACTIONS(256), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1365] = 3,
    ACTIONS(260), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1377] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      aux_sym__newline_token1,
    STATE(19), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1391] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1401] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1411] = 4,
    ACTIONS(262), 1,
      aux_sym__newline_token1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1425] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(270), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1435] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(272), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1445] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1454] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1463] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1472] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1481] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1490] = 3,
    ACTIONS(262), 1,
      aux_sym__newline_token1,
    STATE(19), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1501] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1510] = 3,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(53), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1521] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1530] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1539] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1548] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1557] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1566] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1575] = 2,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1583] = 2,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1591] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1599] = 2,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1607] = 2,
    ACTIONS(300), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1615] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1623] = 2,
    ACTIONS(304), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1631] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(306), 1,
      aux_sym_include_token1,
    ACTIONS(308), 1,
      sym_comment,
  [1641] = 2,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1649] = 2,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1657] = 2,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 170,
  [SMALL_STATE(6)] = 202,
  [SMALL_STATE(7)] = 233,
  [SMALL_STATE(8)] = 262,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 320,
  [SMALL_STATE(11)] = 351,
  [SMALL_STATE(12)] = 393,
  [SMALL_STATE(13)] = 421,
  [SMALL_STATE(14)] = 449,
  [SMALL_STATE(15)] = 473,
  [SMALL_STATE(16)] = 515,
  [SMALL_STATE(17)] = 539,
  [SMALL_STATE(18)] = 567,
  [SMALL_STATE(19)] = 594,
  [SMALL_STATE(20)] = 617,
  [SMALL_STATE(21)] = 642,
  [SMALL_STATE(22)] = 661,
  [SMALL_STATE(23)] = 690,
  [SMALL_STATE(24)] = 719,
  [SMALL_STATE(25)] = 748,
  [SMALL_STATE(26)] = 777,
  [SMALL_STATE(27)] = 806,
  [SMALL_STATE(28)] = 832,
  [SMALL_STATE(29)] = 856,
  [SMALL_STATE(30)] = 880,
  [SMALL_STATE(31)] = 904,
  [SMALL_STATE(32)] = 928,
  [SMALL_STATE(33)] = 954,
  [SMALL_STATE(34)] = 978,
  [SMALL_STATE(35)] = 1001,
  [SMALL_STATE(36)] = 1023,
  [SMALL_STATE(37)] = 1039,
  [SMALL_STATE(38)] = 1055,
  [SMALL_STATE(39)] = 1071,
  [SMALL_STATE(40)] = 1089,
  [SMALL_STATE(41)] = 1111,
  [SMALL_STATE(42)] = 1135,
  [SMALL_STATE(43)] = 1151,
  [SMALL_STATE(44)] = 1169,
  [SMALL_STATE(45)] = 1183,
  [SMALL_STATE(46)] = 1201,
  [SMALL_STATE(47)] = 1219,
  [SMALL_STATE(48)] = 1235,
  [SMALL_STATE(49)] = 1253,
  [SMALL_STATE(50)] = 1271,
  [SMALL_STATE(51)] = 1286,
  [SMALL_STATE(52)] = 1301,
  [SMALL_STATE(53)] = 1316,
  [SMALL_STATE(54)] = 1327,
  [SMALL_STATE(55)] = 1338,
  [SMALL_STATE(56)] = 1353,
  [SMALL_STATE(57)] = 1365,
  [SMALL_STATE(58)] = 1377,
  [SMALL_STATE(59)] = 1391,
  [SMALL_STATE(60)] = 1401,
  [SMALL_STATE(61)] = 1411,
  [SMALL_STATE(62)] = 1425,
  [SMALL_STATE(63)] = 1435,
  [SMALL_STATE(64)] = 1445,
  [SMALL_STATE(65)] = 1454,
  [SMALL_STATE(66)] = 1463,
  [SMALL_STATE(67)] = 1472,
  [SMALL_STATE(68)] = 1481,
  [SMALL_STATE(69)] = 1490,
  [SMALL_STATE(70)] = 1501,
  [SMALL_STATE(71)] = 1510,
  [SMALL_STATE(72)] = 1521,
  [SMALL_STATE(73)] = 1530,
  [SMALL_STATE(74)] = 1539,
  [SMALL_STATE(75)] = 1548,
  [SMALL_STATE(76)] = 1557,
  [SMALL_STATE(77)] = 1566,
  [SMALL_STATE(78)] = 1575,
  [SMALL_STATE(79)] = 1583,
  [SMALL_STATE(80)] = 1591,
  [SMALL_STATE(81)] = 1599,
  [SMALL_STATE(82)] = 1607,
  [SMALL_STATE(83)] = 1615,
  [SMALL_STATE(84)] = 1623,
  [SMALL_STATE(85)] = 1631,
  [SMALL_STATE(86)] = 1641,
  [SMALL_STATE(87)] = 1649,
  [SMALL_STATE(88)] = 1657,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(20),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(34),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(52),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(87),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(71),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(86),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(85),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(38),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(69),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(84),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 8),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 11),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(34),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 14),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(80),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(26),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(36),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(34),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(32),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(47),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 13),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 12),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 15),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 9),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [302] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
