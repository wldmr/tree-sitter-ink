#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
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
  anon_sym_BANG = 18,
  anon_sym_STAR = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_SLASH = 22,
  anon_sym_EQ_EQ = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_LT_EQ = 25,
  anon_sym_GT = 26,
  anon_sym_LT = 27,
  anon_sym_or = 28,
  anon_sym_PIPE_PIPE = 29,
  anon_sym_and = 30,
  anon_sym_AMP_AMP = 31,
  sym_identifier = 32,
  anon_sym_DOT = 33,
  sym_comment = 34,
  sym_line_comment = 35,
  anon_sym_TODO = 36,
  anon_sym_COLON = 37,
  aux_sym_todo_comment_token1 = 38,
  sym_text = 39,
  sym_ink = 40,
  sym__newline = 41,
  sym__toplevel = 42,
  sym_paragraph = 43,
  sym_flow = 44,
  sym_choice = 45,
  sym_condition = 46,
  sym__choice_content = 47,
  sym__compound_choice_content = 48,
  sym_knot = 49,
  sym_stitch = 50,
  sym_divert = 51,
  sym_include = 52,
  sym_paren = 53,
  sym_binary = 54,
  sym_unary = 55,
  sym__unary_operator = 56,
  sym__binary_operator = 57,
  sym_qualified_name = 58,
  sym_symbol = 59,
  sym_todo_comment = 60,
  aux_sym_ink_repeat1 = 61,
  aux_sym__toplevel_repeat1 = 62,
  aux_sym_flow_repeat1 = 63,
  aux_sym_choice_repeat1 = 64,
  anon_alias_sym_ = 65,
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
  [46] = 11,
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
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(35);
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
      if (lookahead == 'E') ADVANCE(44);
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
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == 'U') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(69);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(36);
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
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_knot_mark);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_divert_mark);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 30, .external_lex_state = 1},
  [2] = {.lex_state = 30, .external_lex_state = 1},
  [3] = {.lex_state = 30, .external_lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 30, .external_lex_state = 1},
  [17] = {.lex_state = 30, .external_lex_state = 1},
  [18] = {.lex_state = 30, .external_lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 30, .external_lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 30, .external_lex_state = 1},
  [26] = {.lex_state = 30, .external_lex_state = 1},
  [27] = {.lex_state = 30, .external_lex_state = 1},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30, .external_lex_state = 1},
  [30] = {.lex_state = 30, .external_lex_state = 1},
  [31] = {.lex_state = 30, .external_lex_state = 1},
  [32] = {.lex_state = 30, .external_lex_state = 1},
  [33] = {.lex_state = 30, .external_lex_state = 1},
  [34] = {.lex_state = 30, .external_lex_state = 1},
  [35] = {.lex_state = 30, .external_lex_state = 1},
  [36] = {.lex_state = 30, .external_lex_state = 1},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30, .external_lex_state = 1},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 30, .external_lex_state = 1},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 30},
  [48] = {.lex_state = 30},
  [49] = {.lex_state = 30},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 30},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 30},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 30},
  [58] = {.lex_state = 30},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 31},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 85},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 31},
  [83] = {.lex_state = 31},
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
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
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
    [sym_symbol] = STATE(17),
    [sym_todo_comment] = STATE(56),
    [aux_sym_ink_repeat1] = STATE(3),
    [aux_sym__toplevel_repeat1] = STATE(50),
    [aux_sym_flow_repeat1] = STATE(21),
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
    STATE(17), 1,
      sym_symbol,
    STATE(21), 1,
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
    STATE(17), 1,
      sym_symbol,
    STATE(21), 1,
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
  [132] = 6,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 10,
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
  [164] = 5,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 12,
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
  [194] = 4,
    STATE(23), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 12,
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
  [221] = 6,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 10,
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
  [252] = 5,
    STATE(23), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 10,
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
  [281] = 6,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 10,
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
  [312] = 6,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 10,
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
  [343] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 12,
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
  [367] = 5,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 10,
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
  [395] = 5,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 10,
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
  [423] = 5,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 10,
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
  [451] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 12,
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
  [475] = 11,
    ACTIONS(91), 1,
      aux_sym__newline_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      sym_divert_mark,
    STATE(21), 1,
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
  [513] = 11,
    ACTIONS(91), 1,
      aux_sym__newline_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      sym_divert_mark,
    STATE(21), 1,
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
    STATE(16), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(71), 2,
      sym__choice_content,
      sym_divert,
  [551] = 3,
    ACTIONS(99), 1,
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
  [573] = 8,
    ACTIONS(101), 1,
      aux_sym_expr_token1,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(20), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(13), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [602] = 8,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(111), 1,
      aux_sym_expr_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(20), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(6), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [631] = 4,
    STATE(25), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(117), 2,
      sym_text,
      sym_glue,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [652] = 8,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      aux_sym_expr_token1,
    ACTIONS(121), 1,
      sym_identifier,
    STATE(20), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(12), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [681] = 8,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(123), 1,
      aux_sym_expr_token1,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(20), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(8), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [710] = 8,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_not,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(127), 1,
      aux_sym_expr_token1,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(20), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(14), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [739] = 4,
    STATE(25), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(133), 2,
      sym_text,
      sym_glue,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [760] = 5,
    ACTIONS(136), 1,
      aux_sym__newline_token1,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(26), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    ACTIONS(139), 4,
      sym_text,
      sym_glue,
      anon_sym_LBRACK,
      sym_divert_mark,
  [781] = 5,
    STATE(21), 1,
      aux_sym_flow_repeat1,
    STATE(53), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [801] = 7,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(148), 1,
      sym_tag,
    ACTIONS(150), 1,
      sym_line_comment,
    STATE(41), 1,
      sym_divert,
    STATE(42), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [825] = 5,
    STATE(21), 1,
      aux_sym_flow_repeat1,
    STATE(51), 1,
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
  [845] = 5,
    STATE(21), 1,
      aux_sym_flow_repeat1,
    STATE(58), 1,
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
  [865] = 5,
    STATE(21), 1,
      aux_sym_flow_repeat1,
    STATE(57), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [885] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(158), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_divert_mark,
  [898] = 3,
    ACTIONS(160), 1,
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
  [913] = 2,
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
  [926] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(166), 6,
      sym_text,
      aux_sym__newline_token1,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_divert_mark,
  [939] = 3,
    ACTIONS(168), 1,
      aux_sym__newline_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(164), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_divert_mark,
  [954] = 5,
    ACTIONS(172), 1,
      sym_tag,
    ACTIONS(174), 1,
      sym_line_comment,
    STATE(39), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [972] = 3,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [986] = 4,
    ACTIONS(182), 1,
      sym_tag,
    STATE(39), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_line_comment,
  [1002] = 5,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_flow_repeat1,
    STATE(77), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [1020] = 5,
    ACTIONS(189), 1,
      sym_tag,
    ACTIONS(191), 1,
      sym_line_comment,
    STATE(37), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1038] = 5,
    ACTIONS(172), 1,
      sym_tag,
    ACTIONS(191), 1,
      sym_line_comment,
    STATE(39), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1056] = 5,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_flow_repeat1,
    STATE(74), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [1074] = 5,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1092] = 4,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(47), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1107] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1118] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_tag,
      sym_line_comment,
  [1129] = 4,
    ACTIONS(15), 1,
      sym_divert_mark,
    STATE(61), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1144] = 4,
    ACTIONS(207), 1,
      sym_knot_mark,
    ACTIONS(209), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1159] = 4,
    ACTIONS(172), 1,
      sym_tag,
    STATE(39), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1174] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1184] = 3,
    ACTIONS(217), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1196] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1206] = 4,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym__newline_token1,
    STATE(18), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1220] = 3,
    ACTIONS(227), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1232] = 4,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym__newline_token1,
    STATE(18), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1246] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1256] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
      sym_divert_mark,
  [1266] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1275] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1284] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1293] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1302] = 3,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(47), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1313] = 3,
    ACTIONS(223), 1,
      aux_sym__newline_token1,
    STATE(18), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1324] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1333] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1342] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1351] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1360] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1369] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1378] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1387] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      aux_sym__newline_token1,
  [1396] = 2,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1404] = 2,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1412] = 2,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1420] = 2,
    ACTIONS(257), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1428] = 2,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1436] = 2,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1444] = 2,
    ACTIONS(263), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1452] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(265), 1,
      aux_sym_include_token1,
    ACTIONS(267), 1,
      sym_comment,
  [1462] = 2,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1470] = 2,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1478] = 2,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 281,
  [SMALL_STATE(10)] = 312,
  [SMALL_STATE(11)] = 343,
  [SMALL_STATE(12)] = 367,
  [SMALL_STATE(13)] = 395,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 451,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 513,
  [SMALL_STATE(18)] = 551,
  [SMALL_STATE(19)] = 573,
  [SMALL_STATE(20)] = 602,
  [SMALL_STATE(21)] = 631,
  [SMALL_STATE(22)] = 652,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 710,
  [SMALL_STATE(25)] = 739,
  [SMALL_STATE(26)] = 760,
  [SMALL_STATE(27)] = 781,
  [SMALL_STATE(28)] = 801,
  [SMALL_STATE(29)] = 825,
  [SMALL_STATE(30)] = 845,
  [SMALL_STATE(31)] = 865,
  [SMALL_STATE(32)] = 885,
  [SMALL_STATE(33)] = 898,
  [SMALL_STATE(34)] = 913,
  [SMALL_STATE(35)] = 926,
  [SMALL_STATE(36)] = 939,
  [SMALL_STATE(37)] = 954,
  [SMALL_STATE(38)] = 972,
  [SMALL_STATE(39)] = 986,
  [SMALL_STATE(40)] = 1002,
  [SMALL_STATE(41)] = 1020,
  [SMALL_STATE(42)] = 1038,
  [SMALL_STATE(43)] = 1056,
  [SMALL_STATE(44)] = 1074,
  [SMALL_STATE(45)] = 1092,
  [SMALL_STATE(46)] = 1107,
  [SMALL_STATE(47)] = 1118,
  [SMALL_STATE(48)] = 1129,
  [SMALL_STATE(49)] = 1144,
  [SMALL_STATE(50)] = 1159,
  [SMALL_STATE(51)] = 1174,
  [SMALL_STATE(52)] = 1184,
  [SMALL_STATE(53)] = 1196,
  [SMALL_STATE(54)] = 1206,
  [SMALL_STATE(55)] = 1220,
  [SMALL_STATE(56)] = 1232,
  [SMALL_STATE(57)] = 1246,
  [SMALL_STATE(58)] = 1256,
  [SMALL_STATE(59)] = 1266,
  [SMALL_STATE(60)] = 1275,
  [SMALL_STATE(61)] = 1284,
  [SMALL_STATE(62)] = 1293,
  [SMALL_STATE(63)] = 1302,
  [SMALL_STATE(64)] = 1313,
  [SMALL_STATE(65)] = 1324,
  [SMALL_STATE(66)] = 1333,
  [SMALL_STATE(67)] = 1342,
  [SMALL_STATE(68)] = 1351,
  [SMALL_STATE(69)] = 1360,
  [SMALL_STATE(70)] = 1369,
  [SMALL_STATE(71)] = 1378,
  [SMALL_STATE(72)] = 1387,
  [SMALL_STATE(73)] = 1396,
  [SMALL_STATE(74)] = 1404,
  [SMALL_STATE(75)] = 1412,
  [SMALL_STATE(76)] = 1420,
  [SMALL_STATE(77)] = 1428,
  [SMALL_STATE(78)] = 1436,
  [SMALL_STATE(79)] = 1444,
  [SMALL_STATE(80)] = 1452,
  [SMALL_STATE(81)] = 1462,
  [SMALL_STATE(82)] = 1470,
  [SMALL_STATE(83)] = 1478,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(21),
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
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 11),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 8),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(25),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(75),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(22),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 14),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 10),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(39),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 15),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 9),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 12),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 13),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
