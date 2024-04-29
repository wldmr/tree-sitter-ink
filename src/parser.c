#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  aux_sym_ink_token1 = 1,
  sym_glue = 2,
  anon_sym_LBRACE = 3,
  anon_sym_ = 4,
  anon_sym_AMP = 5,
  anon_sym_BANG = 6,
  anon_sym_TILDE = 7,
  anon_sym_PIPE = 8,
  anon_sym_RBRACE = 9,
  sym_tag = 10,
  anon_sym_BSLASH = 11,
  anon_sym_LBRACE2 = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  aux_sym__knot_mark_token1 = 15,
  sym_divert_mark = 16,
  anon_sym_EQ = 17,
  anon_sym_INCLUDE = 18,
  aux_sym_include_token1 = 19,
  aux_sym_expr_token1 = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_not = 23,
  anon_sym_BANG2 = 24,
  anon_sym_STAR = 25,
  anon_sym_PLUS = 26,
  anon_sym_DASH = 27,
  anon_sym_SLASH = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_LT = 33,
  anon_sym_or = 34,
  anon_sym_PIPE_PIPE = 35,
  anon_sym_and = 36,
  anon_sym_AMP_AMP = 37,
  sym_identifier = 38,
  anon_sym_DOT = 39,
  sym_comment = 40,
  sym_line_comment = 41,
  anon_sym_TODO = 42,
  anon_sym_COLON = 43,
  aux_sym_todo_comment_token1 = 44,
  sym_text = 45,
  sym_ink = 46,
  sym__toplevel = 47,
  sym_paragraph = 48,
  sym_flow = 49,
  sym_alternatives = 50,
  sym_choice = 51,
  sym_condition = 52,
  sym__choice_content = 53,
  sym__compound_choice_content = 54,
  sym_knot = 55,
  sym__knot_mark = 56,
  sym_stitch = 57,
  sym_divert = 58,
  sym_include = 59,
  sym_paren = 60,
  sym_binary = 61,
  sym_unary = 62,
  sym__unary_operator = 63,
  sym__binary_operator = 64,
  sym_qualified_name = 65,
  sym_symbol = 66,
  sym_todo_comment = 67,
  aux_sym_ink_repeat1 = 68,
  aux_sym__toplevel_repeat1 = 69,
  aux_sym_flow_repeat1 = 70,
  aux_sym_alternatives_repeat1 = 71,
  aux_sym_choice_repeat1 = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_ink_token1] = "ink_token1",
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
  [anon_sym_COLON] = ":",
  [aux_sym_todo_comment_token1] = "todo_comment_token1",
  [sym_text] = "text",
  [sym_ink] = "ink",
  [sym__toplevel] = "_toplevel",
  [sym_paragraph] = "paragraph",
  [sym_flow] = "flow",
  [sym_alternatives] = "alternatives",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_todo_comment_token1] = aux_sym_todo_comment_token1,
  [sym_text] = sym_text,
  [sym_ink] = sym_ink,
  [sym__toplevel] = sym__toplevel,
  [sym_paragraph] = sym_paragraph,
  [sym_flow] = sym_flow,
  [sym_alternatives] = sym_alternatives,
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
  [47] = 46,
  [48] = 48,
  [49] = 15,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 51,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 15,
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
  [76] = 71,
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
  [98] = 96,
  [99] = 96,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(41);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '~') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == '|') ADVANCE(80);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 32:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(41);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '~') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 33:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(85);
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
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '&') ADVANCE(41);
      if (lookahead == '~') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__knot_mark_token1);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BANG2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(93);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 33, .external_lex_state = 1},
  [2] = {.lex_state = 33, .external_lex_state = 1},
  [3] = {.lex_state = 33, .external_lex_state = 1},
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
  [18] = {.lex_state = 33, .external_lex_state = 1},
  [19] = {.lex_state = 33, .external_lex_state = 1},
  [20] = {.lex_state = 33, .external_lex_state = 1},
  [21] = {.lex_state = 33, .external_lex_state = 1},
  [22] = {.lex_state = 33, .external_lex_state = 1},
  [23] = {.lex_state = 33, .external_lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 33, .external_lex_state = 1},
  [31] = {.lex_state = 33, .external_lex_state = 1},
  [32] = {.lex_state = 33, .external_lex_state = 1},
  [33] = {.lex_state = 33, .external_lex_state = 1},
  [34] = {.lex_state = 33, .external_lex_state = 1},
  [35] = {.lex_state = 33, .external_lex_state = 1},
  [36] = {.lex_state = 1, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 33, .external_lex_state = 1},
  [39] = {.lex_state = 1, .external_lex_state = 1},
  [40] = {.lex_state = 1, .external_lex_state = 1},
  [41] = {.lex_state = 1, .external_lex_state = 1},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33, .external_lex_state = 1},
  [44] = {.lex_state = 33, .external_lex_state = 1},
  [45] = {.lex_state = 33, .external_lex_state = 1},
  [46] = {.lex_state = 33, .external_lex_state = 1},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 33, .external_lex_state = 1},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 33, .external_lex_state = 1},
  [52] = {.lex_state = 33},
  [53] = {.lex_state = 33, .external_lex_state = 1},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 33},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 35},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 35},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 96},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 35},
  [99] = {.lex_state = 35},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_ink_token1] = ACTIONS(1),
    [sym_glue] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(97),
    [sym__toplevel] = STATE(75),
    [sym_paragraph] = STATE(75),
    [sym_flow] = STATE(42),
    [sym_alternatives] = STATE(18),
    [sym_choice] = STATE(75),
    [sym_knot] = STATE(75),
    [sym__knot_mark] = STATE(93),
    [sym_stitch] = STATE(75),
    [sym_divert] = STATE(75),
    [sym_include] = STATE(75),
    [sym_symbol] = STATE(6),
    [sym_todo_comment] = STATE(75),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(59),
    [aux_sym_flow_repeat1] = STATE(18),
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
    STATE(6), 1,
      sym_symbol,
    STATE(42), 1,
      sym_flow,
    STATE(59), 1,
      aux_sym__toplevel_repeat1,
    STATE(93), 1,
      sym__knot_mark,
    ACTIONS(34), 2,
      sym_text,
      sym_glue,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(94), 8,
      sym__toplevel,
      sym_paragraph,
      sym_choice,
      sym_knot,
      sym_stitch,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [71] = 20,
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
    STATE(6), 1,
      sym_symbol,
    STATE(42), 1,
      sym_flow,
    STATE(59), 1,
      aux_sym__toplevel_repeat1,
    STATE(93), 1,
      sym__knot_mark,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(23), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(18), 2,
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
  [142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym__binary_operator,
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
  [171] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym__binary_operator,
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
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_ink_token1,
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
    STATE(48), 1,
      sym_flow,
    STATE(61), 1,
      sym__compound_choice_content,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(12), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(79), 2,
      sym__choice_content,
      sym_divert,
  [246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym__binary_operator,
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
  [272] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__binary_operator,
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
  [302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
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
  [332] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
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
  [362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym__binary_operator,
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
  [390] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_ink_token1,
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
    STATE(48), 1,
      sym_flow,
    STATE(61), 1,
      sym__compound_choice_content,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(28), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(84), 2,
      sym__choice_content,
      sym_divert,
  [434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym__binary_operator,
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
  [461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
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
  [488] = 3,
    ACTIONS(3), 1,
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
  [511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__binary_operator,
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
  [538] = 3,
    ACTIONS(3), 1,
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
  [561] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [587] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
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
  [635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 12,
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
  [653] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      sym_divert_mark,
    STATE(48), 1,
      sym_flow,
    STATE(61), 1,
      sym__compound_choice_content,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(81), 2,
      sym__choice_content,
      sym_divert,
  [684] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      sym_divert_mark,
    STATE(48), 1,
      sym_flow,
    STATE(61), 1,
      sym__compound_choice_content,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(82), 2,
      sym__choice_content,
      sym_divert,
  [715] = 8,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(26), 1,
      sym__unary_operator,
    STATE(14), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [743] = 8,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(26), 1,
      sym__unary_operator,
    STATE(11), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [771] = 8,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(26), 1,
      sym__unary_operator,
    STATE(7), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [799] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_not,
    ACTIONS(132), 1,
      anon_sym_BANG2,
    ACTIONS(144), 1,
      aux_sym_expr_token1,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(26), 1,
      sym__unary_operator,
    STATE(13), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [827] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      aux_sym_ink_token1,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LBRACE2,
    STATE(28), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    ACTIONS(151), 5,
      sym_text,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      sym_divert_mark,
  [851] = 8,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(26), 1,
      sym__unary_operator,
    STATE(16), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [879] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [902] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [925] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_alternatives_repeat1,
    STATE(43), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [952] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_alternatives_repeat1,
    STATE(43), 1,
      sym_flow,
    ACTIONS(170), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [979] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [1002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(183), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [1025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 7,
      sym_text,
      aux_sym_ink_token1,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_ink_token1,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 6,
      sym_text,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1059] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    STATE(32), 1,
      aux_sym_alternatives_repeat1,
    STATE(43), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      aux_sym_ink_token1,
    ACTIONS(185), 6,
      sym_text,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 7,
      sym_text,
      aux_sym_ink_token1,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 7,
      sym_text,
      aux_sym_ink_token1,
      sym_glue,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1133] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(209), 1,
      sym_tag,
    ACTIONS(211), 1,
      sym_line_comment,
    STATE(55), 1,
      aux_sym__toplevel_repeat1,
    STATE(56), 1,
      sym_divert,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_divert_mark,
    STATE(53), 1,
      sym_divert,
    ACTIONS(213), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1173] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1194] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_flow,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(221), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_DOT,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_tag,
      sym_line_comment,
  [1242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_divert,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_tag,
    ACTIONS(235), 1,
      sym_line_comment,
    STATE(52), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_tag,
    STATE(52), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_line_comment,
  [1313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(246), 1,
      sym_line_comment,
    STATE(68), 1,
      sym__knot_mark,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_tag,
    ACTIONS(250), 1,
      sym_line_comment,
    STATE(52), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      sym_tag,
    STATE(50), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_tag,
      sym_line_comment,
  [1385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(57), 1,
      sym_qualified_name,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_tag,
    STATE(52), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1413] = 2,
    ACTIONS(262), 1,
      sym_comment,
    ACTIONS(260), 4,
      anon_sym_,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_TILDE,
  [1423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_divert_mark,
    STATE(86), 1,
      sym_divert,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_tag,
      sym_line_comment,
  [1447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_line_comment,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [1467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [1476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
      sym_divert_mark,
  [1494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_line_comment,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      aux_sym_ink_token1,
  [1515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_identifier,
    STATE(51), 1,
      sym_qualified_name,
  [1533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      aux_sym_ink_token1,
  [1567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(57), 1,
      sym_qualified_name,
  [1577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      aux_sym_ink_token1,
  [1657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COLON,
  [1664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LBRACE2,
  [1671] = 2,
    ACTIONS(262), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_todo_comment_token1,
  [1678] = 2,
    ACTIONS(262), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym_include_token1,
  [1685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_identifier,
  [1692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
  [1699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_identifier,
  [1706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym_ink_token1,
  [1713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
  [1720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_identifier,
  [1727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
  [1734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_identifier,
  [1741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 202,
  [SMALL_STATE(7)] = 246,
  [SMALL_STATE(8)] = 272,
  [SMALL_STATE(9)] = 302,
  [SMALL_STATE(10)] = 332,
  [SMALL_STATE(11)] = 362,
  [SMALL_STATE(12)] = 390,
  [SMALL_STATE(13)] = 434,
  [SMALL_STATE(14)] = 461,
  [SMALL_STATE(15)] = 488,
  [SMALL_STATE(16)] = 511,
  [SMALL_STATE(17)] = 538,
  [SMALL_STATE(18)] = 561,
  [SMALL_STATE(19)] = 587,
  [SMALL_STATE(20)] = 613,
  [SMALL_STATE(21)] = 635,
  [SMALL_STATE(22)] = 653,
  [SMALL_STATE(23)] = 684,
  [SMALL_STATE(24)] = 715,
  [SMALL_STATE(25)] = 743,
  [SMALL_STATE(26)] = 771,
  [SMALL_STATE(27)] = 799,
  [SMALL_STATE(28)] = 827,
  [SMALL_STATE(29)] = 851,
  [SMALL_STATE(30)] = 879,
  [SMALL_STATE(31)] = 902,
  [SMALL_STATE(32)] = 925,
  [SMALL_STATE(33)] = 952,
  [SMALL_STATE(34)] = 979,
  [SMALL_STATE(35)] = 1002,
  [SMALL_STATE(36)] = 1025,
  [SMALL_STATE(37)] = 1041,
  [SMALL_STATE(38)] = 1059,
  [SMALL_STATE(39)] = 1083,
  [SMALL_STATE(40)] = 1101,
  [SMALL_STATE(41)] = 1117,
  [SMALL_STATE(42)] = 1133,
  [SMALL_STATE(43)] = 1156,
  [SMALL_STATE(44)] = 1173,
  [SMALL_STATE(45)] = 1194,
  [SMALL_STATE(46)] = 1215,
  [SMALL_STATE(47)] = 1229,
  [SMALL_STATE(48)] = 1242,
  [SMALL_STATE(49)] = 1259,
  [SMALL_STATE(50)] = 1270,
  [SMALL_STATE(51)] = 1287,
  [SMALL_STATE(52)] = 1298,
  [SMALL_STATE(53)] = 1313,
  [SMALL_STATE(54)] = 1324,
  [SMALL_STATE(55)] = 1341,
  [SMALL_STATE(56)] = 1358,
  [SMALL_STATE(57)] = 1375,
  [SMALL_STATE(58)] = 1385,
  [SMALL_STATE(59)] = 1399,
  [SMALL_STATE(60)] = 1413,
  [SMALL_STATE(61)] = 1423,
  [SMALL_STATE(62)] = 1437,
  [SMALL_STATE(63)] = 1447,
  [SMALL_STATE(64)] = 1458,
  [SMALL_STATE(65)] = 1467,
  [SMALL_STATE(66)] = 1476,
  [SMALL_STATE(67)] = 1485,
  [SMALL_STATE(68)] = 1494,
  [SMALL_STATE(69)] = 1505,
  [SMALL_STATE(70)] = 1515,
  [SMALL_STATE(71)] = 1523,
  [SMALL_STATE(72)] = 1533,
  [SMALL_STATE(73)] = 1541,
  [SMALL_STATE(74)] = 1549,
  [SMALL_STATE(75)] = 1557,
  [SMALL_STATE(76)] = 1567,
  [SMALL_STATE(77)] = 1577,
  [SMALL_STATE(78)] = 1585,
  [SMALL_STATE(79)] = 1593,
  [SMALL_STATE(80)] = 1601,
  [SMALL_STATE(81)] = 1609,
  [SMALL_STATE(82)] = 1617,
  [SMALL_STATE(83)] = 1625,
  [SMALL_STATE(84)] = 1633,
  [SMALL_STATE(85)] = 1641,
  [SMALL_STATE(86)] = 1649,
  [SMALL_STATE(87)] = 1657,
  [SMALL_STATE(88)] = 1664,
  [SMALL_STATE(89)] = 1671,
  [SMALL_STATE(90)] = 1678,
  [SMALL_STATE(91)] = 1685,
  [SMALL_STATE(92)] = 1692,
  [SMALL_STATE(93)] = 1699,
  [SMALL_STATE(94)] = 1706,
  [SMALL_STATE(95)] = 1713,
  [SMALL_STATE(96)] = 1720,
  [SMALL_STATE(97)] = 1727,
  [SMALL_STATE(98)] = 1734,
  [SMALL_STATE(99)] = 1741,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(18),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(60),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(59),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(93),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(76),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(91),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(90),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(40),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(94),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(87),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 8),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 12),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(88),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(29),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 15),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(18),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(60),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(33),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 10),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(52),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 14),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 13),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 16),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 9),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 11),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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
