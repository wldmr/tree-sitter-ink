#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_LBRACE2 = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  sym_knot_mark = 15,
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
  sym__newline = 47,
  sym__toplevel = 48,
  sym_paragraph = 49,
  sym_flow = 50,
  sym_alternatives = 51,
  sym_choice = 52,
  sym_condition = 53,
  sym__choice_content = 54,
  sym__compound_choice_content = 55,
  sym_knot = 56,
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
  [45] = 14,
  [46] = 46,
  [47] = 44,
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
  [58] = 53,
  [59] = 59,
  [60] = 14,
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
  [83] = 71,
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
  [94] = 88,
  [95] = 88,
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
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '~') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(49);
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
      if (lookahead == 'E') ADVANCE(51);
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
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == '|') ADVANCE(75);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(83);
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
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
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
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
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
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(29);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
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
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 1, .external_lex_state = 1},
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
  [28] = {.lex_state = 1, .external_lex_state = 1},
  [29] = {.lex_state = 31, .external_lex_state = 1},
  [30] = {.lex_state = 31, .external_lex_state = 1},
  [31] = {.lex_state = 31, .external_lex_state = 1},
  [32] = {.lex_state = 31, .external_lex_state = 1},
  [33] = {.lex_state = 31, .external_lex_state = 1},
  [34] = {.lex_state = 31, .external_lex_state = 1},
  [35] = {.lex_state = 31, .external_lex_state = 1},
  [36] = {.lex_state = 1, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 31, .external_lex_state = 1},
  [39] = {.lex_state = 31, .external_lex_state = 1},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 1, .external_lex_state = 1},
  [42] = {.lex_state = 1, .external_lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 1},
  [44] = {.lex_state = 31, .external_lex_state = 1},
  [45] = {.lex_state = 31, .external_lex_state = 1},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 31, .external_lex_state = 1},
  [53] = {.lex_state = 31, .external_lex_state = 1},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
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
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 31},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 31},
  [79] = {.lex_state = 31},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 31},
  [83] = {.lex_state = 32},
  [84] = {.lex_state = 32},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 31},
  [90] = {.lex_state = 91},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 32},
  [93] = {.lex_state = 31},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 32},
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
    [sym_ink] = STATE(91),
    [sym__newline] = STATE(3),
    [sym__toplevel] = STATE(62),
    [sym_paragraph] = STATE(62),
    [sym_flow] = STATE(40),
    [sym_alternatives] = STATE(19),
    [sym_choice] = STATE(62),
    [sym_knot] = STATE(62),
    [sym_stitch] = STATE(62),
    [sym_divert] = STATE(62),
    [sym_include] = STATE(62),
    [sym_symbol] = STATE(13),
    [sym_todo_comment] = STATE(62),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(59),
    [aux_sym_flow_repeat1] = STATE(19),
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
    STATE(13), 1,
      sym_symbol,
    STATE(40), 1,
      sym_flow,
    STATE(59), 1,
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
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(78), 8,
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
    STATE(13), 1,
      sym_symbol,
    STATE(40), 1,
      sym_flow,
    STATE(59), 1,
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
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(67), 8,
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
  [233] = 4,
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
  [260] = 6,
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
  [291] = 6,
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
  [322] = 5,
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
  [351] = 5,
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
  [379] = 5,
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
  [407] = 12,
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
    STATE(50), 1,
      sym_flow,
    STATE(57), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(17), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(69), 2,
      sym__choice_content,
      sym_divert,
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
  [473] = 5,
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
  [501] = 3,
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
  [525] = 12,
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
    STATE(50), 1,
      sym_flow,
    STATE(57), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(28), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(80), 2,
      sym__choice_content,
      sym_divert,
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
  [594] = 5,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(116), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
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
  [621] = 3,
    ACTIONS(118), 1,
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
  [644] = 2,
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
  [663] = 8,
    ACTIONS(122), 1,
      aux_sym_expr_token1,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(128), 1,
      anon_sym_BANG2,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(23), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(12), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [692] = 8,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(128), 1,
      anon_sym_BANG2,
    ACTIONS(132), 1,
      aux_sym_expr_token1,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(23), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(7), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [721] = 8,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(128), 1,
      anon_sym_BANG2,
    ACTIONS(136), 1,
      aux_sym_expr_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(23), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(11), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [750] = 8,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(128), 1,
      anon_sym_BANG2,
    ACTIONS(140), 1,
      aux_sym_expr_token1,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(23), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(10), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [779] = 8,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(128), 1,
      anon_sym_BANG2,
    ACTIONS(144), 1,
      aux_sym_expr_token1,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(23), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(15), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [808] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_PIPE,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_alternatives_repeat1,
    STATE(39), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [836] = 6,
    ACTIONS(152), 1,
      aux_sym__newline_token1,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_LBRACE2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(28), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    ACTIONS(155), 4,
      sym_text,
      sym_glue,
      anon_sym_LBRACK,
      sym_divert_mark,
  [860] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [884] = 6,
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
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [908] = 8,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      anon_sym_PIPE,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_alternatives_repeat1,
    STATE(39), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(166), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [936] = 6,
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
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [960] = 6,
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
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [984] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym_alternatives_repeat1,
    STATE(39), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1009] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1031] = 4,
    ACTIONS(185), 1,
      aux_sym__newline_token1,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(187), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1049] = 4,
    ACTIONS(191), 1,
      aux_sym__newline_token1,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(193), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1067] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1089] = 4,
    ACTIONS(201), 1,
      sym_divert_mark,
    STATE(52), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(199), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1107] = 7,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(205), 1,
      sym_tag,
    ACTIONS(207), 1,
      sym_line_comment,
    STATE(48), 1,
      aux_sym__toplevel_repeat1,
    STATE(49), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1131] = 3,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(193), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1147] = 3,
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
  [1163] = 3,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(213), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1179] = 3,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(217), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1194] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(98), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1206] = 5,
    ACTIONS(223), 1,
      sym_tag,
    ACTIONS(225), 1,
      sym_line_comment,
    STATE(51), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1224] = 3,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1238] = 5,
    ACTIONS(223), 1,
      sym_tag,
    ACTIONS(231), 1,
      sym_line_comment,
    STATE(51), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1256] = 5,
    ACTIONS(231), 1,
      sym_line_comment,
    ACTIONS(233), 1,
      sym_tag,
    STATE(46), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1274] = 5,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1292] = 4,
    ACTIONS(241), 1,
      sym_tag,
    STATE(51), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_line_comment,
  [1308] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(175), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1320] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(217), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1332] = 4,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(58), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1347] = 3,
    ACTIONS(248), 1,
      anon_sym_,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(250), 3,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_TILDE,
  [1360] = 4,
    ACTIONS(254), 1,
      sym_knot_mark,
    ACTIONS(256), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1375] = 4,
    ACTIONS(17), 1,
      sym_divert_mark,
    STATE(82), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1390] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1401] = 4,
    ACTIONS(223), 1,
      sym_tag,
    STATE(51), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1416] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1427] = 3,
    ACTIONS(264), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1439] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 1,
      aux_sym__newline_token1,
    STATE(20), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1453] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1463] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(270), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1473] = 3,
    ACTIONS(274), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1485] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(276), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1495] = 4,
    ACTIONS(266), 1,
      aux_sym__newline_token1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1509] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1519] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1528] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1537] = 3,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(53), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1548] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(221), 2,
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
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1575] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1584] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1593] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1602] = 3,
    ACTIONS(266), 1,
      aux_sym__newline_token1,
    STATE(20), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1613] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1622] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1631] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1640] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1649] = 3,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(58), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1660] = 2,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1668] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(304), 1,
      aux_sym_include_token1,
    ACTIONS(306), 1,
      sym_comment,
  [1678] = 2,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1686] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1694] = 2,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1702] = 2,
    ACTIONS(314), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1710] = 2,
    ACTIONS(316), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1718] = 2,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1726] = 2,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1734] = 2,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1742] = 2,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1750] = 2,
    ACTIONS(326), 1,
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
  [SMALL_STATE(8)] = 260,
  [SMALL_STATE(9)] = 291,
  [SMALL_STATE(10)] = 322,
  [SMALL_STATE(11)] = 351,
  [SMALL_STATE(12)] = 379,
  [SMALL_STATE(13)] = 407,
  [SMALL_STATE(14)] = 449,
  [SMALL_STATE(15)] = 473,
  [SMALL_STATE(16)] = 501,
  [SMALL_STATE(17)] = 525,
  [SMALL_STATE(18)] = 567,
  [SMALL_STATE(19)] = 594,
  [SMALL_STATE(20)] = 621,
  [SMALL_STATE(21)] = 644,
  [SMALL_STATE(22)] = 663,
  [SMALL_STATE(23)] = 692,
  [SMALL_STATE(24)] = 721,
  [SMALL_STATE(25)] = 750,
  [SMALL_STATE(26)] = 779,
  [SMALL_STATE(27)] = 808,
  [SMALL_STATE(28)] = 836,
  [SMALL_STATE(29)] = 860,
  [SMALL_STATE(30)] = 884,
  [SMALL_STATE(31)] = 908,
  [SMALL_STATE(32)] = 936,
  [SMALL_STATE(33)] = 960,
  [SMALL_STATE(34)] = 984,
  [SMALL_STATE(35)] = 1009,
  [SMALL_STATE(36)] = 1031,
  [SMALL_STATE(37)] = 1049,
  [SMALL_STATE(38)] = 1067,
  [SMALL_STATE(39)] = 1089,
  [SMALL_STATE(40)] = 1107,
  [SMALL_STATE(41)] = 1131,
  [SMALL_STATE(42)] = 1147,
  [SMALL_STATE(43)] = 1163,
  [SMALL_STATE(44)] = 1179,
  [SMALL_STATE(45)] = 1194,
  [SMALL_STATE(46)] = 1206,
  [SMALL_STATE(47)] = 1224,
  [SMALL_STATE(48)] = 1238,
  [SMALL_STATE(49)] = 1256,
  [SMALL_STATE(50)] = 1274,
  [SMALL_STATE(51)] = 1292,
  [SMALL_STATE(52)] = 1308,
  [SMALL_STATE(53)] = 1320,
  [SMALL_STATE(54)] = 1332,
  [SMALL_STATE(55)] = 1347,
  [SMALL_STATE(56)] = 1360,
  [SMALL_STATE(57)] = 1375,
  [SMALL_STATE(58)] = 1390,
  [SMALL_STATE(59)] = 1401,
  [SMALL_STATE(60)] = 1416,
  [SMALL_STATE(61)] = 1427,
  [SMALL_STATE(62)] = 1439,
  [SMALL_STATE(63)] = 1453,
  [SMALL_STATE(64)] = 1463,
  [SMALL_STATE(65)] = 1473,
  [SMALL_STATE(66)] = 1485,
  [SMALL_STATE(67)] = 1495,
  [SMALL_STATE(68)] = 1509,
  [SMALL_STATE(69)] = 1519,
  [SMALL_STATE(70)] = 1528,
  [SMALL_STATE(71)] = 1537,
  [SMALL_STATE(72)] = 1548,
  [SMALL_STATE(73)] = 1557,
  [SMALL_STATE(74)] = 1566,
  [SMALL_STATE(75)] = 1575,
  [SMALL_STATE(76)] = 1584,
  [SMALL_STATE(77)] = 1593,
  [SMALL_STATE(78)] = 1602,
  [SMALL_STATE(79)] = 1613,
  [SMALL_STATE(80)] = 1622,
  [SMALL_STATE(81)] = 1631,
  [SMALL_STATE(82)] = 1640,
  [SMALL_STATE(83)] = 1649,
  [SMALL_STATE(84)] = 1660,
  [SMALL_STATE(85)] = 1668,
  [SMALL_STATE(86)] = 1678,
  [SMALL_STATE(87)] = 1686,
  [SMALL_STATE(88)] = 1694,
  [SMALL_STATE(89)] = 1702,
  [SMALL_STATE(90)] = 1710,
  [SMALL_STATE(91)] = 1718,
  [SMALL_STATE(92)] = 1726,
  [SMALL_STATE(93)] = 1734,
  [SMALL_STATE(94)] = 1742,
  [SMALL_STATE(95)] = 1750,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(19),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(55),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(59),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(92),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(83),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(84),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(85),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(43),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(78),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(89),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 8),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 11),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(55),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(87),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(26),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 14),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(19),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(55),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(31),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 10),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(51),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 15),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 13),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 12),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 9),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
