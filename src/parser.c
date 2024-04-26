#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  aux_sym__newline_token1 = 1,
  sym__space = 2,
  sym_glue = 3,
  anon_sym_LBRACE = 4,
  anon_sym_ = 5,
  anon_sym_AMP = 6,
  anon_sym_BANG = 7,
  anon_sym_TILDE = 8,
  anon_sym_PIPE = 9,
  anon_sym_RBRACE = 10,
  sym_tag = 11,
  anon_sym_BSLASH = 12,
  anon_sym_LBRACE2 = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  sym_knot_mark = 16,
  sym_divert_mark = 17,
  anon_sym_EQ = 18,
  anon_sym_INCLUDE = 19,
  aux_sym_include_token1 = 20,
  aux_sym_expr_token1 = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_not = 24,
  anon_sym_BANG2 = 25,
  anon_sym_STAR = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_SLASH = 29,
  anon_sym_EQ_EQ = 30,
  anon_sym_GT_EQ = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT = 33,
  anon_sym_LT = 34,
  anon_sym_or = 35,
  anon_sym_PIPE_PIPE = 36,
  anon_sym_and = 37,
  anon_sym_AMP_AMP = 38,
  sym_identifier = 39,
  anon_sym_DOT = 40,
  sym_comment = 41,
  sym_line_comment = 42,
  anon_sym_TODO = 43,
  anon_sym_COLON = 44,
  aux_sym_todo_comment_token1 = 45,
  sym_text = 46,
  sym_ink = 47,
  sym__newline = 48,
  sym__toplevel = 49,
  sym_paragraph = 50,
  sym_flow = 51,
  sym_alternatives = 52,
  sym_choice = 53,
  sym_condition = 54,
  sym__choice_content = 55,
  sym__compound_choice_content = 56,
  sym_knot = 57,
  sym_stitch = 58,
  sym_divert = 59,
  sym_include = 60,
  sym_paren = 61,
  sym_binary = 62,
  sym_unary = 63,
  sym__unary_operator = 64,
  sym__binary_operator = 65,
  sym_qualified_name = 66,
  sym_symbol = 67,
  sym_todo_comment = 68,
  aux_sym_ink_repeat1 = 69,
  aux_sym__toplevel_repeat1 = 70,
  aux_sym_flow_repeat1 = 71,
  aux_sym_alternatives_repeat1 = 72,
  aux_sym_choice_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__space] = "_space",
  [sym_glue] = "glue",
  [anon_sym_LBRACE] = "{",
  [anon_sym_] = "",
  [anon_sym_AMP] = "&",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [sym_tag] = "tag",
  [anon_sym_BSLASH] = "\\",
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
  [anon_sym_BANG2] = "!",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__space] = sym__space,
  [sym_glue] = sym_glue,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_] = anon_sym_,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_tag] = sym_tag,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
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
  [anon_sym_BANG2] = anon_sym_BANG,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
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
  [anon_sym_BANG2] = {
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
  [11] = {.index = 17, .length = 4},
  [12] = {.index = 21, .length = 1},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 3},
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
    {field_final, 3, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_mark, 0},
    {field_temporary, 3, .inherited = true},
  [21] =
    {field_op, 1},
  [22] =
    {field_final, 3},
    {field_temporary, 1},
  [24] =
    {field_final, 3},
    {field_main, 0},
  [26] =
    {field_main, 0},
    {field_temporary, 2},
  [28] =
    {field_final, 4},
    {field_main, 0},
    {field_temporary, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_sym_,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_flow, 2,
    sym_flow,
    anon_sym_,
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
  [47] = 15,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 46,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 55,
  [60] = 60,
  [61] = 15,
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
  [75] = 71,
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
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 94,
  [99] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '~') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(50);
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
      if (lookahead == 'E') ADVANCE(52);
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
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == '|') ADVANCE(76);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(44);
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
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(81);
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
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '~') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BANG2);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
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
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 1, .external_lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 31, .external_lex_state = 1},
  [19] = {.lex_state = 31, .external_lex_state = 1},
  [20] = {.lex_state = 31, .external_lex_state = 1},
  [21] = {.lex_state = 31, .external_lex_state = 1},
  [22] = {.lex_state = 31, .external_lex_state = 1},
  [23] = {.lex_state = 31, .external_lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1, .external_lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 31, .external_lex_state = 1},
  [31] = {.lex_state = 31, .external_lex_state = 1},
  [32] = {.lex_state = 31, .external_lex_state = 1},
  [33] = {.lex_state = 31, .external_lex_state = 1},
  [34] = {.lex_state = 31, .external_lex_state = 1},
  [35] = {.lex_state = 31, .external_lex_state = 1},
  [36] = {.lex_state = 31, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 1, .external_lex_state = 1},
  [39] = {.lex_state = 1, .external_lex_state = 1},
  [40] = {.lex_state = 1, .external_lex_state = 1},
  [41] = {.lex_state = 1, .external_lex_state = 1},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 31, .external_lex_state = 1},
  [44] = {.lex_state = 31, .external_lex_state = 1},
  [45] = {.lex_state = 31, .external_lex_state = 1},
  [46] = {.lex_state = 31, .external_lex_state = 1},
  [47] = {.lex_state = 31, .external_lex_state = 1},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31, .external_lex_state = 1},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31, .external_lex_state = 1},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 31},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 31},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 31},
  [70] = {.lex_state = 31},
  [71] = {.lex_state = 32},
  [72] = {.lex_state = 31},
  [73] = {.lex_state = 31},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 31},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 31},
  [79] = {.lex_state = 31},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 31},
  [83] = {.lex_state = 31},
  [84] = {.lex_state = 31},
  [85] = {.lex_state = 31},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 31},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 31},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 31},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 92},
  [96] = {.lex_state = 32},
  [97] = {.lex_state = 31},
  [98] = {.lex_state = 32},
  [99] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
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
    [anon_sym_BANG2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
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
    [sym_ink] = STATE(90),
    [sym__newline] = STATE(3),
    [sym__toplevel] = STATE(63),
    [sym_paragraph] = STATE(63),
    [sym_flow] = STATE(42),
    [sym_alternatives] = STATE(18),
    [sym_choice] = STATE(63),
    [sym_knot] = STATE(63),
    [sym_stitch] = STATE(63),
    [sym_divert] = STATE(63),
    [sym_include] = STATE(63),
    [sym_symbol] = STATE(6),
    [sym_todo_comment] = STATE(63),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(62),
    [aux_sym_flow_repeat1] = STATE(18),
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
    STATE(6), 1,
      sym_symbol,
    STATE(42), 1,
      sym_flow,
    STATE(62), 1,
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
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(87), 8,
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
    STATE(6), 1,
      sym_symbol,
    STATE(42), 1,
      sym_flow,
    STATE(62), 1,
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
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(68), 8,
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
    STATE(29), 1,
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
    STATE(29), 1,
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
  [202] = 13,
    ACTIONS(82), 1,
      aux_sym__newline_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      anon_sym_LBRACE2,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      sym_divert_mark,
    STATE(49), 1,
      sym_flow,
    STATE(58), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(12), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(85), 2,
      sym__choice_content,
      sym_divert,
  [247] = 4,
    STATE(29), 1,
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
  [274] = 6,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
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
  [305] = 6,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
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
  [336] = 6,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
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
  [367] = 5,
    STATE(29), 1,
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
  [396] = 13,
    ACTIONS(82), 1,
      aux_sym__newline_token1,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_LBRACE2,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      sym_divert_mark,
    ACTIONS(100), 1,
      anon_sym_BSLASH,
    STATE(49), 1,
      sym_flow,
    STATE(58), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(27), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(81), 2,
      sym__choice_content,
      sym_divert,
  [441] = 5,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
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
  [469] = 5,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
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
  [497] = 3,
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
  [521] = 5,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
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
  [549] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 12,
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
  [573] = 5,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(112), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [600] = 5,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(116), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [627] = 3,
    ACTIONS(122), 1,
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
  [650] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(124), 12,
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
  [669] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      sym_divert_mark,
    STATE(49), 1,
      sym_flow,
    STATE(58), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(84), 2,
      sym__choice_content,
      sym_divert,
  [701] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      sym_divert_mark,
    STATE(49), 1,
      sym_flow,
    STATE(58), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(82), 2,
      sym__choice_content,
      sym_divert,
  [733] = 8,
    ACTIONS(126), 1,
      aux_sym_expr_token1,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_not,
    ACTIONS(132), 1,
      anon_sym_BANG2,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(25), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(14), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [762] = 8,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_not,
    ACTIONS(132), 1,
      anon_sym_BANG2,
    ACTIONS(136), 1,
      aux_sym_expr_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(25), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(7), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [791] = 8,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_not,
    ACTIONS(132), 1,
      anon_sym_BANG2,
    ACTIONS(140), 1,
      aux_sym_expr_token1,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(25), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(13), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [820] = 6,
    ACTIONS(144), 1,
      aux_sym__newline_token1,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LBRACE2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(27), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    ACTIONS(147), 5,
      sym_text,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      sym_divert_mark,
  [845] = 8,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_not,
    ACTIONS(132), 1,
      anon_sym_BANG2,
    ACTIONS(154), 1,
      aux_sym_expr_token1,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(25), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(16), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [874] = 8,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_not,
    ACTIONS(132), 1,
      anon_sym_BANG2,
    ACTIONS(158), 1,
      aux_sym_expr_token1,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(25), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(11), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [903] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [927] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [951] = 8,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      anon_sym_PIPE,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_alternatives_repeat1,
    STATE(43), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(166), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [979] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1003] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1027] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_alternatives_repeat1,
    STATE(43), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1055] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      aux_sym_alternatives_repeat1,
    STATE(43), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1080] = 3,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(187), 7,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1097] = 4,
    ACTIONS(191), 1,
      aux_sym__newline_token1,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(193), 6,
      sym_text,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1116] = 3,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(197), 7,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1133] = 4,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      aux_sym__newline_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(197), 6,
      sym_text,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1152] = 3,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(203), 7,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1169] = 7,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(209), 1,
      sym_tag,
    ACTIONS(211), 1,
      sym_line_comment,
    STATE(52), 1,
      aux_sym__toplevel_repeat1,
    STATE(53), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1193] = 4,
    ACTIONS(215), 1,
      sym_divert_mark,
    STATE(51), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(213), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1211] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1233] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1255] = 3,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(221), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1270] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(102), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1282] = 4,
    ACTIONS(227), 1,
      sym_tag,
    STATE(48), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_line_comment,
  [1298] = 5,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1316] = 5,
    ACTIONS(236), 1,
      sym_tag,
    ACTIONS(238), 1,
      sym_line_comment,
    STATE(48), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1334] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(175), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1346] = 5,
    ACTIONS(236), 1,
      sym_tag,
    ACTIONS(242), 1,
      sym_line_comment,
    STATE(48), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1364] = 5,
    ACTIONS(242), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      sym_tag,
    STATE(50), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1382] = 3,
    ACTIONS(246), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1396] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(221), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1408] = 4,
    ACTIONS(250), 1,
      sym_knot_mark,
    ACTIONS(252), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1423] = 4,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(59), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1438] = 4,
    ACTIONS(17), 1,
      sym_divert_mark,
    STATE(77), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1453] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1464] = 3,
    ACTIONS(260), 1,
      anon_sym_,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(262), 3,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_TILDE,
  [1477] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1488] = 4,
    ACTIONS(236), 1,
      sym_tag,
    STATE(48), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1503] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 1,
      aux_sym__newline_token1,
    STATE(20), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1517] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1527] = 3,
    ACTIONS(272), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1539] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(274), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1549] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(276), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1559] = 4,
    ACTIONS(266), 1,
      aux_sym__newline_token1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1573] = 3,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1585] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(284), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1595] = 3,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(59), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1606] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1615] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1624] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1633] = 3,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(55), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1644] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1653] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1662] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1671] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1680] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1689] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1698] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1707] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1716] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1725] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1734] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1743] = 3,
    ACTIONS(266), 1,
      aux_sym__newline_token1,
    STATE(20), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1754] = 2,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1762] = 2,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1770] = 2,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1778] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(314), 1,
      aux_sym_include_token1,
    ACTIONS(316), 1,
      sym_comment,
  [1788] = 2,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1796] = 2,
    ACTIONS(320), 1,
      anon_sym_LBRACE2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1804] = 2,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1812] = 2,
    ACTIONS(324), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1820] = 2,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1828] = 2,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1836] = 2,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1844] = 2,
    ACTIONS(332), 1,
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
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 305,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 441,
  [SMALL_STATE(14)] = 469,
  [SMALL_STATE(15)] = 497,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 549,
  [SMALL_STATE(18)] = 573,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 627,
  [SMALL_STATE(21)] = 650,
  [SMALL_STATE(22)] = 669,
  [SMALL_STATE(23)] = 701,
  [SMALL_STATE(24)] = 733,
  [SMALL_STATE(25)] = 762,
  [SMALL_STATE(26)] = 791,
  [SMALL_STATE(27)] = 820,
  [SMALL_STATE(28)] = 845,
  [SMALL_STATE(29)] = 874,
  [SMALL_STATE(30)] = 903,
  [SMALL_STATE(31)] = 927,
  [SMALL_STATE(32)] = 951,
  [SMALL_STATE(33)] = 979,
  [SMALL_STATE(34)] = 1003,
  [SMALL_STATE(35)] = 1027,
  [SMALL_STATE(36)] = 1055,
  [SMALL_STATE(37)] = 1080,
  [SMALL_STATE(38)] = 1097,
  [SMALL_STATE(39)] = 1116,
  [SMALL_STATE(40)] = 1133,
  [SMALL_STATE(41)] = 1152,
  [SMALL_STATE(42)] = 1169,
  [SMALL_STATE(43)] = 1193,
  [SMALL_STATE(44)] = 1211,
  [SMALL_STATE(45)] = 1233,
  [SMALL_STATE(46)] = 1255,
  [SMALL_STATE(47)] = 1270,
  [SMALL_STATE(48)] = 1282,
  [SMALL_STATE(49)] = 1298,
  [SMALL_STATE(50)] = 1316,
  [SMALL_STATE(51)] = 1334,
  [SMALL_STATE(52)] = 1346,
  [SMALL_STATE(53)] = 1364,
  [SMALL_STATE(54)] = 1382,
  [SMALL_STATE(55)] = 1396,
  [SMALL_STATE(56)] = 1408,
  [SMALL_STATE(57)] = 1423,
  [SMALL_STATE(58)] = 1438,
  [SMALL_STATE(59)] = 1453,
  [SMALL_STATE(60)] = 1464,
  [SMALL_STATE(61)] = 1477,
  [SMALL_STATE(62)] = 1488,
  [SMALL_STATE(63)] = 1503,
  [SMALL_STATE(64)] = 1517,
  [SMALL_STATE(65)] = 1527,
  [SMALL_STATE(66)] = 1539,
  [SMALL_STATE(67)] = 1549,
  [SMALL_STATE(68)] = 1559,
  [SMALL_STATE(69)] = 1573,
  [SMALL_STATE(70)] = 1585,
  [SMALL_STATE(71)] = 1595,
  [SMALL_STATE(72)] = 1606,
  [SMALL_STATE(73)] = 1615,
  [SMALL_STATE(74)] = 1624,
  [SMALL_STATE(75)] = 1633,
  [SMALL_STATE(76)] = 1644,
  [SMALL_STATE(77)] = 1653,
  [SMALL_STATE(78)] = 1662,
  [SMALL_STATE(79)] = 1671,
  [SMALL_STATE(80)] = 1680,
  [SMALL_STATE(81)] = 1689,
  [SMALL_STATE(82)] = 1698,
  [SMALL_STATE(83)] = 1707,
  [SMALL_STATE(84)] = 1716,
  [SMALL_STATE(85)] = 1725,
  [SMALL_STATE(86)] = 1734,
  [SMALL_STATE(87)] = 1743,
  [SMALL_STATE(88)] = 1754,
  [SMALL_STATE(89)] = 1762,
  [SMALL_STATE(90)] = 1770,
  [SMALL_STATE(91)] = 1778,
  [SMALL_STATE(92)] = 1788,
  [SMALL_STATE(93)] = 1796,
  [SMALL_STATE(94)] = 1804,
  [SMALL_STATE(95)] = 1812,
  [SMALL_STATE(96)] = 1820,
  [SMALL_STATE(97)] = 1828,
  [SMALL_STATE(98)] = 1836,
  [SMALL_STATE(99)] = 1844,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(18),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(60),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(62),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(96),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(71),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(88),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(91),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(87),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(97),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 8),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 12),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(19),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(60),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(93),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 10),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(18),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(60),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(32),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 15),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(48),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 16),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 14),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 13),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 9),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 11),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [312] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
