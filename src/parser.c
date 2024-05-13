#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 293
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 3
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  aux_sym_text_token1 = 1,
  aux_sym_text_token2 = 2,
  aux_sym_text_token3 = 3,
  aux_sym_text_token4 = 4,
  aux_sym_text_token5 = 5,
  aux_sym_text_token6 = 6,
  sym_glue = 7,
  anon_sym_LBRACE = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_AMP = 10,
  anon_sym_TILDE = 11,
  anon_sym_BANG = 12,
  aux_sym_logic_token1 = 13,
  anon_sym_PIPE = 14,
  anon_sym_RBRACE = 15,
  sym_tag = 16,
  anon_sym_BSLASH = 17,
  anon_sym_DASH = 18,
  aux_sym_condition_token1 = 19,
  anon_sym_LBRACE2 = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  aux_sym__knot_mark_token1 = 23,
  sym__divert_mark = 24,
  anon_sym_EQ = 25,
  anon_sym_LF = 26,
  anon_sym_function = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_return = 30,
  anon_sym_COMMA = 31,
  aux_sym_include_token1 = 32,
  aux_sym_include_token2 = 33,
  aux_sym_expr_token1 = 34,
  anon_sym_false = 35,
  anon_sym_true = 36,
  anon_sym_not = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_PLUS = 40,
  anon_sym_EQ_EQ = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_LT = 44,
  anon_sym_GT = 45,
  anon_sym_and = 46,
  anon_sym_AMP_AMP = 47,
  anon_sym_or = 48,
  anon_sym_PIPE_PIPE = 49,
  sym_identifier = 50,
  anon_sym_DOT = 51,
  sym_comment = 52,
  anon_sym_TODO = 53,
  anon_sym_COLON = 54,
  aux_sym_todo_comment_token1 = 55,
  sym__eol = 56,
  sym__block_start = 57,
  sym__block_end = 58,
  sym__error_sentinel = 59,
  sym_ink = 60,
  sym_content_block = 61,
  sym_knot_block = 62,
  sym_stitch_block = 63,
  sym__content_item = 64,
  sym_text = 65,
  sym_paragraph = 66,
  sym_flow = 67,
  sym_logic = 68,
  sym_choice = 69,
  sym_gather = 70,
  sym_condition = 71,
  sym__choice_content = 72,
  sym__compound_choice_content = 73,
  sym_knot = 74,
  sym__knot_mark = 75,
  sym_stitch = 76,
  sym_function_declaration = 77,
  sym_code = 78,
  sym__code_stmt = 79,
  sym_return = 80,
  sym__param = 81,
  sym_params = 82,
  sym_divert = 83,
  sym_include = 84,
  sym_call = 85,
  sym__arg = 86,
  sym_args = 87,
  sym_paren = 88,
  sym_unary = 89,
  sym_binary = 90,
  sym_qualified_name = 91,
  sym_symbol = 92,
  sym_todo_comment = 93,
  aux_sym_ink_repeat1 = 94,
  aux_sym_ink_repeat2 = 95,
  aux_sym_content_block_repeat1 = 96,
  aux_sym__content_item_repeat1 = 97,
  aux_sym_text_repeat1 = 98,
  aux_sym_flow_repeat1 = 99,
  aux_sym_logic_repeat1 = 100,
  aux_sym_choice_repeat1 = 101,
  aux_sym_gather_repeat1 = 102,
  aux_sym_params_repeat1 = 103,
  aux_sym_args_repeat1 = 104,
  anon_alias_sym__flow = 105,
  alias_sym_once_only_mark = 106,
  alias_sym_shuffle_mark = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_text_token1] = "text",
  [aux_sym_text_token2] = "char",
  [aux_sym_text_token3] = "[$!&~|]",
  [aux_sym_text_token4] = "/[^/*]",
  [aux_sym_text_token5] = "-[^>]",
  [aux_sym_text_token6] = "<[^->]",
  [sym_glue] = "glue",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOLLAR] = "sequence_mark",
  [anon_sym_AMP] = "repeat_mark",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [aux_sym_logic_token1] = "logic_condition",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [sym_tag] = "tag",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_DASH] = "-",
  [aux_sym_condition_token1] = "condition_token1",
  [anon_sym_LBRACE2] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__knot_mark_token1] = "knot_mark",
  [sym__divert_mark] = "_divert_mark",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_return] = "return",
  [anon_sym_COMMA] = ",",
  [aux_sym_include_token1] = "include_token1",
  [aux_sym_include_token2] = "path",
  [aux_sym_expr_token1] = "number",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [anon_sym_not] = "not",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_and] = "and",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_or] = "or",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [anon_sym_TODO] = "TODO",
  [anon_sym_COLON] = ":",
  [aux_sym_todo_comment_token1] = "todo_comment_token1",
  [sym__eol] = "_eol",
  [sym__block_start] = "_block_start",
  [sym__block_end] = "_block_end",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_ink] = "ink",
  [sym_content_block] = "content_block",
  [sym_knot_block] = "knot_block",
  [sym_stitch_block] = "stitch_block",
  [sym__content_item] = "_content_item",
  [sym_text] = "text",
  [sym_paragraph] = "paragraph",
  [sym_flow] = "flow",
  [sym_logic] = "logic",
  [sym_choice] = "choice",
  [sym_gather] = "gather",
  [sym_condition] = "condition",
  [sym__choice_content] = "_choice_content",
  [sym__compound_choice_content] = "_compound_choice_content",
  [sym_knot] = "knot",
  [sym__knot_mark] = "_knot_mark",
  [sym_stitch] = "stitch",
  [sym_function_declaration] = "function_declaration",
  [sym_code] = "code",
  [sym__code_stmt] = "_code_stmt",
  [sym_return] = "return",
  [sym__param] = "_param",
  [sym_params] = "params",
  [sym_divert] = "divert",
  [sym_include] = "include",
  [sym_call] = "call",
  [sym__arg] = "_arg",
  [sym_args] = "args",
  [sym_paren] = "paren",
  [sym_unary] = "unary",
  [sym_binary] = "binary",
  [sym_qualified_name] = "qualified_name",
  [sym_symbol] = "symbol",
  [sym_todo_comment] = "todo_comment",
  [aux_sym_ink_repeat1] = "ink_repeat1",
  [aux_sym_ink_repeat2] = "ink_repeat2",
  [aux_sym_content_block_repeat1] = "content_block_repeat1",
  [aux_sym__content_item_repeat1] = "_content_item_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_flow_repeat1] = "flow_repeat1",
  [aux_sym_logic_repeat1] = "logic_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [aux_sym_gather_repeat1] = "gather_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [anon_alias_sym__flow] = "_flow",
  [alias_sym_once_only_mark] = "once_only_mark",
  [alias_sym_shuffle_mark] = "shuffle_mark",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [aux_sym_text_token3] = aux_sym_text_token3,
  [aux_sym_text_token4] = aux_sym_text_token4,
  [aux_sym_text_token5] = aux_sym_text_token5,
  [aux_sym_text_token6] = aux_sym_text_token6,
  [sym_glue] = sym_glue,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_logic_token1] = aux_sym_logic_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_tag] = sym_tag,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__knot_mark_token1] = aux_sym__knot_mark_token1,
  [sym__divert_mark] = sym__divert_mark,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [aux_sym_include_token2] = aux_sym_include_token2,
  [aux_sym_expr_token1] = aux_sym_expr_token1,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_comment] = sym_comment,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_todo_comment_token1] = aux_sym_todo_comment_token1,
  [sym__eol] = sym__eol,
  [sym__block_start] = sym__block_start,
  [sym__block_end] = sym__block_end,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_ink] = sym_ink,
  [sym_content_block] = sym_content_block,
  [sym_knot_block] = sym_knot_block,
  [sym_stitch_block] = sym_stitch_block,
  [sym__content_item] = sym__content_item,
  [sym_text] = sym_text,
  [sym_paragraph] = sym_paragraph,
  [sym_flow] = sym_flow,
  [sym_logic] = sym_logic,
  [sym_choice] = sym_choice,
  [sym_gather] = sym_gather,
  [sym_condition] = sym_condition,
  [sym__choice_content] = sym__choice_content,
  [sym__compound_choice_content] = sym__compound_choice_content,
  [sym_knot] = sym_knot,
  [sym__knot_mark] = sym__knot_mark,
  [sym_stitch] = sym_stitch,
  [sym_function_declaration] = sym_function_declaration,
  [sym_code] = sym_code,
  [sym__code_stmt] = sym__code_stmt,
  [sym_return] = sym_return,
  [sym__param] = sym__param,
  [sym_params] = sym_params,
  [sym_divert] = sym_divert,
  [sym_include] = sym_include,
  [sym_call] = sym_call,
  [sym__arg] = sym__arg,
  [sym_args] = sym_args,
  [sym_paren] = sym_paren,
  [sym_unary] = sym_unary,
  [sym_binary] = sym_binary,
  [sym_qualified_name] = sym_qualified_name,
  [sym_symbol] = sym_symbol,
  [sym_todo_comment] = sym_todo_comment,
  [aux_sym_ink_repeat1] = aux_sym_ink_repeat1,
  [aux_sym_ink_repeat2] = aux_sym_ink_repeat2,
  [aux_sym_content_block_repeat1] = aux_sym_content_block_repeat1,
  [aux_sym__content_item_repeat1] = aux_sym__content_item_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_flow_repeat1] = aux_sym_flow_repeat1,
  [aux_sym_logic_repeat1] = aux_sym_logic_repeat1,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [aux_sym_gather_repeat1] = aux_sym_gather_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
  [anon_alias_sym__flow] = anon_alias_sym__flow,
  [alias_sym_once_only_mark] = alias_sym_once_only_mark,
  [alias_sym_shuffle_mark] = alias_sym_shuffle_mark,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token6] = {
    .visible = true,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_logic_token1] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_condition_token1] = {
    .visible = false,
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
  [sym__divert_mark] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expr_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
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
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__block_end] = {
    .visible = false,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_ink] = {
    .visible = true,
    .named = true,
  },
  [sym_content_block] = {
    .visible = true,
    .named = true,
  },
  [sym_knot_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stitch_block] = {
    .visible = true,
    .named = true,
  },
  [sym__content_item] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
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
  [sym_logic] = {
    .visible = true,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_gather] = {
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
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym__code_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym__param] = {
    .visible = false,
    .named = true,
  },
  [sym_params] = {
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
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [sym_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
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
  [aux_sym_ink_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__content_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_logic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gather_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym__flow] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_once_only_mark] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_shuffle_mark] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_final = 2,
  field_main = 3,
  field_mark = 4,
  field_name = 5,
  field_op = 6,
  field_params = 7,
  field_prefix = 8,
  field_target = 9,
  field_temporary = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_final] = "final",
  [field_main] = "main",
  [field_mark] = "mark",
  [field_name] = "name",
  [field_op] = "op",
  [field_params] = "params",
  [field_prefix] = "prefix",
  [field_target] = "target",
  [field_temporary] = "temporary",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 4},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 4},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 4},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 1},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 2},
  [20] = {.index = 29, .length = 2},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 1},
  [1] =
    {field_main, 0},
  [2] =
    {field_final, 1, .inherited = true},
    {field_main, 1, .inherited = true},
    {field_mark, 0},
    {field_temporary, 1, .inherited = true},
  [6] =
    {field_final, 0, .inherited = true},
    {field_main, 0, .inherited = true},
    {field_temporary, 0, .inherited = true},
  [9] =
    {field_name, 1},
  [10] =
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_mark, 0},
    {field_temporary, 2, .inherited = true},
  [14] =
    {field_prefix, 1},
  [15] =
    {field_op, 0},
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
    {field_op, 1},
  [23] =
    {field_name, 0},
  [24] =
    {field_name, 2},
  [25] =
    {field_final, 3},
    {field_temporary, 1},
  [27] =
    {field_final, 3},
    {field_main, 0},
  [29] =
    {field_main, 0},
    {field_temporary, 2},
  [31] =
    {field_args, 2},
    {field_name, 0},
  [33] =
    {field_name, 2},
    {field_params, 4},
  [35] =
    {field_final, 4},
    {field_main, 0},
    {field_temporary, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym__flow,
  },
  [9] = {
    [1] = alias_sym_shuffle_mark,
  },
  [10] = {
    [1] = alias_sym_once_only_mark,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_flow, 2,
    sym_flow,
    anon_alias_sym__flow,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 11,
  [14] = 11,
  [15] = 11,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 34,
  [40] = 36,
  [41] = 37,
  [42] = 29,
  [43] = 36,
  [44] = 34,
  [45] = 36,
  [46] = 46,
  [47] = 37,
  [48] = 29,
  [49] = 34,
  [50] = 50,
  [51] = 51,
  [52] = 37,
  [53] = 53,
  [54] = 54,
  [55] = 25,
  [56] = 36,
  [57] = 37,
  [58] = 58,
  [59] = 29,
  [60] = 34,
  [61] = 24,
  [62] = 62,
  [63] = 53,
  [64] = 20,
  [65] = 26,
  [66] = 66,
  [67] = 67,
  [68] = 18,
  [69] = 29,
  [70] = 37,
  [71] = 36,
  [72] = 72,
  [73] = 21,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 82,
  [83] = 76,
  [84] = 50,
  [85] = 82,
  [86] = 82,
  [87] = 81,
  [88] = 88,
  [89] = 76,
  [90] = 81,
  [91] = 91,
  [92] = 79,
  [93] = 93,
  [94] = 81,
  [95] = 76,
  [96] = 93,
  [97] = 97,
  [98] = 82,
  [99] = 82,
  [100] = 100,
  [101] = 93,
  [102] = 81,
  [103] = 103,
  [104] = 104,
  [105] = 81,
  [106] = 82,
  [107] = 76,
  [108] = 51,
  [109] = 72,
  [110] = 110,
  [111] = 67,
  [112] = 112,
  [113] = 75,
  [114] = 114,
  [115] = 58,
  [116] = 66,
  [117] = 110,
  [118] = 118,
  [119] = 33,
  [120] = 79,
  [121] = 32,
  [122] = 46,
  [123] = 123,
  [124] = 124,
  [125] = 93,
  [126] = 79,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 135,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 130,
  [143] = 93,
  [144] = 138,
  [145] = 139,
  [146] = 140,
  [147] = 141,
  [148] = 148,
  [149] = 79,
  [150] = 150,
  [151] = 93,
  [152] = 152,
  [153] = 153,
  [154] = 152,
  [155] = 153,
  [156] = 153,
  [157] = 157,
  [158] = 152,
  [159] = 153,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 162,
  [164] = 164,
  [165] = 161,
  [166] = 160,
  [167] = 161,
  [168] = 152,
  [169] = 162,
  [170] = 170,
  [171] = 164,
  [172] = 160,
  [173] = 164,
  [174] = 50,
  [175] = 175,
  [176] = 164,
  [177] = 162,
  [178] = 160,
  [179] = 153,
  [180] = 180,
  [181] = 152,
  [182] = 161,
  [183] = 153,
  [184] = 152,
  [185] = 185,
  [186] = 161,
  [187] = 164,
  [188] = 162,
  [189] = 160,
  [190] = 161,
  [191] = 164,
  [192] = 162,
  [193] = 160,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 201,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 170,
  [222] = 170,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 217,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 180,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 233,
  [243] = 243,
  [244] = 235,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 247,
  [250] = 250,
  [251] = 243,
  [252] = 252,
  [253] = 233,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 180,
  [258] = 258,
  [259] = 238,
  [260] = 260,
  [261] = 261,
  [262] = 235,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 266,
  [278] = 278,
  [279] = 279,
  [280] = 275,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 266,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 281,
};

static inline bool aux_sym_text_token1_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '&'
      ? (c < '!'
        ? c == 0
        : (c <= '!' || (c >= '#' && c <= '$')))
      : (c <= '&' || (c < '-'
        ? (c >= '*' && c <= '+')
        : c <= '-')))
    : (c <= '/' || (c < '['
      ? (c < '>'
        ? c == '<'
        : c <= '>')
      : (c <= '[' || (c < '{'
        ? c == ']'
        : c <= '~')))));
}

static inline bool aux_sym_text_token1_character_set_2(int32_t c) {
  return (c < '*'
    ? (c < '#'
      ? (c < '!'
        ? c == 0
        : c <= '!')
      : (c <= '$' || c == '&'))
    : (c <= '+' || (c < '['
      ? (c < '>'
        ? c == '-'
        : c <= '>')
      : (c <= ']' || c == '~'))));
}

static inline bool aux_sym_text_token1_character_set_3(int32_t c) {
  return (c < '*'
    ? (c < '#'
      ? (c < '!'
        ? c == 0
        : c <= '!')
      : (c <= '$' || c == '&'))
    : (c <= '+' || (c < '['
      ? (c < '>'
        ? c == '-'
        : c <= '>')
      : (c <= ']' || (c >= '}' && c <= '~')))));
}

static inline bool aux_sym_text_token1_character_set_4(int32_t c) {
  return (c < '*'
    ? (c < '#'
      ? (c < '!'
        ? c == 0
        : c <= '!')
      : (c <= '$' || c == '&'))
    : (c <= '+' || (c < '['
      ? (c < '>'
        ? c == '-'
        : c <= '>')
      : (c <= '[' || (c >= '|' && c <= '~')))));
}

static inline bool aux_sym_text_token1_character_set_5(int32_t c) {
  return (c < '*'
    ? (c < '#'
      ? (c < '!'
        ? c == 0
        : c <= '!')
      : (c <= '$' || c == '&'))
    : (c <= '+' || (c < '['
      ? (c < '>'
        ? c == '-'
        : c <= '>')
      : (c <= ']' || (c >= '|' && c <= '~')))));
}

static inline bool aux_sym_text_token1_character_set_6(int32_t c) {
  return (c < '-'
    ? (c < '#'
      ? (c < '\n'
        ? c == 0
        : (c <= '\n' || c == '!'))
      : (c <= '$' || (c < '*'
        ? c == '&'
        : c <= '+')))
    : (c <= '-' || (c < '['
      ? (c < '<'
        ? c == '/'
        : (c <= '<' || c == '>'))
      : (c <= '[' || (c < '{'
        ? c == ']'
        : c <= '~')))));
}

static inline bool aux_sym_logic_token1_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '&'
      ? (c < '!'
        ? c == '\n'
        : (c <= '!' || (c >= '#' && c <= '$')))
      : (c <= '&' || (c < '-'
        ? (c >= '*' && c <= '+')
        : c <= '-')))
    : (c <= '/' || (c < '['
      ? (c < '>'
        ? c == '<'
        : c <= '>')
      : (c <= '[' || (c < '{'
        ? c == ']'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(146);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '{') ADVANCE(139);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '~') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(147);
      if (lookahead == '/') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '/') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '=') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 't') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '<') ADVANCE(175);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '<') ADVANCE(175);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '&') ADVANCE(179);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(197);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(143);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(205);
      END_STATE();
    case 43:
      if (lookahead == 'U') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == '|') ADVANCE(181);
      END_STATE();
    case 68:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != ':') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(203);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(134);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '*') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(111);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      if (!aux_sym_text_token1_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(146);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '{') ADVANCE(139);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(126);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '~') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (!aux_sym_text_token1_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (!aux_sym_text_token1_character_set_3(lookahead)) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (!aux_sym_text_token1_character_set_4(lookahead)) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '~') ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(107);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(127);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(30);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(99);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(98);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(101);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(78);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'L') ADVANCE(103);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(95);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(205);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(97);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'U') ADVANCE(96);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_text_token2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_text_token3);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_text_token4);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_text_token4);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_text_token5);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_text_token5);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_text_token6);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_text_token6);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_glue);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead == ':') ADVANCE(127);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(30);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '*') ADVANCE(71);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '{') ADVANCE(139);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__knot_mark_token1);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__divert_mark);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_include_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(156);
      if (lookahead == '*') ADVANCE(155);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(156);
      if (lookahead == '*') ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(208);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '*') ADVANCE(71);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(208);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(208);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 2, .external_lex_state = 3},
  [5] = {.lex_state = 2, .external_lex_state = 3},
  [6] = {.lex_state = 2, .external_lex_state = 3},
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 20, .external_lex_state = 4},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 20, .external_lex_state = 4},
  [62] = {.lex_state = 20, .external_lex_state = 4},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20, .external_lex_state = 4},
  [65] = {.lex_state = 20, .external_lex_state = 4},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20, .external_lex_state = 4},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20, .external_lex_state = 4},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 10, .external_lex_state = 4},
  [79] = {.lex_state = 6, .external_lex_state = 4},
  [80] = {.lex_state = 11, .external_lex_state = 4},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 20, .external_lex_state = 4},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 10, .external_lex_state = 4},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 11, .external_lex_state = 4},
  [97] = {.lex_state = 10, .external_lex_state = 4},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 10, .external_lex_state = 4},
  [101] = {.lex_state = 6, .external_lex_state = 4},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 20, .external_lex_state = 4},
  [109] = {.lex_state = 20, .external_lex_state = 4},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 20, .external_lex_state = 4},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 20, .external_lex_state = 4},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 20, .external_lex_state = 4},
  [116] = {.lex_state = 20, .external_lex_state = 4},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 20, .external_lex_state = 4},
  [120] = {.lex_state = 10, .external_lex_state = 4},
  [121] = {.lex_state = 20, .external_lex_state = 4},
  [122] = {.lex_state = 20, .external_lex_state = 4},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 20, .external_lex_state = 4},
  [125] = {.lex_state = 10, .external_lex_state = 4},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 18, .external_lex_state = 4},
  [144] = {.lex_state = 19},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 19},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 18, .external_lex_state = 4},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 11, .external_lex_state = 4},
  [154] = {.lex_state = 6, .external_lex_state = 4},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 6, .external_lex_state = 4},
  [157] = {.lex_state = 16},
  [158] = {.lex_state = 11, .external_lex_state = 4},
  [159] = {.lex_state = 10, .external_lex_state = 4},
  [160] = {.lex_state = 16},
  [161] = {.lex_state = 6, .external_lex_state = 4},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 6, .external_lex_state = 4},
  [167] = {.lex_state = 11, .external_lex_state = 4},
  [168] = {.lex_state = 10, .external_lex_state = 4},
  [169] = {.lex_state = 11, .external_lex_state = 4},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 11, .external_lex_state = 4},
  [172] = {.lex_state = 11, .external_lex_state = 4},
  [173] = {.lex_state = 6, .external_lex_state = 4},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 17},
  [176] = {.lex_state = 10, .external_lex_state = 4},
  [177] = {.lex_state = 10, .external_lex_state = 4},
  [178] = {.lex_state = 10, .external_lex_state = 4},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 10, .external_lex_state = 4},
  [183] = {.lex_state = 18, .external_lex_state = 4},
  [184] = {.lex_state = 18, .external_lex_state = 4},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 18, .external_lex_state = 4},
  [191] = {.lex_state = 18, .external_lex_state = 4},
  [192] = {.lex_state = 18, .external_lex_state = 4},
  [193] = {.lex_state = 18, .external_lex_state = 4},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 23},
  [198] = {.lex_state = 19},
  [199] = {.lex_state = 0, .external_lex_state = 4},
  [200] = {.lex_state = 0, .external_lex_state = 5},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 5},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 4},
  [206] = {.lex_state = 0, .external_lex_state = 5},
  [207] = {.lex_state = 0, .external_lex_state = 5},
  [208] = {.lex_state = 0, .external_lex_state = 5},
  [209] = {.lex_state = 23},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 19},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 4},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0, .external_lex_state = 4},
  [217] = {.lex_state = 0, .external_lex_state = 5},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0, .external_lex_state = 4},
  [220] = {.lex_state = 23, .external_lex_state = 4},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0, .external_lex_state = 4},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 19, .external_lex_state = 4},
  [226] = {.lex_state = 0, .external_lex_state = 4},
  [227] = {.lex_state = 0, .external_lex_state = 4},
  [228] = {.lex_state = 0, .external_lex_state = 5},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0, .external_lex_state = 4},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 23},
  [234] = {.lex_state = 0, .external_lex_state = 5},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 4},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 19},
  [239] = {.lex_state = 0, .external_lex_state = 4},
  [240] = {.lex_state = 0, .external_lex_state = 4},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 23},
  [243] = {.lex_state = 0, .external_lex_state = 5},
  [244] = {.lex_state = 0, .external_lex_state = 5},
  [245] = {.lex_state = 28},
  [246] = {.lex_state = 0, .external_lex_state = 5},
  [247] = {.lex_state = 0, .external_lex_state = 5},
  [248] = {.lex_state = 0, .external_lex_state = 5},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 5},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 5},
  [253] = {.lex_state = 23},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 4},
  [257] = {.lex_state = 0, .external_lex_state = 4},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 19},
  [260] = {.lex_state = 0, .external_lex_state = 4},
  [261] = {.lex_state = 0, .external_lex_state = 4},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 210},
  [264] = {.lex_state = 0, .external_lex_state = 4},
  [265] = {.lex_state = 0, .external_lex_state = 4},
  [266] = {.lex_state = 23},
  [267] = {.lex_state = 0, .external_lex_state = 4},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 13},
  [270] = {.lex_state = 0, .external_lex_state = 4},
  [271] = {.lex_state = 23},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0, .external_lex_state = 4},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0, .external_lex_state = 4},
  [277] = {.lex_state = 23},
  [278] = {.lex_state = 0, .external_lex_state = 4},
  [279] = {.lex_state = 0, .external_lex_state = 4},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0, .external_lex_state = 3},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0, .external_lex_state = 4},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 14},
  [287] = {.lex_state = 23},
  [288] = {.lex_state = 23},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0, .external_lex_state = 4},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0, .external_lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
    [aux_sym_text_token3] = ACTIONS(1),
    [aux_sym_text_token4] = ACTIONS(1),
    [aux_sym_text_token5] = ACTIONS(1),
    [aux_sym_text_token6] = ACTIONS(1),
    [sym_glue] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__knot_mark_token1] = ACTIONS(1),
    [sym__divert_mark] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_include_token1] = ACTIONS(1),
    [aux_sym_expr_token1] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__block_start] = ACTIONS(1),
    [sym__block_end] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_ink] = STATE(289),
    [sym_content_block] = STATE(195),
    [sym_knot_block] = STATE(204),
    [sym_stitch_block] = STATE(196),
    [aux_sym_ink_repeat1] = STATE(196),
    [aux_sym_ink_repeat2] = STATE(204),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__block_start] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(23), 1,
      sym__divert_mark,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(27), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    STATE(9), 1,
      sym_symbol,
    STATE(91), 1,
      aux_sym_gather_repeat1,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(199), 1,
      sym_flow,
    STATE(213), 1,
      aux_sym__content_item_repeat1,
    STATE(217), 1,
      sym_stitch,
    STATE(245), 1,
      sym__knot_mark,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(200), 2,
      sym_knot,
      sym_function_declaration,
    STATE(96), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(283), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [89] = 21,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym__divert_mark,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(27), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    STATE(9), 1,
      sym_symbol,
    STATE(91), 1,
      aux_sym_gather_repeat1,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(199), 1,
      sym_flow,
    STATE(213), 1,
      aux_sym__content_item_repeat1,
    STATE(228), 1,
      sym_stitch,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(96), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(283), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [168] = 20,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym__divert_mark,
    ACTIONS(27), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(35), 1,
      sym__block_end,
    STATE(9), 1,
      sym_symbol,
    STATE(91), 1,
      aux_sym_gather_repeat1,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(199), 1,
      sym_flow,
    STATE(213), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(96), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(283), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [244] = 20,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym__divert_mark,
    ACTIONS(27), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(37), 1,
      sym__block_end,
    STATE(9), 1,
      sym_symbol,
    STATE(91), 1,
      aux_sym_gather_repeat1,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(199), 1,
      sym_flow,
    STATE(213), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(96), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(283), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [320] = 20,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym__divert_mark,
    ACTIONS(27), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(39), 1,
      sym__block_end,
    STATE(9), 1,
      sym_symbol,
    STATE(91), 1,
      aux_sym_gather_repeat1,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(199), 1,
      sym_flow,
    STATE(213), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(96), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(283), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [396] = 20,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_glue,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_TILDE,
    ACTIONS(53), 1,
      sym_tag,
    ACTIONS(56), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      sym__divert_mark,
    ACTIONS(62), 1,
      aux_sym_include_token1,
    ACTIONS(68), 1,
      anon_sym_TODO,
    ACTIONS(71), 1,
      sym__block_end,
    STATE(9), 1,
      sym_symbol,
    STATE(91), 1,
      aux_sym_gather_repeat1,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(199), 1,
      sym_flow,
    STATE(213), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(96), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(41), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(283), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [472] = 19,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym__divert_mark,
    ACTIONS(27), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    STATE(9), 1,
      sym_symbol,
    STATE(91), 1,
      aux_sym_gather_repeat1,
    STATE(158), 1,
      aux_sym_text_repeat1,
    STATE(199), 1,
      sym_flow,
    STATE(213), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(5), 2,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(96), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(283), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [545] = 15,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_glue,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      aux_sym_condition_token1,
    ACTIONS(83), 1,
      anon_sym_LBRACE2,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      sym__divert_mark,
    STATE(154), 1,
      aux_sym_text_repeat1,
    STATE(205), 1,
      sym_flow,
    STATE(227), 1,
      sym__compound_choice_content,
    STATE(10), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(265), 2,
      sym__choice_content,
      sym_divert,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(73), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [600] = 15,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_glue,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      aux_sym_condition_token1,
    ACTIONS(83), 1,
      anon_sym_LBRACE2,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      sym__divert_mark,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    STATE(154), 1,
      aux_sym_text_repeat1,
    STATE(205), 1,
      sym_flow,
    STATE(227), 1,
      sym__compound_choice_content,
    STATE(104), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    STATE(276), 2,
      sym__choice_content,
      sym_divert,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(73), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [655] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      anon_sym_BANG,
    ACTIONS(103), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    ACTIONS(97), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [701] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      anon_sym_TILDE,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    ACTIONS(105), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [747] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_TILDE,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_PIPE,
    STATE(44), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    ACTIONS(113), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [793] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_TILDE,
    ACTIONS(125), 1,
      anon_sym_BANG,
    ACTIONS(127), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    ACTIONS(121), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [839] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_TILDE,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    ACTIONS(129), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [885] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_TILDE,
    ACTIONS(141), 1,
      anon_sym_BANG,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    ACTIONS(137), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [931] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_glue,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      sym__divert_mark,
    STATE(154), 1,
      aux_sym_text_repeat1,
    STATE(205), 1,
      sym_flow,
    STATE(227), 1,
      sym__compound_choice_content,
    STATE(279), 2,
      sym__choice_content,
      sym_divert,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(73), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(149), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1003] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_glue,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      sym__divert_mark,
    STATE(154), 1,
      aux_sym_text_repeat1,
    STATE(205), 1,
      sym_flow,
    STATE(227), 1,
      sym__compound_choice_content,
    STATE(261), 2,
      sym__choice_content,
      sym_divert,
    STATE(101), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(73), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1045] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(145), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1083] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 12,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1117] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      sym__divert_mark,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 1,
      aux_sym_expr_token1,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(275), 1,
      sym_args,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(175), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(214), 2,
      sym_divert,
      sym__arg,
    STATE(103), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1161] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      sym__divert_mark,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_expr_token1,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      sym_args,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(175), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(214), 2,
      sym_divert,
      sym__arg,
    STATE(103), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(183), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1235] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(145), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1275] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(145), 10,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1311] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(189), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1352] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym__block_end,
    ACTIONS(191), 16,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_tag,
      anon_sym_DASH,
      sym__divert_mark,
      aux_sym_include_token1,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_TODO,
  [1377] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1415] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(189), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1455] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1493] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 12,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1545] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1583] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1621] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1659] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1697] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(189), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1737] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1775] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1813] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1851] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1889] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1927] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1965] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2027] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2065] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2103] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2189] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2227] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(189), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2267] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_BANG,
    ACTIONS(167), 1,
      sym__divert_mark,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      aux_sym_expr_token1,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(175), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(237), 2,
      sym_divert,
      sym__arg,
    STATE(103), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [2305] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(145), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(253), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2343] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2381] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2419] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(145), 10,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2449] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2487] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(183), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2553] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(271), 1,
      sym__eol,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(269), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(253), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2593] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(189), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2633] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(145), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2669] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(145), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2751] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(149), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2779] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2817] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2855] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2893] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(145), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2927] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 10,
      sym__eol,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2959] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_glue,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      anon_sym_PIPE,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(289), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2997] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(145), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3029] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3064] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    STATE(48), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3099] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_glue,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      sym__divert_mark,
    ACTIONS(315), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_text_repeat1,
    STATE(239), 1,
      sym_flow,
    STATE(125), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(307), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3134] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_glue,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      sym__eol,
    STATE(154), 1,
      aux_sym_text_repeat1,
    ACTIONS(326), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(79), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(317), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3167] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym__eol,
    ACTIONS(333), 1,
      sym_glue,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      aux_sym_text_repeat1,
    ACTIONS(326), 2,
      sym_tag,
      sym__divert_mark,
    STATE(80), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(330), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3200] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    STATE(52), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3235] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    STATE(43), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3270] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 12,
      sym__eol,
      sym_tag,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3328] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      anon_sym_PIPE,
    STATE(36), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3363] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3398] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3433] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_glue,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      sym__divert_mark,
    ACTIONS(353), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_text_repeat1,
    STATE(240), 1,
      sym_flow,
    STATE(125), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(307), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3468] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    STATE(59), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3503] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    STATE(57), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3538] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_glue,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(365), 1,
      anon_sym_DASH,
    STATE(175), 1,
      aux_sym_gather_repeat1,
    STATE(184), 1,
      aux_sym_text_repeat1,
    STATE(268), 1,
      sym_flow,
    STATE(143), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(359), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3573] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_glue,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      aux_sym_text_repeat1,
    ACTIONS(326), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(92), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(367), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3604] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(376), 1,
      sym_glue,
    STATE(152), 1,
      aux_sym_text_repeat1,
    ACTIONS(378), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(92), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3635] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    STATE(37), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3670] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(382), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3705] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_glue,
    ACTIONS(386), 1,
      sym__eol,
    STATE(158), 1,
      aux_sym_text_repeat1,
    ACTIONS(378), 2,
      sym_tag,
      sym__divert_mark,
    STATE(80), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(9), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3738] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_glue,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(388), 1,
      sym__divert_mark,
    ACTIONS(390), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_text_repeat1,
    STATE(256), 1,
      sym_flow,
    STATE(125), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(307), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3773] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3808] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    STATE(40), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3843] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_glue,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      sym__divert_mark,
    ACTIONS(398), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_text_repeat1,
    STATE(236), 1,
      sym_flow,
    STATE(125), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(307), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3878] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      sym__eol,
    ACTIONS(400), 1,
      sym_glue,
    STATE(154), 1,
      aux_sym_text_repeat1,
    ACTIONS(378), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(79), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(73), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3911] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(402), 1,
      anon_sym_PIPE,
    STATE(47), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3946] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(189), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3981] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_condition_token1,
    ACTIONS(409), 1,
      anon_sym_LBRACE2,
    STATE(104), 2,
      sym_condition,
      aux_sym_choice_repeat1,
    ACTIONS(404), 11,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_LBRACK,
      sym__divert_mark,
  [4008] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4043] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4078] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_glue,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      anon_sym_PIPE,
    STATE(42), 1,
      aux_sym_logic_repeat1,
    STATE(152), 1,
      aux_sym_text_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(93), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(91), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4135] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(145), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(253), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4167] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(189), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4223] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_glue,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_text_repeat1,
    STATE(285), 1,
      sym_flow,
    STATE(151), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(418), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4255] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(145), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4285] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(189), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4319] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(145), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4369] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(189), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4403] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_glue,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_text_repeat1,
    STATE(273), 1,
      sym_flow,
    STATE(151), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(418), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4457] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym__divert_mark,
    ACTIONS(328), 1,
      sym__eol,
    ACTIONS(431), 1,
      sym_glue,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      aux_sym_text_repeat1,
    STATE(120), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(428), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4489] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 10,
      sym__eol,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 11,
      sym__eol,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4537] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(189), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4571] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SLASH,
    ACTIONS(271), 1,
      sym__eol,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(269), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(253), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4605] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      sym__divert_mark,
    ACTIONS(386), 1,
      sym__eol,
    ACTIONS(437), 1,
      sym_glue,
    STATE(168), 1,
      aux_sym_text_repeat1,
    STATE(120), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(307), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4637] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    ACTIONS(442), 1,
      sym_glue,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      aux_sym_text_repeat1,
    STATE(126), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(439), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4666] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(448), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_condition_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [4685] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(450), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_condition_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [4704] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(452), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_condition_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [4723] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_not,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      aux_sym_expr_token1,
    ACTIONS(458), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(456), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(117), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4754] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_not,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 1,
      aux_sym_expr_token1,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(462), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(123), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4785] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym_condition_token1,
    ACTIONS(466), 12,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [4806] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      aux_sym_expr_token1,
    ACTIONS(478), 1,
      anon_sym_not,
    ACTIONS(480), 1,
      sym_identifier,
    ACTIONS(470), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(476), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4837] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_not,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      aux_sym_expr_token1,
    ACTIONS(486), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(484), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(72), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4868] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_not,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      aux_sym_expr_token1,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(490), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(75), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4899] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      anon_sym_not,
    ACTIONS(494), 1,
      aux_sym_expr_token1,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(470), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(496), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(109), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4930] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      anon_sym_not,
    ACTIONS(500), 1,
      aux_sym_expr_token1,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(470), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(502), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(113), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4961] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      anon_sym_not,
    ACTIONS(506), 1,
      aux_sym_expr_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(470), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(508), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(115), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4992] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      anon_sym_not,
    ACTIONS(512), 1,
      aux_sym_expr_token1,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(470), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(514), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(119), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5023] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      anon_sym_not,
    ACTIONS(518), 1,
      aux_sym_expr_token1,
    ACTIONS(522), 1,
      sym_identifier,
    ACTIONS(470), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(520), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(121), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5054] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      anon_sym_not,
    ACTIONS(524), 1,
      aux_sym_expr_token1,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(470), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(526), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(108), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5085] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_not,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      aux_sym_expr_token1,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(532), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(110), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5116] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      sym__eol,
    ACTIONS(536), 1,
      sym_glue,
    STATE(184), 1,
      aux_sym_text_repeat1,
    STATE(149), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(359), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5145] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_not,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      aux_sym_expr_token1,
    ACTIONS(542), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(540), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(58), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5176] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_not,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      aux_sym_expr_token1,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(546), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(33), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5207] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_not,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      aux_sym_expr_token1,
    ACTIONS(554), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(552), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(32), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5238] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_not,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(556), 1,
      aux_sym_expr_token1,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(558), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(51), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5269] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_not,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      aux_sym_expr_token1,
    ACTIONS(566), 1,
      sym_identifier,
    ACTIONS(163), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(564), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(114), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5300] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym__eol,
    ACTIONS(571), 1,
      sym_glue,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      aux_sym_text_repeat1,
    STATE(149), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(568), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5329] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_condition_token1,
    ACTIONS(448), 12,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5350] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(579), 1,
      sym_glue,
    STATE(181), 1,
      aux_sym_text_repeat1,
    STATE(126), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(418), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5379] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_text_repeat1,
    ACTIONS(583), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(581), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5401] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym__eol,
    STATE(153), 1,
      aux_sym_text_repeat1,
    ACTIONS(588), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(585), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5425] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__eol,
    STATE(156), 1,
      aux_sym_text_repeat1,
    ACTIONS(583), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(592), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5449] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_text_repeat1,
    ACTIONS(588), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(596), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5471] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym__eol,
    STATE(156), 1,
      aux_sym_text_repeat1,
    ACTIONS(588), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(599), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5495] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym__divert_mark,
    STATE(185), 1,
      sym_divert,
    ACTIONS(602), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [5517] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__eol,
    STATE(153), 1,
      aux_sym_text_repeat1,
    ACTIONS(583), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(606), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5541] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_text_repeat1,
    ACTIONS(588), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(608), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5564] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(611), 11,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
  [5581] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__eol,
    ACTIONS(613), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5600] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym__eol,
    ACTIONS(617), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5619] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(617), 11,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
  [5636] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(621), 11,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
  [5653] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(613), 11,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
  [5670] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym__eol,
    ACTIONS(611), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5689] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__eol,
    ACTIONS(613), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
  [5708] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_text_repeat1,
    ACTIONS(583), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(625), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5731] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym__eol,
    ACTIONS(617), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
  [5750] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DOT,
    ACTIONS(627), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [5769] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__eol,
    ACTIONS(621), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
  [5788] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym__eol,
    ACTIONS(611), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
  [5807] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__eol,
    ACTIONS(621), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5826] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(239), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [5842] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_DASH,
    STATE(175), 1,
      aux_sym_gather_repeat1,
    ACTIONS(633), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [5862] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__eol,
    ACTIONS(621), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [5880] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym__eol,
    ACTIONS(617), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [5898] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym__eol,
    ACTIONS(611), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [5916] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_text_repeat1,
    ACTIONS(588), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(638), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5936] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(627), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [5952] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_text_repeat1,
    ACTIONS(583), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(641), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5972] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__eol,
    ACTIONS(613), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [5990] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_text_repeat1,
    ACTIONS(588), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(643), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6012] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_text_repeat1,
    ACTIONS(583), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(646), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6034] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(301), 10,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [6050] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(613), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6065] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(621), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6080] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(617), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6095] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(611), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6110] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__eol,
    ACTIONS(613), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6127] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__eol,
    ACTIONS(621), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6144] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym__eol,
    ACTIONS(617), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6161] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym__eol,
    ACTIONS(611), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    ACTIONS(650), 1,
      sym__block_start,
    STATE(201), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(203), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__block_start,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
    STATE(194), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(210), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6214] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__block_start,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
    STATE(201), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(210), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6232] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym__divert_mark,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(291), 1,
      sym_params,
    STATE(218), 2,
      sym__param,
      sym_divert,
  [6252] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(658), 1,
      aux_sym__knot_mark_token1,
    STATE(217), 1,
      sym_stitch,
    STATE(245), 1,
      sym__knot_mark,
    STATE(200), 2,
      sym_knot,
      sym_function_declaration,
  [6272] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym_tag,
    ACTIONS(662), 1,
      sym__divert_mark,
    ACTIONS(664), 1,
      sym__eol,
    STATE(216), 1,
      aux_sym__content_item_repeat1,
    STATE(219), 1,
      sym_divert,
  [6291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym__block_start,
    ACTIONS(668), 1,
      sym__block_end,
    STATE(206), 1,
      sym_content_block,
    STATE(207), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    ACTIONS(672), 1,
      sym__block_start,
    STATE(201), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym__block_start,
    ACTIONS(677), 1,
      sym__block_end,
    STATE(208), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      ts_builtin_sym_end,
    ACTIONS(681), 1,
      sym__block_start,
    STATE(212), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
    ACTIONS(681), 1,
      sym__block_start,
    STATE(212), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__divert_mark,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    ACTIONS(685), 1,
      sym__eol,
    STATE(278), 1,
      sym_divert,
  [6380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym__block_start,
    ACTIONS(687), 1,
      sym__block_end,
    STATE(202), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym__block_start,
    ACTIONS(687), 1,
      sym__block_end,
    STATE(208), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym__block_end,
    ACTIONS(689), 1,
      sym__block_start,
    STATE(208), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym__divert_mark,
    ACTIONS(692), 1,
      sym_identifier,
    STATE(241), 2,
      sym__param,
      sym_divert,
  [6436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    ACTIONS(681), 1,
      sym__block_start,
    STATE(212), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym__knot_mark_token1,
    STATE(245), 1,
      sym__knot_mark,
    STATE(200), 2,
      sym_knot,
      sym_function_declaration,
  [6464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
    ACTIONS(696), 1,
      sym__block_start,
    STATE(212), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_tag,
    ACTIONS(701), 1,
      sym__eol,
    STATE(226), 1,
      aux_sym__content_item_repeat1,
  [6491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_args_repeat1,
  [6504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_args_repeat1,
  [6517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_tag,
    ACTIONS(709), 1,
      sym__eol,
    STATE(226), 1,
      aux_sym__content_item_repeat1,
  [6530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      sym__block_start,
    ACTIONS(713), 1,
      sym__block_end,
    STATE(281), 1,
      sym_content_block,
  [6543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_params_repeat1,
  [6556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym__eol,
    ACTIONS(719), 1,
      sym_tag,
    STATE(231), 1,
      aux_sym__content_item_repeat1,
  [6569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_identifier,
    ACTIONS(723), 1,
      sym__eol,
    STATE(257), 1,
      sym_qualified_name,
  [6582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(725), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(725), 2,
      sym__eol,
      sym_tag,
  [6604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_params_repeat1,
  [6617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_return,
    STATE(267), 2,
      sym__code_stmt,
      sym_return,
  [6628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(736), 1,
      sym__eol,
    STATE(274), 1,
      sym__knot_mark,
  [6641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_tag,
    ACTIONS(741), 1,
      sym__eol,
    STATE(226), 1,
      aux_sym__content_item_repeat1,
  [6654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__divert_mark,
    ACTIONS(743), 1,
      sym__eol,
    STATE(290), 1,
      sym_divert,
  [6667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      sym__block_start,
    ACTIONS(745), 1,
      sym__block_end,
    STATE(292), 1,
      sym_content_block,
  [6680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_args_repeat1,
  [6693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_params_repeat1,
  [6706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_tag,
    ACTIONS(754), 1,
      sym__eol,
    STATE(226), 1,
      aux_sym__content_item_repeat1,
  [6719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym_identifier,
    STATE(180), 1,
      sym_qualified_name,
  [6737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 2,
      sym__block_start,
      sym__block_end,
  [6745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 2,
      sym__eol,
      sym__divert_mark,
  [6761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_EQ,
    STATE(228), 1,
      sym_stitch,
  [6779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 2,
      sym__eol,
      sym__divert_mark,
  [6787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 2,
      sym__eol,
      sym__divert_mark,
  [6795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_identifier,
    STATE(257), 1,
      sym_qualified_name,
  [6813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 2,
      sym__block_start,
      sym__block_end,
  [6821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 2,
      sym__block_start,
      sym__block_end,
  [6829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_function,
    ACTIONS(774), 1,
      sym_identifier,
  [6839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 2,
      sym__block_start,
      sym__block_end,
  [6847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 2,
      sym__block_start,
      sym__block_end,
  [6855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 2,
      sym__block_start,
      sym__block_end,
  [6863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 2,
      sym__block_start,
      sym__block_end,
  [6879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 2,
      sym__block_start,
      sym__block_end,
  [6895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_identifier,
    STATE(232), 1,
      sym_qualified_name,
  [6905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 2,
      sym__eol,
      sym__divert_mark,
  [6929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 2,
      sym__eol,
      sym_tag,
  [6937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_EQ,
    STATE(217), 1,
      sym_stitch,
  [6955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym__eol,
  [6962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym__eol,
  [6969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym__block_end,
  [6976] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(800), 1,
      aux_sym_todo_comment_token1,
  [6983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__eol,
  [6990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__eol,
  [6997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym_identifier,
  [7004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym__eol,
  [7011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__eol,
  [7018] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LF,
  [7025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__eol,
  [7032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym_identifier,
  [7039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LPAREN,
  [7046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACK,
  [7053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__eol,
  [7060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
  [7067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym__eol,
  [7074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_identifier,
  [7081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__eol,
  [7088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym__eol,
  [7095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [7102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym__block_end,
  [7109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_LBRACE2,
  [7116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym__eol,
  [7123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_COLON,
  [7130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
  [7137] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym_include_token2,
  [7144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym_identifier,
  [7151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_identifier,
  [7158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      ts_builtin_sym_end,
  [7165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__eol,
  [7172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
  [7179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym__block_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 244,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 396,
  [SMALL_STATE(8)] = 472,
  [SMALL_STATE(9)] = 545,
  [SMALL_STATE(10)] = 600,
  [SMALL_STATE(11)] = 655,
  [SMALL_STATE(12)] = 701,
  [SMALL_STATE(13)] = 747,
  [SMALL_STATE(14)] = 793,
  [SMALL_STATE(15)] = 839,
  [SMALL_STATE(16)] = 885,
  [SMALL_STATE(17)] = 931,
  [SMALL_STATE(18)] = 973,
  [SMALL_STATE(19)] = 1003,
  [SMALL_STATE(20)] = 1045,
  [SMALL_STATE(21)] = 1083,
  [SMALL_STATE(22)] = 1117,
  [SMALL_STATE(23)] = 1161,
  [SMALL_STATE(24)] = 1205,
  [SMALL_STATE(25)] = 1235,
  [SMALL_STATE(26)] = 1275,
  [SMALL_STATE(27)] = 1311,
  [SMALL_STATE(28)] = 1352,
  [SMALL_STATE(29)] = 1377,
  [SMALL_STATE(30)] = 1415,
  [SMALL_STATE(31)] = 1455,
  [SMALL_STATE(32)] = 1493,
  [SMALL_STATE(33)] = 1521,
  [SMALL_STATE(34)] = 1545,
  [SMALL_STATE(35)] = 1583,
  [SMALL_STATE(36)] = 1621,
  [SMALL_STATE(37)] = 1659,
  [SMALL_STATE(38)] = 1697,
  [SMALL_STATE(39)] = 1737,
  [SMALL_STATE(40)] = 1775,
  [SMALL_STATE(41)] = 1813,
  [SMALL_STATE(42)] = 1851,
  [SMALL_STATE(43)] = 1889,
  [SMALL_STATE(44)] = 1927,
  [SMALL_STATE(45)] = 1965,
  [SMALL_STATE(46)] = 2003,
  [SMALL_STATE(47)] = 2027,
  [SMALL_STATE(48)] = 2065,
  [SMALL_STATE(49)] = 2103,
  [SMALL_STATE(50)] = 2141,
  [SMALL_STATE(51)] = 2165,
  [SMALL_STATE(52)] = 2189,
  [SMALL_STATE(53)] = 2227,
  [SMALL_STATE(54)] = 2267,
  [SMALL_STATE(55)] = 2305,
  [SMALL_STATE(56)] = 2343,
  [SMALL_STATE(57)] = 2381,
  [SMALL_STATE(58)] = 2419,
  [SMALL_STATE(59)] = 2449,
  [SMALL_STATE(60)] = 2487,
  [SMALL_STATE(61)] = 2525,
  [SMALL_STATE(62)] = 2553,
  [SMALL_STATE(63)] = 2593,
  [SMALL_STATE(64)] = 2633,
  [SMALL_STATE(65)] = 2669,
  [SMALL_STATE(66)] = 2703,
  [SMALL_STATE(67)] = 2727,
  [SMALL_STATE(68)] = 2751,
  [SMALL_STATE(69)] = 2779,
  [SMALL_STATE(70)] = 2817,
  [SMALL_STATE(71)] = 2855,
  [SMALL_STATE(72)] = 2893,
  [SMALL_STATE(73)] = 2927,
  [SMALL_STATE(74)] = 2959,
  [SMALL_STATE(75)] = 2997,
  [SMALL_STATE(76)] = 3029,
  [SMALL_STATE(77)] = 3064,
  [SMALL_STATE(78)] = 3099,
  [SMALL_STATE(79)] = 3134,
  [SMALL_STATE(80)] = 3167,
  [SMALL_STATE(81)] = 3200,
  [SMALL_STATE(82)] = 3235,
  [SMALL_STATE(83)] = 3270,
  [SMALL_STATE(84)] = 3305,
  [SMALL_STATE(85)] = 3328,
  [SMALL_STATE(86)] = 3363,
  [SMALL_STATE(87)] = 3398,
  [SMALL_STATE(88)] = 3433,
  [SMALL_STATE(89)] = 3468,
  [SMALL_STATE(90)] = 3503,
  [SMALL_STATE(91)] = 3538,
  [SMALL_STATE(92)] = 3573,
  [SMALL_STATE(93)] = 3604,
  [SMALL_STATE(94)] = 3635,
  [SMALL_STATE(95)] = 3670,
  [SMALL_STATE(96)] = 3705,
  [SMALL_STATE(97)] = 3738,
  [SMALL_STATE(98)] = 3773,
  [SMALL_STATE(99)] = 3808,
  [SMALL_STATE(100)] = 3843,
  [SMALL_STATE(101)] = 3878,
  [SMALL_STATE(102)] = 3911,
  [SMALL_STATE(103)] = 3946,
  [SMALL_STATE(104)] = 3981,
  [SMALL_STATE(105)] = 4008,
  [SMALL_STATE(106)] = 4043,
  [SMALL_STATE(107)] = 4078,
  [SMALL_STATE(108)] = 4113,
  [SMALL_STATE(109)] = 4135,
  [SMALL_STATE(110)] = 4167,
  [SMALL_STATE(111)] = 4201,
  [SMALL_STATE(112)] = 4223,
  [SMALL_STATE(113)] = 4255,
  [SMALL_STATE(114)] = 4285,
  [SMALL_STATE(115)] = 4319,
  [SMALL_STATE(116)] = 4347,
  [SMALL_STATE(117)] = 4369,
  [SMALL_STATE(118)] = 4403,
  [SMALL_STATE(119)] = 4435,
  [SMALL_STATE(120)] = 4457,
  [SMALL_STATE(121)] = 4489,
  [SMALL_STATE(122)] = 4515,
  [SMALL_STATE(123)] = 4537,
  [SMALL_STATE(124)] = 4571,
  [SMALL_STATE(125)] = 4605,
  [SMALL_STATE(126)] = 4637,
  [SMALL_STATE(127)] = 4666,
  [SMALL_STATE(128)] = 4685,
  [SMALL_STATE(129)] = 4704,
  [SMALL_STATE(130)] = 4723,
  [SMALL_STATE(131)] = 4754,
  [SMALL_STATE(132)] = 4785,
  [SMALL_STATE(133)] = 4806,
  [SMALL_STATE(134)] = 4837,
  [SMALL_STATE(135)] = 4868,
  [SMALL_STATE(136)] = 4899,
  [SMALL_STATE(137)] = 4930,
  [SMALL_STATE(138)] = 4961,
  [SMALL_STATE(139)] = 4992,
  [SMALL_STATE(140)] = 5023,
  [SMALL_STATE(141)] = 5054,
  [SMALL_STATE(142)] = 5085,
  [SMALL_STATE(143)] = 5116,
  [SMALL_STATE(144)] = 5145,
  [SMALL_STATE(145)] = 5176,
  [SMALL_STATE(146)] = 5207,
  [SMALL_STATE(147)] = 5238,
  [SMALL_STATE(148)] = 5269,
  [SMALL_STATE(149)] = 5300,
  [SMALL_STATE(150)] = 5329,
  [SMALL_STATE(151)] = 5350,
  [SMALL_STATE(152)] = 5379,
  [SMALL_STATE(153)] = 5401,
  [SMALL_STATE(154)] = 5425,
  [SMALL_STATE(155)] = 5449,
  [SMALL_STATE(156)] = 5471,
  [SMALL_STATE(157)] = 5495,
  [SMALL_STATE(158)] = 5517,
  [SMALL_STATE(159)] = 5541,
  [SMALL_STATE(160)] = 5564,
  [SMALL_STATE(161)] = 5581,
  [SMALL_STATE(162)] = 5600,
  [SMALL_STATE(163)] = 5619,
  [SMALL_STATE(164)] = 5636,
  [SMALL_STATE(165)] = 5653,
  [SMALL_STATE(166)] = 5670,
  [SMALL_STATE(167)] = 5689,
  [SMALL_STATE(168)] = 5708,
  [SMALL_STATE(169)] = 5731,
  [SMALL_STATE(170)] = 5750,
  [SMALL_STATE(171)] = 5769,
  [SMALL_STATE(172)] = 5788,
  [SMALL_STATE(173)] = 5807,
  [SMALL_STATE(174)] = 5826,
  [SMALL_STATE(175)] = 5842,
  [SMALL_STATE(176)] = 5862,
  [SMALL_STATE(177)] = 5880,
  [SMALL_STATE(178)] = 5898,
  [SMALL_STATE(179)] = 5916,
  [SMALL_STATE(180)] = 5936,
  [SMALL_STATE(181)] = 5952,
  [SMALL_STATE(182)] = 5972,
  [SMALL_STATE(183)] = 5990,
  [SMALL_STATE(184)] = 6012,
  [SMALL_STATE(185)] = 6034,
  [SMALL_STATE(186)] = 6050,
  [SMALL_STATE(187)] = 6065,
  [SMALL_STATE(188)] = 6080,
  [SMALL_STATE(189)] = 6095,
  [SMALL_STATE(190)] = 6110,
  [SMALL_STATE(191)] = 6127,
  [SMALL_STATE(192)] = 6144,
  [SMALL_STATE(193)] = 6161,
  [SMALL_STATE(194)] = 6178,
  [SMALL_STATE(195)] = 6196,
  [SMALL_STATE(196)] = 6214,
  [SMALL_STATE(197)] = 6232,
  [SMALL_STATE(198)] = 6252,
  [SMALL_STATE(199)] = 6272,
  [SMALL_STATE(200)] = 6291,
  [SMALL_STATE(201)] = 6308,
  [SMALL_STATE(202)] = 6322,
  [SMALL_STATE(203)] = 6336,
  [SMALL_STATE(204)] = 6350,
  [SMALL_STATE(205)] = 6364,
  [SMALL_STATE(206)] = 6380,
  [SMALL_STATE(207)] = 6394,
  [SMALL_STATE(208)] = 6408,
  [SMALL_STATE(209)] = 6422,
  [SMALL_STATE(210)] = 6436,
  [SMALL_STATE(211)] = 6450,
  [SMALL_STATE(212)] = 6464,
  [SMALL_STATE(213)] = 6478,
  [SMALL_STATE(214)] = 6491,
  [SMALL_STATE(215)] = 6504,
  [SMALL_STATE(216)] = 6517,
  [SMALL_STATE(217)] = 6530,
  [SMALL_STATE(218)] = 6543,
  [SMALL_STATE(219)] = 6556,
  [SMALL_STATE(220)] = 6569,
  [SMALL_STATE(221)] = 6582,
  [SMALL_STATE(222)] = 6593,
  [SMALL_STATE(223)] = 6604,
  [SMALL_STATE(224)] = 6617,
  [SMALL_STATE(225)] = 6628,
  [SMALL_STATE(226)] = 6641,
  [SMALL_STATE(227)] = 6654,
  [SMALL_STATE(228)] = 6667,
  [SMALL_STATE(229)] = 6680,
  [SMALL_STATE(230)] = 6693,
  [SMALL_STATE(231)] = 6706,
  [SMALL_STATE(232)] = 6719,
  [SMALL_STATE(233)] = 6727,
  [SMALL_STATE(234)] = 6737,
  [SMALL_STATE(235)] = 6745,
  [SMALL_STATE(236)] = 6753,
  [SMALL_STATE(237)] = 6761,
  [SMALL_STATE(238)] = 6769,
  [SMALL_STATE(239)] = 6779,
  [SMALL_STATE(240)] = 6787,
  [SMALL_STATE(241)] = 6795,
  [SMALL_STATE(242)] = 6803,
  [SMALL_STATE(243)] = 6813,
  [SMALL_STATE(244)] = 6821,
  [SMALL_STATE(245)] = 6829,
  [SMALL_STATE(246)] = 6839,
  [SMALL_STATE(247)] = 6847,
  [SMALL_STATE(248)] = 6855,
  [SMALL_STATE(249)] = 6863,
  [SMALL_STATE(250)] = 6871,
  [SMALL_STATE(251)] = 6879,
  [SMALL_STATE(252)] = 6887,
  [SMALL_STATE(253)] = 6895,
  [SMALL_STATE(254)] = 6905,
  [SMALL_STATE(255)] = 6913,
  [SMALL_STATE(256)] = 6921,
  [SMALL_STATE(257)] = 6929,
  [SMALL_STATE(258)] = 6937,
  [SMALL_STATE(259)] = 6945,
  [SMALL_STATE(260)] = 6955,
  [SMALL_STATE(261)] = 6962,
  [SMALL_STATE(262)] = 6969,
  [SMALL_STATE(263)] = 6976,
  [SMALL_STATE(264)] = 6983,
  [SMALL_STATE(265)] = 6990,
  [SMALL_STATE(266)] = 6997,
  [SMALL_STATE(267)] = 7004,
  [SMALL_STATE(268)] = 7011,
  [SMALL_STATE(269)] = 7018,
  [SMALL_STATE(270)] = 7025,
  [SMALL_STATE(271)] = 7032,
  [SMALL_STATE(272)] = 7039,
  [SMALL_STATE(273)] = 7046,
  [SMALL_STATE(274)] = 7053,
  [SMALL_STATE(275)] = 7060,
  [SMALL_STATE(276)] = 7067,
  [SMALL_STATE(277)] = 7074,
  [SMALL_STATE(278)] = 7081,
  [SMALL_STATE(279)] = 7088,
  [SMALL_STATE(280)] = 7095,
  [SMALL_STATE(281)] = 7102,
  [SMALL_STATE(282)] = 7109,
  [SMALL_STATE(283)] = 7116,
  [SMALL_STATE(284)] = 7123,
  [SMALL_STATE(285)] = 7130,
  [SMALL_STATE(286)] = 7137,
  [SMALL_STATE(287)] = 7144,
  [SMALL_STATE(288)] = 7151,
  [SMALL_STATE(289)] = 7158,
  [SMALL_STATE(290)] = 7165,
  [SMALL_STATE(291)] = 7172,
  [SMALL_STATE(292)] = 7179,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(158),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(96),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(14),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(224),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(213),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(91),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(242),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(286),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(128),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(284),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 15),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 15),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 11),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 11),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_item, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_item, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 21),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 21),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 16),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 16),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(152),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(93),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(16),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(74),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 13),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 13),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(154),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(79),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(11),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(158),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(80),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(14),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(152),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(92),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(16),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 4, .production_id = 20),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 20),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(282),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(148),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(168),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(120),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(15),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(181),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(126),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(12),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(184),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(149),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(13),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(153),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(155),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(156),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(159),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 3),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 10),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 10),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 8),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 8),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 9),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divert, 2, .production_id = 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 9),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2), SHIFT_REPEAT(175),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(179),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(183),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(259),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(238),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2), SHIFT_REPEAT(211),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(209),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2), SHIFT_REPEAT(226),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(54),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 22),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 23),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 18),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 19),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 3),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 17),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 6),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 4, .production_id = 6),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 6),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 4),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 5),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 12),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 14),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 4),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [848] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 5),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eol = 0,
  ts_external_token__block_start = 1,
  ts_external_token__block_end = 2,
  ts_external_token__error_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eol] = sym__eol,
  [ts_external_token__block_start] = sym__block_start,
  [ts_external_token__block_end] = sym__block_end,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eol] = true,
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__block_start] = true,
  },
  [3] = {
    [ts_external_token__block_end] = true,
  },
  [4] = {
    [ts_external_token__eol] = true,
  },
  [5] = {
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
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
