#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
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
  anon_sym_STAR = 24,
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  anon_sym_SLASH = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_LT = 32,
  anon_sym_or = 33,
  anon_sym_PIPE_PIPE = 34,
  anon_sym_and = 35,
  anon_sym_AMP_AMP = 36,
  sym_identifier = 37,
  anon_sym_DOT = 38,
  sym_comment = 39,
  sym_line_comment = 40,
  anon_sym_TODO = 41,
  anon_sym_COLON = 42,
  aux_sym_todo_comment_token1 = 43,
  sym_text = 44,
  sym_ink = 45,
  sym__newline = 46,
  sym__toplevel = 47,
  sym_paragraph = 48,
  sym_flow = 49,
  sym_alternatives = 50,
  sym_choice = 51,
  sym_condition = 52,
  sym__choice_content = 53,
  sym__compound_choice_content = 54,
  sym_knot = 55,
  sym_stitch = 56,
  sym_divert = 57,
  sym_include = 58,
  sym_paren = 59,
  sym_binary = 60,
  sym_unary = 61,
  sym__unary_operator = 62,
  sym__binary_operator = 63,
  sym_qualified_name = 64,
  sym_symbol = 65,
  sym_todo_comment = 66,
  aux_sym_ink_repeat1 = 67,
  aux_sym__toplevel_repeat1 = 68,
  aux_sym_flow_repeat1 = 69,
  aux_sym_alternatives_repeat1 = 70,
  aux_sym_choice_repeat1 = 71,
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
  [36] = 21,
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
  [51] = 16,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 79,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '~') ADVANCE(42);
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
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == ')') ADVANCE(61);
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
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(69);
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
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == '|') ADVANCE(75);
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
      if (lookahead == '/') ADVANCE(83);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
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
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
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
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(77);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(45);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
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
      if (lookahead == '>') ADVANCE(50);
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
      if (lookahead == 't') ADVANCE(63);
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
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 1, .external_lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
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
  [30] = {.lex_state = 31, .external_lex_state = 1},
  [31] = {.lex_state = 31, .external_lex_state = 1},
  [32] = {.lex_state = 1, .external_lex_state = 1},
  [33] = {.lex_state = 31, .external_lex_state = 1},
  [34] = {.lex_state = 31, .external_lex_state = 1},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 31, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 1, .external_lex_state = 1},
  [39] = {.lex_state = 1, .external_lex_state = 1},
  [40] = {.lex_state = 1, .external_lex_state = 1},
  [41] = {.lex_state = 31, .external_lex_state = 1},
  [42] = {.lex_state = 1, .external_lex_state = 1},
  [43] = {.lex_state = 31, .external_lex_state = 1},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 32},
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
  [71] = {.lex_state = 31},
  [72] = {.lex_state = 32},
  [73] = {.lex_state = 31},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 31},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 31},
  [79] = {.lex_state = 32},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 31},
  [83] = {.lex_state = 91},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 31},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 32},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 32},
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
    [sym_ink] = STATE(84),
    [sym__newline] = STATE(2),
    [sym__toplevel] = STATE(60),
    [sym_paragraph] = STATE(60),
    [sym_flow] = STATE(35),
    [sym_alternatives] = STATE(21),
    [sym_choice] = STATE(60),
    [sym_knot] = STATE(60),
    [sym_stitch] = STATE(60),
    [sym_divert] = STATE(60),
    [sym_include] = STATE(60),
    [sym_symbol] = STATE(13),
    [sym_todo_comment] = STATE(60),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(50),
    [aux_sym_flow_repeat1] = STATE(21),
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
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym__newline_token1,
    ACTIONS(33), 1,
      sym_line_comment,
    STATE(13), 1,
      sym_symbol,
    STATE(35), 1,
      sym_flow,
    STATE(50), 1,
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
    STATE(3), 2,
      sym__newline,
      aux_sym_ink_repeat1,
    STATE(21), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(59), 8,
      sym__toplevel,
      sym_paragraph,
      sym_choice,
      sym_knot,
      sym_stitch,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [70] = 19,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym__newline_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      sym_tag,
    ACTIONS(49), 1,
      sym_knot_mark,
    ACTIONS(52), 1,
      sym_divert_mark,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(58), 1,
      anon_sym_INCLUDE,
    ACTIONS(64), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      anon_sym_TODO,
    STATE(13), 1,
      sym_symbol,
    STATE(35), 1,
      sym_flow,
    STATE(50), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(40), 2,
      sym_text,
      sym_glue,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(3), 2,
      sym__newline,
      aux_sym_ink_repeat1,
    STATE(21), 2,
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
  [140] = 6,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(22), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_RBRACE,
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
  [172] = 5,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(22), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 12,
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
  [202] = 4,
    STATE(22), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 12,
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
  [229] = 5,
    STATE(22), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_RBRACE,
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
  [258] = 6,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
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
  [289] = 6,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
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
  [320] = 6,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
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
  [351] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(90), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(88), 12,
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
  [375] = 5,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
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
  [403] = 12,
    ACTIONS(92), 1,
      aux_sym__newline_token1,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACE2,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      sym_divert_mark,
    STATE(46), 1,
      sym_flow,
    STATE(55), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(14), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(21), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(76), 2,
      sym__choice_content,
      sym_divert,
  [445] = 12,
    ACTIONS(92), 1,
      aux_sym__newline_token1,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACE2,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      sym_divert_mark,
    STATE(46), 1,
      sym_flow,
    STATE(55), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(21), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    STATE(32), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(70), 2,
      sym__choice_content,
      sym_divert,
  [487] = 5,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
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
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
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
    ACTIONS(35), 13,
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
  [617] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(116), 12,
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
  [636] = 5,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(120), 2,
      sym_text,
      sym_glue,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [661] = 8,
    ACTIONS(122), 1,
      anon_sym_BANG,
    ACTIONS(124), 1,
      aux_sym_expr_token1,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_not,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(26), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(7), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [690] = 8,
    ACTIONS(122), 1,
      anon_sym_BANG,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_not,
    ACTIONS(132), 1,
      aux_sym_expr_token1,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(26), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(15), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [719] = 8,
    ACTIONS(122), 1,
      anon_sym_BANG,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_not,
    ACTIONS(136), 1,
      aux_sym_expr_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(26), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(17), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [748] = 8,
    ACTIONS(122), 1,
      anon_sym_BANG,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_not,
    ACTIONS(140), 1,
      aux_sym_expr_token1,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(26), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(12), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [777] = 8,
    ACTIONS(122), 1,
      anon_sym_BANG,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_not,
    ACTIONS(144), 1,
      aux_sym_expr_token1,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(26), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(6), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [806] = 6,
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
    STATE(21), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [830] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(21), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [854] = 7,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(152), 2,
      sym_text,
      sym_glue,
    STATE(29), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(36), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [880] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(21), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [904] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(165), 2,
      sym_text,
      sym_glue,
    STATE(29), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(36), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [930] = 6,
    ACTIONS(171), 1,
      aux_sym__newline_token1,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_LBRACE2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(32), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    ACTIONS(174), 4,
      sym_text,
      sym_glue,
      anon_sym_LBRACK,
      sym_divert_mark,
  [954] = 6,
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
    STATE(21), 2,
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
    ACTIONS(165), 2,
      sym_text,
      sym_glue,
    STATE(31), 2,
      sym_flow,
      aux_sym_alternatives_repeat1,
    STATE(36), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1001] = 7,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(187), 1,
      sym_tag,
    ACTIONS(189), 1,
      sym_line_comment,
    STATE(48), 1,
      aux_sym__toplevel_repeat1,
    STATE(49), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1025] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(18), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
    ACTIONS(118), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [1041] = 3,
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
  [1057] = 3,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(195), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1073] = 4,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      aux_sym__newline_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(195), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1091] = 3,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(201), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1107] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(21), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
  [1129] = 4,
    ACTIONS(207), 1,
      aux_sym__newline_token1,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(209), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym_divert_mark,
  [1147] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(21), 2,
      sym_alternatives,
      aux_sym_flow_repeat1,
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
  [1183] = 4,
    ACTIONS(221), 1,
      sym_tag,
    STATE(45), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_line_comment,
  [1199] = 5,
    ACTIONS(17), 1,
      sym_divert_mark,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1217] = 5,
    ACTIONS(230), 1,
      sym_tag,
    ACTIONS(232), 1,
      sym_line_comment,
    STATE(45), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1235] = 5,
    ACTIONS(230), 1,
      sym_tag,
    ACTIONS(236), 1,
      sym_line_comment,
    STATE(45), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1253] = 5,
    ACTIONS(236), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      sym_tag,
    STATE(47), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1271] = 4,
    ACTIONS(230), 1,
      sym_tag,
    STATE(45), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1286] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1297] = 3,
    ACTIONS(242), 1,
      anon_sym_,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_TILDE,
  [1310] = 4,
    ACTIONS(248), 1,
      sym_knot_mark,
    ACTIONS(250), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1325] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1336] = 4,
    ACTIONS(17), 1,
      sym_divert_mark,
    STATE(68), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1351] = 4,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(54), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1366] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1376] = 3,
    ACTIONS(262), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1388] = 4,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 1,
      aux_sym__newline_token1,
    STATE(19), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1402] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 1,
      aux_sym__newline_token1,
    STATE(19), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1416] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1426] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(270), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1436] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(272), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1446] = 3,
    ACTIONS(276), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1458] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1467] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1476] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1485] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1494] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1503] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1512] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1521] = 3,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(54), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1532] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1541] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1550] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1559] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1568] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1577] = 3,
    ACTIONS(266), 1,
      aux_sym__newline_token1,
    STATE(19), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1588] = 2,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1596] = 2,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1604] = 2,
    ACTIONS(300), 1,
      anon_sym_LBRACE2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1612] = 2,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1620] = 2,
    ACTIONS(304), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1628] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1636] = 2,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1644] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(310), 1,
      aux_sym_include_token1,
    ACTIONS(312), 1,
      sym_comment,
  [1654] = 2,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1662] = 2,
    ACTIONS(316), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1670] = 2,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 172,
  [SMALL_STATE(6)] = 202,
  [SMALL_STATE(7)] = 229,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 320,
  [SMALL_STATE(11)] = 351,
  [SMALL_STATE(12)] = 375,
  [SMALL_STATE(13)] = 403,
  [SMALL_STATE(14)] = 445,
  [SMALL_STATE(15)] = 487,
  [SMALL_STATE(16)] = 515,
  [SMALL_STATE(17)] = 539,
  [SMALL_STATE(18)] = 567,
  [SMALL_STATE(19)] = 594,
  [SMALL_STATE(20)] = 617,
  [SMALL_STATE(21)] = 636,
  [SMALL_STATE(22)] = 661,
  [SMALL_STATE(23)] = 690,
  [SMALL_STATE(24)] = 719,
  [SMALL_STATE(25)] = 748,
  [SMALL_STATE(26)] = 777,
  [SMALL_STATE(27)] = 806,
  [SMALL_STATE(28)] = 830,
  [SMALL_STATE(29)] = 854,
  [SMALL_STATE(30)] = 880,
  [SMALL_STATE(31)] = 904,
  [SMALL_STATE(32)] = 930,
  [SMALL_STATE(33)] = 954,
  [SMALL_STATE(34)] = 978,
  [SMALL_STATE(35)] = 1001,
  [SMALL_STATE(36)] = 1025,
  [SMALL_STATE(37)] = 1041,
  [SMALL_STATE(38)] = 1057,
  [SMALL_STATE(39)] = 1073,
  [SMALL_STATE(40)] = 1091,
  [SMALL_STATE(41)] = 1107,
  [SMALL_STATE(42)] = 1129,
  [SMALL_STATE(43)] = 1147,
  [SMALL_STATE(44)] = 1169,
  [SMALL_STATE(45)] = 1183,
  [SMALL_STATE(46)] = 1199,
  [SMALL_STATE(47)] = 1217,
  [SMALL_STATE(48)] = 1235,
  [SMALL_STATE(49)] = 1253,
  [SMALL_STATE(50)] = 1271,
  [SMALL_STATE(51)] = 1286,
  [SMALL_STATE(52)] = 1297,
  [SMALL_STATE(53)] = 1310,
  [SMALL_STATE(54)] = 1325,
  [SMALL_STATE(55)] = 1336,
  [SMALL_STATE(56)] = 1351,
  [SMALL_STATE(57)] = 1366,
  [SMALL_STATE(58)] = 1376,
  [SMALL_STATE(59)] = 1388,
  [SMALL_STATE(60)] = 1402,
  [SMALL_STATE(61)] = 1416,
  [SMALL_STATE(62)] = 1426,
  [SMALL_STATE(63)] = 1436,
  [SMALL_STATE(64)] = 1446,
  [SMALL_STATE(65)] = 1458,
  [SMALL_STATE(66)] = 1467,
  [SMALL_STATE(67)] = 1476,
  [SMALL_STATE(68)] = 1485,
  [SMALL_STATE(69)] = 1494,
  [SMALL_STATE(70)] = 1503,
  [SMALL_STATE(71)] = 1512,
  [SMALL_STATE(72)] = 1521,
  [SMALL_STATE(73)] = 1532,
  [SMALL_STATE(74)] = 1541,
  [SMALL_STATE(75)] = 1550,
  [SMALL_STATE(76)] = 1559,
  [SMALL_STATE(77)] = 1568,
  [SMALL_STATE(78)] = 1577,
  [SMALL_STATE(79)] = 1588,
  [SMALL_STATE(80)] = 1596,
  [SMALL_STATE(81)] = 1604,
  [SMALL_STATE(82)] = 1612,
  [SMALL_STATE(83)] = 1620,
  [SMALL_STATE(84)] = 1628,
  [SMALL_STATE(85)] = 1636,
  [SMALL_STATE(86)] = 1644,
  [SMALL_STATE(87)] = 1654,
  [SMALL_STATE(88)] = 1662,
  [SMALL_STATE(89)] = 1670,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(21),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(52),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(50),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(88),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(72),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(87),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(86),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(40),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(78),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(85),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 11),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 8),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 8),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(52),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 14),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 10),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(36),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(52),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(81),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(25),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(45),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 12),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 13),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 9),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 15),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [306] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
