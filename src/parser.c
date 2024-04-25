#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  sym__newline = 1,
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
  sym__toplevel = 36,
  sym_paragraph = 37,
  sym_flow = 38,
  sym_choice = 39,
  sym_condition = 40,
  sym__choice_content = 41,
  sym__compound_choice_content = 42,
  sym_knot = 43,
  sym_stitch = 44,
  sym_divert = 45,
  sym_include = 46,
  sym_paren = 47,
  sym_binary = 48,
  sym_unary = 49,
  sym__unary_operator = 50,
  sym__binary_operator = 51,
  sym_qualified_name = 52,
  sym_symbol = 53,
  sym_todo_comment = 54,
  aux_sym_ink_repeat1 = 55,
  aux_sym__toplevel_repeat1 = 56,
  aux_sym_flow_repeat1 = 57,
  anon_alias_sym_ = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
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
  [anon_alias_sym_] = "",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
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
  [40] = 11,
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
  [75] = 69,
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
      ACCEPT_TOKEN(sym__newline);
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
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 22, .external_lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 22, .external_lex_state = 1},
  [16] = {.lex_state = 22, .external_lex_state = 1},
  [17] = {.lex_state = 22, .external_lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 22, .external_lex_state = 1},
  [23] = {.lex_state = 22, .external_lex_state = 1},
  [24] = {.lex_state = 22, .external_lex_state = 1},
  [25] = {.lex_state = 22, .external_lex_state = 1},
  [26] = {.lex_state = 22, .external_lex_state = 1},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22, .external_lex_state = 1},
  [29] = {.lex_state = 22, .external_lex_state = 1},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22, .external_lex_state = 1},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22, .external_lex_state = 1},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 22},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 82},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 23},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
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
    [sym_ink] = STATE(70),
    [sym__toplevel] = STATE(51),
    [sym_paragraph] = STATE(51),
    [sym_flow] = STATE(27),
    [sym_choice] = STATE(51),
    [sym_knot] = STATE(51),
    [sym_stitch] = STATE(51),
    [sym_divert] = STATE(51),
    [sym_include] = STATE(51),
    [sym_symbol] = STATE(15),
    [sym_todo_comment] = STATE(51),
    [aux_sym_ink_repeat1] = STATE(2),
    [aux_sym__toplevel_repeat1] = STATE(38),
    [aux_sym_flow_repeat1] = STATE(17),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
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
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym_line_comment,
    STATE(3), 1,
      aux_sym_ink_repeat1,
    STATE(15), 1,
      sym_symbol,
    STATE(17), 1,
      aux_sym_flow_repeat1,
    STATE(27), 1,
      sym_flow,
    STATE(38), 1,
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
    STATE(64), 8,
      sym__toplevel,
      sym_paragraph,
      sym_choice,
      sym_knot,
      sym_stitch,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [65] = 18,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym__newline,
    ACTIONS(41), 1,
      sym_tag,
    ACTIONS(44), 1,
      sym_knot_mark,
    ACTIONS(47), 1,
      sym_divert_mark,
    ACTIONS(50), 1,
      anon_sym_EQ,
    ACTIONS(53), 1,
      anon_sym_INCLUDE,
    ACTIONS(59), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_TODO,
    STATE(3), 1,
      aux_sym_ink_repeat1,
    STATE(15), 1,
      sym_symbol,
    STATE(17), 1,
      aux_sym_flow_repeat1,
    STATE(27), 1,
      sym_flow,
    STATE(38), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(38), 2,
      sym_text,
      sym_glue,
    ACTIONS(56), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(74), 8,
      sym__toplevel,
      sym_paragraph,
      sym_choice,
      sym_knot,
      sym_stitch,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [130] = 5,
    ACTIONS(69), 1,
      anon_sym_DOT,
    STATE(18), 1,
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
  [156] = 6,
    ACTIONS(69), 1,
      anon_sym_DOT,
    STATE(18), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(75), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [184] = 3,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(33), 12,
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
  [206] = 6,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [233] = 6,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [260] = 4,
    STATE(18), 1,
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
  [283] = 5,
    STATE(18), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(75), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [308] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [328] = 5,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [352] = 5,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym__binary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 6,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [376] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [396] = 10,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      sym_divert_mark,
    STATE(17), 1,
      aux_sym_flow_repeat1,
    STATE(22), 1,
      sym_condition,
    STATE(30), 1,
      sym_flow,
    STATE(43), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(62), 2,
      sym__choice_content,
      sym_divert,
  [430] = 4,
    STATE(16), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(99), 2,
      sym_text,
      sym_glue,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [451] = 4,
    STATE(16), 1,
      aux_sym_flow_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(104), 2,
      sym_text,
      sym_glue,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_divert_mark,
      sym_line_comment,
  [472] = 7,
    ACTIONS(106), 1,
      aux_sym_expr_token1,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_not,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(19), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(10), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [498] = 7,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_not,
    ACTIONS(114), 1,
      aux_sym_expr_token1,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(19), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(9), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [524] = 7,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_not,
    ACTIONS(118), 1,
      aux_sym_expr_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(19), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(12), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [550] = 7,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_not,
    ACTIONS(122), 1,
      aux_sym_expr_token1,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(19), 1,
      sym__unary_operator,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    STATE(13), 4,
      sym_paren,
      sym_binary,
      sym_unary,
      sym_qualified_name,
  [576] = 8,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      sym_divert_mark,
    STATE(17), 1,
      aux_sym_flow_repeat1,
    STATE(30), 1,
      sym_flow,
    STATE(43), 1,
      sym__compound_choice_content,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    STATE(57), 2,
      sym__choice_content,
      sym_divert,
  [604] = 5,
    STATE(17), 1,
      aux_sym_flow_repeat1,
    STATE(45), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [624] = 5,
    STATE(17), 1,
      aux_sym_flow_repeat1,
    STATE(46), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [644] = 5,
    STATE(17), 1,
      aux_sym_flow_repeat1,
    STATE(47), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [664] = 5,
    STATE(17), 1,
      aux_sym_flow_repeat1,
    STATE(49), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [684] = 7,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(136), 1,
      sym_tag,
    ACTIONS(138), 1,
      sym_line_comment,
    STATE(32), 1,
      sym_divert,
    STATE(33), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym__newline,
  [708] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(140), 5,
      sym_text,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_divert_mark,
  [720] = 5,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_flow_repeat1,
    STATE(66), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [738] = 5,
    ACTIONS(15), 1,
      sym_divert_mark,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym__newline,
  [756] = 3,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [770] = 5,
    ACTIONS(154), 1,
      sym_tag,
    ACTIONS(156), 1,
      sym_line_comment,
    STATE(36), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym__newline,
  [788] = 5,
    ACTIONS(156), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      sym_tag,
    STATE(34), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym__newline,
  [806] = 4,
    ACTIONS(162), 1,
      sym_tag,
    STATE(34), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_line_comment,
  [822] = 5,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_flow_repeat1,
    STATE(67), 1,
      sym_flow,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(9), 2,
      sym_text,
      sym_glue,
  [840] = 5,
    ACTIONS(158), 1,
      sym_tag,
    ACTIONS(169), 1,
      sym_line_comment,
    STATE(34), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      sym__newline,
  [858] = 4,
    ACTIONS(173), 1,
      sym_knot_mark,
    ACTIONS(175), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym__newline,
  [873] = 4,
    ACTIONS(158), 1,
      sym_tag,
    STATE(34), 1,
      aux_sym__toplevel_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym__newline,
  [888] = 4,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(42), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym__newline,
  [903] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [914] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(183), 4,
      sym_text,
      sym_glue,
      anon_sym_LBRACK,
      sym_divert_mark,
  [925] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_tag,
      sym_line_comment,
  [936] = 4,
    ACTIONS(15), 1,
      sym_divert_mark,
    STATE(52), 1,
      sym_divert,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym__newline,
  [951] = 3,
    ACTIONS(189), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym__newline,
  [963] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [973] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(193), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [983] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [993] = 3,
    ACTIONS(199), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1005] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_divert_mark,
  [1015] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1024] = 3,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1035] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1044] = 3,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(42), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1055] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1064] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1073] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1082] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1091] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1100] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1109] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1118] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1127] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1136] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1145] = 3,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1156] = 2,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1164] = 2,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1172] = 2,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1180] = 2,
    ACTIONS(231), 1,
      aux_sym_todo_comment_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1188] = 2,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1196] = 2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1204] = 2,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1212] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(239), 1,
      aux_sym_include_token1,
    ACTIONS(241), 1,
      sym_comment,
  [1222] = 2,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1230] = 2,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
  [1238] = 2,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__space,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 233,
  [SMALL_STATE(9)] = 260,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 352,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 396,
  [SMALL_STATE(16)] = 430,
  [SMALL_STATE(17)] = 451,
  [SMALL_STATE(18)] = 472,
  [SMALL_STATE(19)] = 498,
  [SMALL_STATE(20)] = 524,
  [SMALL_STATE(21)] = 550,
  [SMALL_STATE(22)] = 576,
  [SMALL_STATE(23)] = 604,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 644,
  [SMALL_STATE(26)] = 664,
  [SMALL_STATE(27)] = 684,
  [SMALL_STATE(28)] = 708,
  [SMALL_STATE(29)] = 720,
  [SMALL_STATE(30)] = 738,
  [SMALL_STATE(31)] = 756,
  [SMALL_STATE(32)] = 770,
  [SMALL_STATE(33)] = 788,
  [SMALL_STATE(34)] = 806,
  [SMALL_STATE(35)] = 822,
  [SMALL_STATE(36)] = 840,
  [SMALL_STATE(37)] = 858,
  [SMALL_STATE(38)] = 873,
  [SMALL_STATE(39)] = 888,
  [SMALL_STATE(40)] = 903,
  [SMALL_STATE(41)] = 914,
  [SMALL_STATE(42)] = 925,
  [SMALL_STATE(43)] = 936,
  [SMALL_STATE(44)] = 951,
  [SMALL_STATE(45)] = 963,
  [SMALL_STATE(46)] = 973,
  [SMALL_STATE(47)] = 983,
  [SMALL_STATE(48)] = 993,
  [SMALL_STATE(49)] = 1005,
  [SMALL_STATE(50)] = 1015,
  [SMALL_STATE(51)] = 1024,
  [SMALL_STATE(52)] = 1035,
  [SMALL_STATE(53)] = 1044,
  [SMALL_STATE(54)] = 1055,
  [SMALL_STATE(55)] = 1064,
  [SMALL_STATE(56)] = 1073,
  [SMALL_STATE(57)] = 1082,
  [SMALL_STATE(58)] = 1091,
  [SMALL_STATE(59)] = 1100,
  [SMALL_STATE(60)] = 1109,
  [SMALL_STATE(61)] = 1118,
  [SMALL_STATE(62)] = 1127,
  [SMALL_STATE(63)] = 1136,
  [SMALL_STATE(64)] = 1145,
  [SMALL_STATE(65)] = 1156,
  [SMALL_STATE(66)] = 1164,
  [SMALL_STATE(67)] = 1172,
  [SMALL_STATE(68)] = 1180,
  [SMALL_STATE(69)] = 1188,
  [SMALL_STATE(70)] = 1196,
  [SMALL_STATE(71)] = 1204,
  [SMALL_STATE(72)] = 1212,
  [SMALL_STATE(73)] = 1222,
  [SMALL_STATE(74)] = 1230,
  [SMALL_STATE(75)] = 1238,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(17),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(38),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(65),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(53),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(73),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(72),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(28),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(74),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(71),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 8),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 8),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 11),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ink_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 10),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 14),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__toplevel_repeat1, 2), SHIFT_REPEAT(34),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__toplevel, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 12),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 15),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 13),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [235] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
