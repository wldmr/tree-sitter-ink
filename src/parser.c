#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 18

enum ts_symbol_identifiers {
  aux_sym_ink_token1 = 1,
  sym_glue = 2,
  anon_sym_LBRACE = 3,
  anon_sym_ = 4,
  anon_sym_DOLLAR = 5,
  anon_sym_AMP = 6,
  anon_sym_BANG = 7,
  anon_sym_TILDE = 8,
  anon_sym_PIPE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_COLON = 11,
  sym_tag = 12,
  anon_sym_BSLASH = 13,
  anon_sym_LBRACE2 = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  aux_sym__knot_mark_token1 = 17,
  sym_divert_mark = 18,
  anon_sym_EQ = 19,
  anon_sym_INCLUDE = 20,
  aux_sym_include_token1 = 21,
  aux_sym_expr_token1 = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_not = 25,
  anon_sym_BANG2 = 26,
  anon_sym_STAR = 27,
  anon_sym_PLUS = 28,
  anon_sym_DASH = 29,
  anon_sym_SLASH = 30,
  anon_sym_EQ_EQ = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_GT = 34,
  anon_sym_LT = 35,
  anon_sym_or = 36,
  anon_sym_PIPE_PIPE = 37,
  anon_sym_and = 38,
  anon_sym_AMP_AMP = 39,
  sym_identifier = 40,
  anon_sym_DOT = 41,
  sym_comment = 42,
  sym_line_comment = 43,
  anon_sym_TODO = 44,
  aux_sym_todo_comment_token1 = 45,
  sym_text = 46,
  sym_ink = 47,
  sym__toplevel = 48,
  sym_paragraph = 49,
  sym_flow = 50,
  sym_alternatives = 51,
  sym_conditional_text = 52,
  sym_choice = 53,
  sym_condition = 54,
  sym__choice_content = 55,
  sym__compound_choice_content = 56,
  sym_knot = 57,
  sym__knot_mark = 58,
  sym_stitch = 59,
  sym_divert = 60,
  sym_include = 61,
  sym_paren = 62,
  sym_binary = 63,
  sym_unary = 64,
  sym__unary_operator = 65,
  sym__binary_operator = 66,
  sym_qualified_name = 67,
  sym_symbol = 68,
  sym_todo_comment = 69,
  aux_sym_ink_repeat1 = 70,
  aux_sym__toplevel_repeat1 = 71,
  aux_sym_flow_repeat1 = 72,
  aux_sym_alternatives_repeat1 = 73,
  aux_sym_choice_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_ink_token1] = "ink_token1",
  [sym_glue] = "glue",
  [anon_sym_LBRACE] = "{",
  [anon_sym_] = "",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_AMP] = "&",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_tag] = "tag",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_LBRACE2] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__knot_mark_token1] = "==",
  [sym_divert_mark] = "divert_mark",
  [anon_sym_EQ] = "=",
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
  [aux_sym_todo_comment_token1] = "todo_comment_token1",
  [sym_text] = "text",
  [sym_ink] = "ink",
  [sym__toplevel] = "_toplevel",
  [sym_paragraph] = "paragraph",
  [sym_flow] = "flow",
  [sym_alternatives] = "alternatives",
  [sym_conditional_text] = "conditional_text",
  [sym_choice] = "choice",
  [sym_condition] = "condition",
  [sym__choice_content] = "_choice_content",
  [sym__compound_choice_content] = "_compound_choice_content",
  [sym_knot] = "knot",
  [sym__knot_mark] = "_knot_mark",
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
  [aux_sym_ink_token1] = aux_sym_ink_token1,
  [sym_glue] = sym_glue,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_tag] = sym_tag,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__knot_mark_token1] = anon_sym_EQ_EQ,
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
  [aux_sym_todo_comment_token1] = aux_sym_todo_comment_token1,
  [sym_text] = sym_text,
  [sym_ink] = sym_ink,
  [sym__toplevel] = sym__toplevel,
  [sym_paragraph] = sym_paragraph,
  [sym_flow] = sym_flow,
  [sym_alternatives] = sym_alternatives,
  [sym_conditional_text] = sym_conditional_text,
  [sym_choice] = sym_choice,
  [sym_condition] = sym_condition,
  [sym__choice_content] = sym__choice_content,
  [sym__compound_choice_content] = sym__compound_choice_content,
  [sym_knot] = sym_knot,
  [sym__knot_mark] = sym__knot_mark,
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
  [aux_sym_ink_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_DOLLAR] = {
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
  [anon_sym_COLON] = {
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
  [aux_sym__knot_mark_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_divert_mark] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
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
  [sym_alternatives] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_text] = {
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
  [sym__knot_mark] = {
    .visible = false,
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
  field_condition = 1,
  field_else = 2,
  field_final = 3,
  field_iftrue = 4,
  field_main = 5,
  field_mark = 6,
  field_name = 7,
  field_op = 8,
  field_target = 9,
  field_temporary = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_else] = "else",
  [field_final] = "final",
  [field_iftrue] = "iftrue",
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
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 4},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 3},
  [17] = {.index = 31, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 1},
  [1] =
    {field_name, 1},
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
    {field_op, 0},
  [11] =
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_mark, 0},
    {field_temporary, 2, .inherited = true},
  [15] =
    {field_op, 1},
  [16] =
    {field_final, 2},
  [17] =
    {field_temporary, 1},
  [18] =
    {field_final, 3, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_mark, 0},
    {field_temporary, 3, .inherited = true},
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
  [31] =
    {field_condition, 1},
    {field_else, 5},
    {field_iftrue, 3},
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
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 6,
  [56] = 56,
  [57] = 57,
  [58] = 52,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 57,
  [64] = 64,
  [65] = 6,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 52,
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
  [83] = 82,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 82,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 95,
  [106] = 95,
  [107] = 107,
  [108] = 108,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(84);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == 'U') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(82);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(28);
      END_STATE();
    case 30:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '~') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 31:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 32:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_ink_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '~') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__knot_mark_token1);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG2);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
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
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 1},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 31, .external_lex_state = 1},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 31, .external_lex_state = 1},
  [23] = {.lex_state = 31, .external_lex_state = 1},
  [24] = {.lex_state = 31, .external_lex_state = 1},
  [25] = {.lex_state = 31, .external_lex_state = 1},
  [26] = {.lex_state = 31, .external_lex_state = 1},
  [27] = {.lex_state = 31, .external_lex_state = 1},
  [28] = {.lex_state = 31, .external_lex_state = 1},
  [29] = {.lex_state = 31, .external_lex_state = 1},
  [30] = {.lex_state = 1, .external_lex_state = 1},
  [31] = {.lex_state = 31, .external_lex_state = 1},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 31, .external_lex_state = 1},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 31, .external_lex_state = 1},
  [39] = {.lex_state = 31, .external_lex_state = 1},
  [40] = {.lex_state = 31, .external_lex_state = 1},
  [41] = {.lex_state = 1, .external_lex_state = 1},
  [42] = {.lex_state = 31, .external_lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 1},
  [44] = {.lex_state = 31, .external_lex_state = 1},
  [45] = {.lex_state = 1, .external_lex_state = 1},
  [46] = {.lex_state = 1, .external_lex_state = 1},
  [47] = {.lex_state = 1, .external_lex_state = 1},
  [48] = {.lex_state = 31, .external_lex_state = 1},
  [49] = {.lex_state = 31, .external_lex_state = 1},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31, .external_lex_state = 1},
  [52] = {.lex_state = 31, .external_lex_state = 1},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31, .external_lex_state = 1},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31, .external_lex_state = 1},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 31, .external_lex_state = 1},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 31},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 31},
  [70] = {.lex_state = 31},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 31},
  [73] = {.lex_state = 31},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 97},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 35},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 35},
  [107] = {.lex_state = 35},
  [108] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_ink_token1] = ACTIONS(1),
    [sym_glue] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__knot_mark_token1] = ACTIONS(1),
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
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(101),
    [sym__toplevel] = STATE(86),
    [sym_paragraph] = STATE(86),
    [sym_flow] = STATE(50),
    [sym_alternatives] = STATE(16),
    [sym_conditional_text] = STATE(16),
    [sym_choice] = STATE(86),
    [sym_knot] = STATE(86),
    [sym__knot_mark] = STATE(99),
    [sym_stitch] = STATE(86),
    [sym_divert] = STATE(86),
    [sym_include] = STATE(86),
    [sym_symbol] = STATE(9),
    [sym_todo_comment] = STATE(86),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(64),
    [aux_sym_flow_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_ink_token1] = ACTIONS(7),
    [sym_glue] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_tag] = ACTIONS(13),
    [aux_sym__knot_mark_token1] = ACTIONS(15),
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
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_ink_token1,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(40), 1,
      sym_tag,
    ACTIONS(43), 1,
      aux_sym__knot_mark_token1,
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
    STATE(2), 1,
      aux_sym_ink_repeat1,
    STATE(9), 1,
      sym_symbol,
    STATE(50), 1,
      sym_flow,
    STATE(64), 1,
      aux_sym__toplevel_repeat1,
    STATE(99), 1,
      sym__knot_mark,
    ACTIONS(34), 2,
      sym_text,
      sym_glue,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
    STATE(108), 8,
      sym__toplevel,
      sym_paragraph,
      sym_choice,
      sym_knot,
      sym_stitch,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [72] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      aux_sym__knot_mark_token1,
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
      aux_sym_ink_token1,
    ACTIONS(68), 1,
      sym_line_comment,
    STATE(2), 1,
      aux_sym_ink_repeat1,
    STATE(9), 1,
      sym_symbol,
    STATE(50), 1,
      sym_flow,
    STATE(64), 1,
      aux_sym__toplevel_repeat1,
    STATE(99), 1,
      sym__knot_mark,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(23), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
    STATE(76), 8,
      sym__toplevel,
      sym_paragraph,
      sym_choice,
      sym_knot,
      sym_stitch,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [144] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(70), 3,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 10,
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
  [176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 13,
      anon_sym_RBRACE,
      anon_sym_COLON,
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
  [206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(82), 15,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      anon_sym_RBRACE,
      anon_sym_COLON,
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
  [232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 13,
      anon_sym_RBRACE,
      anon_sym_COLON,
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
  [259] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(70), 3,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 10,
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
  [288] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_ink_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_BSLASH,
    ACTIONS(92), 1,
      anon_sym_LBRACE2,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym_divert_mark,
    STATE(54), 1,
      sym_flow,
    STATE(66), 1,
      sym__compound_choice_content,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(10), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(93), 2,
      sym__choice_content,
      sym_divert,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [333] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_ink_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_LBRACE2,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym_divert_mark,
    ACTIONS(98), 1,
      anon_sym_BSLASH,
    STATE(54), 1,
      sym_flow,
    STATE(66), 1,
      sym__compound_choice_content,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(30), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(78), 2,
      sym__choice_content,
      sym_divert,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(100), 13,
      anon_sym_RBRACE,
      anon_sym_COLON,
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
  [402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 10,
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
  [432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(106), 1,
      anon_sym_COLON,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 10,
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
  [462] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 10,
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
  [492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 10,
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
  [522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 2,
      sym_text,
      sym_glue,
    STATE(22), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
    ACTIONS(112), 9,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 10,
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
  [576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_COLON,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 10,
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
  [603] = 8,
    ACTIONS(118), 1,
      aux_sym_expr_token1,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(126), 1,
      sym_comment,
    STATE(35), 1,
      sym__unary_operator,
    ACTIONS(122), 2,
      anon_sym_not,
      anon_sym_BANG2,
    STATE(18), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
    ACTIONS(116), 5,
      anon_sym_,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_TILDE,
  [636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 10,
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
  [663] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym__binary_operator,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 10,
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
  [690] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 2,
      sym_text,
      sym_glue,
    STATE(22), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_EQ,
    ACTIONS(29), 13,
      sym_text,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      aux_sym__knot_mark_token1,
      sym_divert_mark,
      anon_sym_INCLUDE,
      anon_sym_STAR,
      anon_sym_PLUS,
      sym_line_comment,
      anon_sym_TODO,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 12,
      sym_text,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 12,
      sym_text,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [775] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym_divert_mark,
    STATE(54), 1,
      sym_flow,
    STATE(66), 1,
      sym__compound_choice_content,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(89), 2,
      sym__choice_content,
      sym_divert,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [807] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym_divert_mark,
    STATE(54), 1,
      sym_flow,
    STATE(66), 1,
      sym__compound_choice_content,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(79), 2,
      sym__choice_content,
      sym_divert,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [839] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [863] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [887] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_ink_token1,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LBRACE2,
    STATE(30), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    ACTIONS(149), 5,
      sym_text,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      sym_divert_mark,
  [911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [935] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_not,
    ACTIONS(158), 1,
      aux_sym_expr_token1,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_BANG2,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(35), 1,
      sym__unary_operator,
    STATE(21), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [963] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_BANG2,
    ACTIONS(166), 1,
      aux_sym_expr_token1,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(35), 1,
      sym__unary_operator,
    STATE(17), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [991] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_BANG2,
    ACTIONS(170), 1,
      aux_sym_expr_token1,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(35), 1,
      sym__unary_operator,
    STATE(20), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [1019] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_BANG2,
    ACTIONS(174), 1,
      aux_sym_expr_token1,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(35), 1,
      sym__unary_operator,
    STATE(7), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [1047] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_alternatives_repeat1,
    STATE(51), 1,
      sym_flow,
    ACTIONS(178), 2,
      sym_text,
      sym_glue,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [1075] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_BANG2,
    ACTIONS(189), 1,
      aux_sym_expr_token1,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(35), 1,
      sym__unary_operator,
    STATE(8), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [1103] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_alternatives_repeat1,
    STATE(51), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [1131] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [1155] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      aux_sym_alternatives_repeat1,
    STATE(51), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [1180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 7,
      sym_text,
      aux_sym_ink_token1,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1196] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [1218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_ink_token1,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 6,
      sym_text,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [1258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 7,
      sym_text,
      aux_sym_ink_token1,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_ink_token1,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 6,
      sym_text,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 7,
      sym_text,
      aux_sym_ink_token1,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1308] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [1327] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(16), 3,
      sym_alternatives,
      sym_conditional_text,
      aux_sym_flow_repeat1,
  [1346] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_tag,
    ACTIONS(229), 1,
      sym_divert_mark,
    ACTIONS(231), 1,
      sym_line_comment,
    STATE(53), 1,
      sym_divert,
    STATE(61), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_divert_mark,
    STATE(62), 1,
      sym_divert,
    ACTIONS(233), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOT,
    ACTIONS(237), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_tag,
    ACTIONS(245), 1,
      sym_line_comment,
    STATE(56), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_divert,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1445] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_tag,
    ACTIONS(255), 1,
      sym_line_comment,
    STATE(60), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(237), 4,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_tag,
      sym_line_comment,
  [1486] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(263), 1,
      sym_line_comment,
    STATE(69), 1,
      sym__knot_mark,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_tag,
    STATE(60), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(265), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_line_comment,
  [1518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_line_comment,
    ACTIONS(253), 1,
      sym_tag,
    STATE(60), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 4,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_tag,
      sym_line_comment,
  [1556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_tag,
    STATE(60), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_tag,
      sym_line_comment,
  [1580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_divert_mark,
    STATE(92), 1,
      sym_divert,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(63), 1,
      sym_qualified_name,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [1617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [1637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_line_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [1668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [1677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      aux_sym_ink_token1,
  [1695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(63), 1,
      sym_qualified_name,
  [1745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(57), 1,
      sym_qualified_name,
  [1755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      aux_sym_ink_token1,
  [1781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(63), 1,
      sym_qualified_name,
  [1791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LBRACE2,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_identifier,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
  [1860] = 2,
    ACTIONS(126), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_todo_comment_token1,
  [1867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_identifier,
  [1881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_PIPE,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
  [1895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [1902] = 2,
    ACTIONS(126), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_include_token1,
  [1909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
  [1916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_identifier,
  [1923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_identifier,
  [1930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_identifier,
  [1937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym_ink_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 176,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 232,
  [SMALL_STATE(8)] = 259,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 333,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 402,
  [SMALL_STATE(13)] = 432,
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 492,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 549,
  [SMALL_STATE(18)] = 576,
  [SMALL_STATE(19)] = 603,
  [SMALL_STATE(20)] = 636,
  [SMALL_STATE(21)] = 663,
  [SMALL_STATE(22)] = 690,
  [SMALL_STATE(23)] = 717,
  [SMALL_STATE(24)] = 739,
  [SMALL_STATE(25)] = 757,
  [SMALL_STATE(26)] = 775,
  [SMALL_STATE(27)] = 807,
  [SMALL_STATE(28)] = 839,
  [SMALL_STATE(29)] = 863,
  [SMALL_STATE(30)] = 887,
  [SMALL_STATE(31)] = 911,
  [SMALL_STATE(32)] = 935,
  [SMALL_STATE(33)] = 963,
  [SMALL_STATE(34)] = 991,
  [SMALL_STATE(35)] = 1019,
  [SMALL_STATE(36)] = 1047,
  [SMALL_STATE(37)] = 1075,
  [SMALL_STATE(38)] = 1103,
  [SMALL_STATE(39)] = 1131,
  [SMALL_STATE(40)] = 1155,
  [SMALL_STATE(41)] = 1180,
  [SMALL_STATE(42)] = 1196,
  [SMALL_STATE(43)] = 1218,
  [SMALL_STATE(44)] = 1236,
  [SMALL_STATE(45)] = 1258,
  [SMALL_STATE(46)] = 1274,
  [SMALL_STATE(47)] = 1292,
  [SMALL_STATE(48)] = 1308,
  [SMALL_STATE(49)] = 1327,
  [SMALL_STATE(50)] = 1346,
  [SMALL_STATE(51)] = 1369,
  [SMALL_STATE(52)] = 1386,
  [SMALL_STATE(53)] = 1400,
  [SMALL_STATE(54)] = 1417,
  [SMALL_STATE(55)] = 1434,
  [SMALL_STATE(56)] = 1445,
  [SMALL_STATE(57)] = 1462,
  [SMALL_STATE(58)] = 1473,
  [SMALL_STATE(59)] = 1486,
  [SMALL_STATE(60)] = 1503,
  [SMALL_STATE(61)] = 1518,
  [SMALL_STATE(62)] = 1535,
  [SMALL_STATE(63)] = 1546,
  [SMALL_STATE(64)] = 1556,
  [SMALL_STATE(65)] = 1570,
  [SMALL_STATE(66)] = 1580,
  [SMALL_STATE(67)] = 1594,
  [SMALL_STATE(68)] = 1608,
  [SMALL_STATE(69)] = 1617,
  [SMALL_STATE(70)] = 1628,
  [SMALL_STATE(71)] = 1637,
  [SMALL_STATE(72)] = 1648,
  [SMALL_STATE(73)] = 1659,
  [SMALL_STATE(74)] = 1668,
  [SMALL_STATE(75)] = 1677,
  [SMALL_STATE(76)] = 1685,
  [SMALL_STATE(77)] = 1695,
  [SMALL_STATE(78)] = 1703,
  [SMALL_STATE(79)] = 1711,
  [SMALL_STATE(80)] = 1719,
  [SMALL_STATE(81)] = 1727,
  [SMALL_STATE(82)] = 1735,
  [SMALL_STATE(83)] = 1745,
  [SMALL_STATE(84)] = 1755,
  [SMALL_STATE(85)] = 1763,
  [SMALL_STATE(86)] = 1771,
  [SMALL_STATE(87)] = 1781,
  [SMALL_STATE(88)] = 1791,
  [SMALL_STATE(89)] = 1799,
  [SMALL_STATE(90)] = 1807,
  [SMALL_STATE(91)] = 1815,
  [SMALL_STATE(92)] = 1823,
  [SMALL_STATE(93)] = 1831,
  [SMALL_STATE(94)] = 1839,
  [SMALL_STATE(95)] = 1846,
  [SMALL_STATE(96)] = 1853,
  [SMALL_STATE(97)] = 1860,
  [SMALL_STATE(98)] = 1867,
  [SMALL_STATE(99)] = 1874,
  [SMALL_STATE(100)] = 1881,
  [SMALL_STATE(101)] = 1888,
  [SMALL_STATE(102)] = 1895,
  [SMALL_STATE(103)] = 1902,
  [SMALL_STATE(104)] = 1909,
  [SMALL_STATE(105)] = 1916,
  [SMALL_STATE(106)] = 1923,
  [SMALL_STATE(107)] = 1930,
  [SMALL_STATE(108)] = 1937,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(16),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(19),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(64),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(99),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(87),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(107),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(103),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(45),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(108),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(102),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 9),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 7),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 7),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(22),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(19),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_text, 7, .production_id = 17),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 11),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(94),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(16),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(19),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(36),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 15),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(60),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 16),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 13),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 14),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 10),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 8),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 12),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [336] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
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
