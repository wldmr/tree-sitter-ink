#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 296
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 3
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 9
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
  anon_sym_STAR = 17,
  anon_sym_PLUS = 18,
  anon_sym_BSLASH = 19,
  anon_sym_DASH = 20,
  aux_sym_condition_token1 = 21,
  anon_sym_LBRACE2 = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  aux_sym__knot_mark_token1 = 25,
  sym__divert_mark = 26,
  anon_sym_EQ = 27,
  anon_sym_LF = 28,
  anon_sym_function = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_return = 32,
  anon_sym_COMMA = 33,
  aux_sym_include_token1 = 34,
  aux_sym_include_token2 = 35,
  aux_sym_expr_token1 = 36,
  anon_sym_false = 37,
  anon_sym_true = 38,
  anon_sym_not = 39,
  anon_sym_SLASH = 40,
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
  sym_todo_comment = 92,
  aux_sym_ink_repeat1 = 93,
  aux_sym_ink_repeat2 = 94,
  aux_sym_content_block_repeat1 = 95,
  aux_sym__content_item_repeat1 = 96,
  aux_sym_text_repeat1 = 97,
  aux_sym_flow_repeat1 = 98,
  aux_sym_logic_repeat1 = 99,
  aux_sym_choice_repeat1 = 100,
  aux_sym_choice_repeat2 = 101,
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
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
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
  [anon_sym_SLASH] = "/",
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
  [sym_todo_comment] = "todo_comment",
  [aux_sym_ink_repeat1] = "ink_repeat1",
  [aux_sym_ink_repeat2] = "ink_repeat2",
  [aux_sym_content_block_repeat1] = "content_block_repeat1",
  [aux_sym__content_item_repeat1] = "_content_item_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_flow_repeat1] = "flow_repeat1",
  [aux_sym_logic_repeat1] = "logic_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [aux_sym_choice_repeat2] = "choice_repeat2",
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
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym_todo_comment] = sym_todo_comment,
  [aux_sym_ink_repeat1] = aux_sym_ink_repeat1,
  [aux_sym_ink_repeat2] = aux_sym_ink_repeat2,
  [aux_sym_content_block_repeat1] = aux_sym_content_block_repeat1,
  [aux_sym__content_item_repeat1] = aux_sym__content_item_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_flow_repeat1] = aux_sym_flow_repeat1,
  [aux_sym_logic_repeat1] = aux_sym_logic_repeat1,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [aux_sym_choice_repeat2] = aux_sym_choice_repeat2,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
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
  [anon_sym_SLASH] = {
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
  [aux_sym_choice_repeat2] = {
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
  field_name = 4,
  field_op = 5,
  field_params = 6,
  field_prefix = 7,
  field_target = 8,
  field_temporary = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_final] = "final",
  [field_main] = "main",
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
  [4] = {.index = 2, .length = 3},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 3},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 1},
  [17] = {.index = 21, .length = 1},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 2},
  [20] = {.index = 26, .length = 2},
  [21] = {.index = 28, .length = 2},
  [22] = {.index = 30, .length = 2},
  [23] = {.index = 32, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 1},
  [1] =
    {field_main, 0},
  [2] =
    {field_final, 1, .inherited = true},
    {field_main, 1, .inherited = true},
    {field_temporary, 1, .inherited = true},
  [5] =
    {field_final, 0, .inherited = true},
    {field_main, 0, .inherited = true},
    {field_temporary, 0, .inherited = true},
  [8] =
    {field_name, 1},
  [9] =
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_temporary, 2, .inherited = true},
  [12] =
    {field_prefix, 1},
  [13] =
    {field_op, 0},
  [14] =
    {field_final, 2},
  [15] =
    {field_temporary, 1},
  [16] =
    {field_final, 3, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_temporary, 3, .inherited = true},
  [19] =
    {field_op, 1},
  [20] =
    {field_name, 0},
  [21] =
    {field_name, 2},
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
    {field_args, 2},
    {field_name, 0},
  [30] =
    {field_name, 2},
    {field_params, 4},
  [32] =
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
  [8] = 4,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 13,
  [16] = 13,
  [17] = 13,
  [18] = 13,
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
  [30] = 20,
  [31] = 31,
  [32] = 32,
  [33] = 24,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 35,
  [39] = 34,
  [40] = 40,
  [41] = 37,
  [42] = 35,
  [43] = 43,
  [44] = 34,
  [45] = 32,
  [46] = 37,
  [47] = 37,
  [48] = 35,
  [49] = 34,
  [50] = 32,
  [51] = 37,
  [52] = 52,
  [53] = 35,
  [54] = 34,
  [55] = 32,
  [56] = 32,
  [57] = 57,
  [58] = 58,
  [59] = 37,
  [60] = 60,
  [61] = 61,
  [62] = 23,
  [63] = 28,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 21,
  [68] = 22,
  [69] = 69,
  [70] = 26,
  [71] = 32,
  [72] = 34,
  [73] = 35,
  [74] = 74,
  [75] = 75,
  [76] = 40,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 81,
  [84] = 82,
  [85] = 81,
  [86] = 86,
  [87] = 86,
  [88] = 80,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 92,
  [93] = 86,
  [94] = 94,
  [95] = 95,
  [96] = 82,
  [97] = 97,
  [98] = 89,
  [99] = 80,
  [100] = 86,
  [101] = 89,
  [102] = 80,
  [103] = 86,
  [104] = 104,
  [105] = 89,
  [106] = 80,
  [107] = 86,
  [108] = 65,
  [109] = 89,
  [110] = 80,
  [111] = 111,
  [112] = 74,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 115,
  [119] = 78,
  [120] = 69,
  [121] = 64,
  [122] = 61,
  [123] = 123,
  [124] = 57,
  [125] = 82,
  [126] = 36,
  [127] = 77,
  [128] = 58,
  [129] = 81,
  [130] = 130,
  [131] = 81,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 82,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 81,
  [141] = 135,
  [142] = 142,
  [143] = 138,
  [144] = 144,
  [145] = 145,
  [146] = 82,
  [147] = 132,
  [148] = 139,
  [149] = 137,
  [150] = 150,
  [151] = 142,
  [152] = 152,
  [153] = 145,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 155,
  [159] = 156,
  [160] = 155,
  [161] = 156,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 156,
  [166] = 166,
  [167] = 163,
  [168] = 166,
  [169] = 169,
  [170] = 164,
  [171] = 162,
  [172] = 155,
  [173] = 162,
  [174] = 166,
  [175] = 163,
  [176] = 164,
  [177] = 155,
  [178] = 166,
  [179] = 179,
  [180] = 164,
  [181] = 181,
  [182] = 156,
  [183] = 183,
  [184] = 155,
  [185] = 162,
  [186] = 156,
  [187] = 65,
  [188] = 163,
  [189] = 166,
  [190] = 162,
  [191] = 163,
  [192] = 166,
  [193] = 162,
  [194] = 164,
  [195] = 163,
  [196] = 164,
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
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 205,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 169,
  [226] = 169,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 223,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 235,
  [239] = 237,
  [240] = 240,
  [241] = 235,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 242,
  [251] = 251,
  [252] = 183,
  [253] = 27,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 183,
  [258] = 258,
  [259] = 27,
  [260] = 260,
  [261] = 261,
  [262] = 245,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 263,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 263,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 267,
  [292] = 292,
  [293] = 276,
  [294] = 27,
  [295] = 295,
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
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(148);
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
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
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
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '{') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '#' &&
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
      if (lookahead == '[') ADVANCE(142);
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
      if (lookahead == '#') ADVANCE(73);
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
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
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
          lookahead != '#' &&
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
      if (lookahead == ']') ADVANCE(143);
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
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '/') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '/') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
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
      if (lookahead == '-') ADVANCE(138);
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
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 't') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(170);
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
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(170);
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
      if (lookahead == ')') ADVANCE(153);
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
      if (lookahead == '>') ADVANCE(145);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(145);
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
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(164);
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
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(150);
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
      if (lookahead == 't') ADVANCE(168);
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
          lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
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
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '|') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '~') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(156);
      if (!aux_sym_text_token1_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(148);
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
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
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
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '{') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
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
      if (lookahead == '[') ADVANCE(142);
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
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
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
    case 87:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
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
    case 88:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == '{') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (!aux_sym_text_token1_character_set_4(lookahead)) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(146);
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
      if (lookahead == '-') ADVANCE(138);
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
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '{') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__knot_mark_token1);
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__divert_mark);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_include_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(204);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(144);
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
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
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
      if (lookahead == 'n') ADVANCE(151);
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
      if (lookahead == 't') ADVANCE(169);
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
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 15, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 3},
  [5] = {.lex_state = 2, .external_lex_state = 3},
  [6] = {.lex_state = 2, .external_lex_state = 3},
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 2, .external_lex_state = 3},
  [9] = {.lex_state = 2, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 2, .external_lex_state = 3},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 2, .external_lex_state = 3},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 20, .external_lex_state = 4},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20, .external_lex_state = 4},
  [63] = {.lex_state = 20, .external_lex_state = 4},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 20, .external_lex_state = 4},
  [68] = {.lex_state = 20, .external_lex_state = 4},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20, .external_lex_state = 4},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20, .external_lex_state = 4},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 10, .external_lex_state = 4},
  [84] = {.lex_state = 6, .external_lex_state = 4},
  [85] = {.lex_state = 6, .external_lex_state = 4},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 11, .external_lex_state = 4},
  [92] = {.lex_state = 11, .external_lex_state = 4},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 10, .external_lex_state = 4},
  [97] = {.lex_state = 11, .external_lex_state = 4},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 20, .external_lex_state = 4},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 11, .external_lex_state = 4},
  [112] = {.lex_state = 20, .external_lex_state = 4},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 20, .external_lex_state = 4},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 20, .external_lex_state = 4},
  [120] = {.lex_state = 20, .external_lex_state = 4},
  [121] = {.lex_state = 20, .external_lex_state = 4},
  [122] = {.lex_state = 20, .external_lex_state = 4},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 20, .external_lex_state = 4},
  [125] = {.lex_state = 11, .external_lex_state = 4},
  [126] = {.lex_state = 20, .external_lex_state = 4},
  [127] = {.lex_state = 20, .external_lex_state = 4},
  [128] = {.lex_state = 20, .external_lex_state = 4},
  [129] = {.lex_state = 11, .external_lex_state = 4},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 18, .external_lex_state = 4},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 19},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 18, .external_lex_state = 4},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 6, .external_lex_state = 4},
  [156] = {.lex_state = 6, .external_lex_state = 4},
  [157] = {.lex_state = 16},
  [158] = {.lex_state = 10, .external_lex_state = 4},
  [159] = {.lex_state = 10, .external_lex_state = 4},
  [160] = {.lex_state = 16},
  [161] = {.lex_state = 16},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 6, .external_lex_state = 4},
  [165] = {.lex_state = 11, .external_lex_state = 4},
  [166] = {.lex_state = 6, .external_lex_state = 4},
  [167] = {.lex_state = 10, .external_lex_state = 4},
  [168] = {.lex_state = 10, .external_lex_state = 4},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 10, .external_lex_state = 4},
  [171] = {.lex_state = 10, .external_lex_state = 4},
  [172] = {.lex_state = 11, .external_lex_state = 4},
  [173] = {.lex_state = 16},
  [174] = {.lex_state = 16},
  [175] = {.lex_state = 6, .external_lex_state = 4},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 18, .external_lex_state = 4},
  [178] = {.lex_state = 11, .external_lex_state = 4},
  [179] = {.lex_state = 17},
  [180] = {.lex_state = 11, .external_lex_state = 4},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 11, .external_lex_state = 4},
  [186] = {.lex_state = 18, .external_lex_state = 4},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 11, .external_lex_state = 4},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 18, .external_lex_state = 4},
  [191] = {.lex_state = 18, .external_lex_state = 4},
  [192] = {.lex_state = 18, .external_lex_state = 4},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 18, .external_lex_state = 4},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 23},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 3},
  [203] = {.lex_state = 0, .external_lex_state = 4},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 3},
  [209] = {.lex_state = 0, .external_lex_state = 3},
  [210] = {.lex_state = 23},
  [211] = {.lex_state = 0, .external_lex_state = 4},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 3},
  [214] = {.lex_state = 0, .external_lex_state = 3},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 4},
  [217] = {.lex_state = 23, .external_lex_state = 4},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0, .external_lex_state = 3},
  [224] = {.lex_state = 0, .external_lex_state = 4},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0, .external_lex_state = 4},
  [227] = {.lex_state = 0, .external_lex_state = 4},
  [228] = {.lex_state = 0, .external_lex_state = 4},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 19, .external_lex_state = 4},
  [232] = {.lex_state = 0, .external_lex_state = 4},
  [233] = {.lex_state = 0, .external_lex_state = 3},
  [234] = {.lex_state = 0, .external_lex_state = 4},
  [235] = {.lex_state = 23},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 23},
  [239] = {.lex_state = 0, .external_lex_state = 3},
  [240] = {.lex_state = 0, .external_lex_state = 3},
  [241] = {.lex_state = 23},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 3},
  [246] = {.lex_state = 28},
  [247] = {.lex_state = 0, .external_lex_state = 4},
  [248] = {.lex_state = 0, .external_lex_state = 4},
  [249] = {.lex_state = 0, .external_lex_state = 3},
  [250] = {.lex_state = 19},
  [251] = {.lex_state = 0, .external_lex_state = 4},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0, .external_lex_state = 3},
  [254] = {.lex_state = 0, .external_lex_state = 3},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 4},
  [257] = {.lex_state = 0, .external_lex_state = 4},
  [258] = {.lex_state = 0, .external_lex_state = 3},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 3},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 23},
  [264] = {.lex_state = 13},
  [265] = {.lex_state = 0, .external_lex_state = 4},
  [266] = {.lex_state = 0, .external_lex_state = 4},
  [267] = {.lex_state = 0, .external_lex_state = 5},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 23},
  [270] = {.lex_state = 210},
  [271] = {.lex_state = 0, .external_lex_state = 4},
  [272] = {.lex_state = 0, .external_lex_state = 4},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0, .external_lex_state = 4},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 4},
  [279] = {.lex_state = 23},
  [280] = {.lex_state = 0, .external_lex_state = 4},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0, .external_lex_state = 4},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 23},
  [285] = {.lex_state = 0, .external_lex_state = 4},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0, .external_lex_state = 4},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 14},
  [290] = {.lex_state = 23},
  [291] = {.lex_state = 0, .external_lex_state = 5},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0, .external_lex_state = 5},
  [295] = {.lex_state = 0, .external_lex_state = 4},
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
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
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_ink] = STATE(292),
    [sym_content_block] = STATE(198),
    [sym_knot_block] = STATE(215),
    [sym_stitch_block] = STATE(201),
    [aux_sym_ink_repeat1] = STATE(201),
    [aux_sym_ink_repeat2] = STATE(215),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__block_start] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(35), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(95), 1,
      aux_sym_gather_repeat1,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(203), 1,
      sym_flow,
    STATE(223), 1,
      sym_stitch,
    STATE(224), 1,
      aux_sym__content_item_repeat1,
    STATE(246), 1,
      sym__knot_mark,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(202), 2,
      sym_knot,
      sym_function_declaration,
    STATE(8), 3,
      sym_content_block,
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
    STATE(287), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [93] = 22,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(35), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(95), 1,
      aux_sym_gather_repeat1,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(203), 1,
      sym_flow,
    STATE(224), 1,
      aux_sym__content_item_repeat1,
    STATE(233), 1,
      sym_stitch,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 3,
      sym_content_block,
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
    STATE(287), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [176] = 21,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(35), 1,
      sym__block_start,
    ACTIONS(37), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(95), 1,
      aux_sym_gather_repeat1,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(203), 1,
      sym_flow,
    STATE(224), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
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
    STATE(287), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [256] = 21,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(35), 1,
      sym__block_start,
    ACTIONS(39), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(95), 1,
      aux_sym_gather_repeat1,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(203), 1,
      sym_flow,
    STATE(224), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
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
    STATE(287), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [336] = 21,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(35), 1,
      sym__block_start,
    ACTIONS(41), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(95), 1,
      aux_sym_gather_repeat1,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(203), 1,
      sym_flow,
    STATE(224), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
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
    STATE(287), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [416] = 21,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_glue,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_TILDE,
    ACTIONS(55), 1,
      sym_tag,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(64), 1,
      sym__divert_mark,
    ACTIONS(67), 1,
      aux_sym_include_token1,
    ACTIONS(70), 1,
      anon_sym_TODO,
    ACTIONS(73), 1,
      sym__block_start,
    ACTIONS(76), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(95), 1,
      aux_sym_gather_repeat1,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(203), 1,
      sym_flow,
    STATE(224), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(58), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(96), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(43), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
    STATE(287), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [496] = 21,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(35), 1,
      sym__block_start,
    ACTIONS(78), 1,
      sym__block_end,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(95), 1,
      aux_sym_gather_repeat1,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(203), 1,
      sym_flow,
    STATE(224), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
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
    STATE(287), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [576] = 20,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(35), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(95), 1,
      aux_sym_gather_repeat1,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(203), 1,
      sym_flow,
    STATE(224), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 3,
      sym_content_block,
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
    STATE(287), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [653] = 20,
    ACTIONS(11), 1,
      sym_glue,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_tag,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      sym__divert_mark,
    ACTIONS(29), 1,
      aux_sym_include_token1,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_TODO,
    ACTIONS(35), 1,
      sym__block_start,
    STATE(11), 1,
      aux_sym_choice_repeat1,
    STATE(95), 1,
      aux_sym_gather_repeat1,
    STATE(159), 1,
      aux_sym_text_repeat1,
    STATE(203), 1,
      sym_flow,
    STATE(224), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(5), 3,
      sym_content_block,
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
    STATE(287), 7,
      sym_paragraph,
      sym_choice,
      sym_gather,
      sym_code,
      sym_divert,
      sym_include,
      sym_todo_comment,
  [730] = 17,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_BSLASH,
    ACTIONS(90), 1,
      aux_sym_condition_token1,
    ACTIONS(92), 1,
      anon_sym_LBRACE2,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym__divert_mark,
    STATE(66), 1,
      aux_sym_choice_repeat1,
    STATE(156), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(234), 1,
      sym__compound_choice_content,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(12), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    STATE(277), 2,
      sym__choice_content,
      sym_divert,
    STATE(84), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [792] = 15,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      aux_sym_condition_token1,
    ACTIONS(92), 1,
      anon_sym_LBRACE2,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym__divert_mark,
    ACTIONS(98), 1,
      anon_sym_BSLASH,
    STATE(156), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(234), 1,
      sym__compound_choice_content,
    STATE(104), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    STATE(268), 2,
      sym__choice_content,
      sym_divert,
    STATE(84), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [847] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_TILDE,
    ACTIONS(110), 1,
      anon_sym_BANG,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(106), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [893] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_TILDE,
    ACTIONS(118), 1,
      anon_sym_BANG,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    STATE(47), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(114), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [939] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      anon_sym_TILDE,
    ACTIONS(126), 1,
      anon_sym_BANG,
    ACTIONS(128), 1,
      anon_sym_PIPE,
    STATE(59), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(122), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [985] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_TILDE,
    ACTIONS(134), 1,
      anon_sym_BANG,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    STATE(37), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(130), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1031] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      anon_sym_TILDE,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(138), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1077] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_TILDE,
    ACTIONS(150), 1,
      anon_sym_BANG,
    ACTIONS(152), 1,
      anon_sym_PIPE,
    STATE(46), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(146), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1123] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym__divert_mark,
    STATE(156), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(234), 1,
      sym__compound_choice_content,
    STATE(285), 2,
      sym__choice_content,
      sym_divert,
    STATE(84), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1165] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_BANG,
    ACTIONS(158), 1,
      sym__divert_mark,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      aux_sym_expr_token1,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(276), 1,
      sym_args,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(166), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(219), 2,
      sym_divert,
      sym__arg,
    STATE(94), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1209] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 12,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(178), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1273] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1311] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1351] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym__divert_mark,
    STATE(156), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(234), 1,
      sym__compound_choice_content,
    STATE(280), 2,
      sym__choice_content,
      sym_divert,
    STATE(84), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(192), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(190), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1423] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(196), 2,
      sym__block_start,
      sym__block_end,
    ACTIONS(194), 16,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__divert_mark,
      aux_sym_include_token1,
      anon_sym_TODO,
  [1449] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(170), 10,
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
  [1485] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(200), 2,
      sym__block_start,
      sym__block_end,
    ACTIONS(198), 16,
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
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__divert_mark,
      aux_sym_include_token1,
      anon_sym_TODO,
  [1511] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_BANG,
    ACTIONS(158), 1,
      sym__divert_mark,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      aux_sym_expr_token1,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      sym_args,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(166), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(219), 2,
      sym_divert,
      sym__arg,
    STATE(94), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1555] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(204), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(206), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1596] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1634] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(214), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(170), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1672] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1710] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1748] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(170), 10,
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
  [1778] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1816] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1854] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1892] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(206), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1932] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1970] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2008] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(206), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2048] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2086] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2124] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2162] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2200] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2238] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2276] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2314] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2352] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_BANG,
    ACTIONS(158), 1,
      sym__divert_mark,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      aux_sym_expr_token1,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(166), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(236), 2,
      sym_divert,
      sym__arg,
    STATE(94), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [2390] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2428] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2466] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2504] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2542] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 12,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2570] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2602] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2640] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(206), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2704] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(214), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(220), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2740] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(170), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2822] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_choice_repeat1,
    ACTIONS(284), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(282), 13,
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
  [2848] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 10,
      sym__eol,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(178), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(190), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(192), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(190), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2960] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2998] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3036] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3074] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3108] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_glue,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(293), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3146] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(206), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 13,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [3234] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      sym__eol,
    ACTIONS(214), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(317), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3274] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3309] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_glue,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(332), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(81), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(323), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3340] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      sym_glue,
    STATE(161), 1,
      aux_sym_text_repeat1,
    ACTIONS(336), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(81), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3371] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_glue,
    ACTIONS(344), 1,
      anon_sym_LBRACE,
    ACTIONS(347), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_text_repeat1,
    ACTIONS(332), 2,
      sym_tag,
      sym__divert_mark,
    STATE(83), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(338), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3404] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(349), 1,
      sym_glue,
    ACTIONS(351), 1,
      sym__eol,
    STATE(156), 1,
      aux_sym_text_repeat1,
    ACTIONS(336), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(85), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(80), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3437] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__eol,
    ACTIONS(356), 1,
      sym_glue,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      aux_sym_text_repeat1,
    ACTIONS(332), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(85), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(353), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3470] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3505] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      anon_sym_PIPE,
    STATE(73), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3540] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3575] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3610] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3645] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_glue,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      sym__divert_mark,
    ACTIONS(380), 1,
      sym__eol,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(256), 1,
      sym_flow,
    STATE(125), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(372), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3680] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_glue,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(382), 1,
      sym__divert_mark,
    ACTIONS(384), 1,
      sym__eol,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(248), 1,
      sym_flow,
    STATE(125), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(372), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3715] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3750] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(204), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(206), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3785] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_glue,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_DASH,
    STATE(179), 1,
      aux_sym_gather_repeat1,
    STATE(186), 1,
      aux_sym_text_repeat1,
    STATE(278), 1,
      sym_flow,
    STATE(146), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(388), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3820] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__eol,
    ACTIONS(396), 1,
      sym_glue,
    STATE(159), 1,
      aux_sym_text_repeat1,
    ACTIONS(336), 2,
      sym_tag,
      sym__divert_mark,
    STATE(83), 3,
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
  [3853] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_glue,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym__divert_mark,
    ACTIONS(400), 1,
      sym__eol,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(247), 1,
      sym_flow,
    STATE(125), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(372), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3888] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(402), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3923] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    STATE(54), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3958] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    STATE(53), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3993] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4028] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(410), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4063] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    STATE(48), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4098] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym_condition_token1,
    ACTIONS(419), 1,
      anon_sym_LBRACE2,
    STATE(104), 2,
      sym_condition,
      aux_sym_choice_repeat2,
    ACTIONS(414), 11,
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
  [4125] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4160] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    STATE(44), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4195] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_PIPE,
    STATE(42), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 12,
      sym__eol,
      sym_tag,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4253] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(428), 1,
      anon_sym_PIPE,
    STATE(32), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4288] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_glue,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_logic_repeat1,
    STATE(157), 1,
      sym_flow,
    STATE(161), 1,
      aux_sym_text_repeat1,
    STATE(82), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(100), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4323] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_glue,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(432), 1,
      sym__divert_mark,
    ACTIONS(434), 1,
      sym__eol,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(251), 1,
      sym_flow,
    STATE(125), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(372), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4358] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(214), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(170), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4390] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_glue,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      aux_sym_text_repeat1,
    STATE(283), 1,
      sym_flow,
    STATE(136), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(436), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(206), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4456] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(206), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4490] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_glue,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      aux_sym_text_repeat1,
    STATE(281), 1,
      sym_flow,
    STATE(136), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(436), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4522] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(319), 1,
      sym__eol,
    ACTIONS(214), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(317), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(220), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4556] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(206), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(190), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4678] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(206), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(184), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(170), 10,
      sym__eol,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4738] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__divert_mark,
    ACTIONS(351), 1,
      sym__eol,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 1,
      sym_glue,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(129), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(372), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4770] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(170), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 11,
      sym__eol,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(218), 1,
      anon_sym_SLASH,
    ACTIONS(214), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(220), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(170), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4850] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym__divert_mark,
    ACTIONS(347), 1,
      sym__eol,
    ACTIONS(451), 1,
      sym_glue,
    ACTIONS(454), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      aux_sym_text_repeat1,
    STATE(129), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(448), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4882] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(457), 13,
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
  [4901] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    ACTIONS(462), 1,
      sym_glue,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      aux_sym_text_repeat1,
    STATE(131), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(459), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4930] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      aux_sym_expr_token1,
    ACTIONS(472), 1,
      sym_identifier,
    ACTIONS(154), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(470), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(118), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4961] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      aux_sym_expr_token1,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(480), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(117), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [4992] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_expr_token1,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(154), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(123), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5023] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(492), 1,
      aux_sym_expr_token1,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(494), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(126), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5054] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      sym_glue,
    STATE(182), 1,
      aux_sym_text_repeat1,
    STATE(131), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(436), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5083] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      aux_sym_expr_token1,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(154), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(502), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(74), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5114] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(506), 1,
      aux_sym_expr_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(508), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(122), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5145] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      aux_sym_expr_token1,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(154), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(514), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(58), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5176] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__eol,
    ACTIONS(521), 1,
      sym_glue,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      aux_sym_text_repeat1,
    STATE(140), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(518), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5205] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(527), 1,
      aux_sym_expr_token1,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(154), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(529), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(36), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5236] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      aux_sym_expr_token1,
    ACTIONS(537), 1,
      sym_identifier,
    ACTIONS(154), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(535), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(57), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5267] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(539), 1,
      aux_sym_expr_token1,
    ACTIONS(543), 1,
      sym_identifier,
    ACTIONS(154), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(541), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(61), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5298] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      aux_sym_expr_token1,
    ACTIONS(549), 1,
      sym_identifier,
    ACTIONS(154), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(547), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(114), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5329] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(551), 1,
      aux_sym_expr_token1,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(553), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(120), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5360] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__eol,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      sym_glue,
    STATE(186), 1,
      aux_sym_text_repeat1,
    STATE(140), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(388), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5389] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      aux_sym_expr_token1,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(154), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(561), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(115), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5420] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(565), 1,
      aux_sym_expr_token1,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(567), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(128), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5451] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(571), 1,
      aux_sym_expr_token1,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(573), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(112), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5482] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_condition_token1,
    ACTIONS(457), 12,
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
  [5503] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_not,
    ACTIONS(579), 1,
      aux_sym_expr_token1,
    ACTIONS(583), 1,
      sym_identifier,
    ACTIONS(474), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(581), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(124), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5534] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(585), 13,
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
  [5553] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      aux_sym_expr_token1,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(154), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(589), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(69), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5584] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(595), 1,
      aux_sym_condition_token1,
    ACTIONS(593), 12,
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
  [5605] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym__eol,
    STATE(155), 1,
      aux_sym_text_repeat1,
    ACTIONS(600), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(597), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5629] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym__eol,
    STATE(155), 1,
      aux_sym_text_repeat1,
    ACTIONS(606), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(604), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5653] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__divert_mark,
    STATE(181), 1,
      sym_divert,
    ACTIONS(610), 10,
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
  [5675] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym__eol,
    STATE(158), 1,
      aux_sym_text_repeat1,
    ACTIONS(600), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(614), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5699] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym__eol,
    STATE(158), 1,
      aux_sym_text_repeat1,
    ACTIONS(606), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(617), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5723] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(160), 1,
      aux_sym_text_repeat1,
    ACTIONS(600), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(619), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5745] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(160), 1,
      aux_sym_text_repeat1,
    ACTIONS(606), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(622), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5767] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__eol,
    ACTIONS(624), 10,
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
  [5786] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(628), 11,
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
  [5803] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__eol,
    ACTIONS(630), 10,
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
  [5822] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym__eol,
    STATE(172), 1,
      aux_sym_text_repeat1,
    ACTIONS(606), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(634), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5845] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__eol,
    ACTIONS(636), 10,
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
  [5864] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__eol,
    ACTIONS(628), 10,
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
  [5883] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__eol,
    ACTIONS(636), 10,
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
  [5902] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_DOT,
    ACTIONS(642), 10,
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
  [5921] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__eol,
    ACTIONS(630), 10,
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
  [5940] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__eol,
    ACTIONS(624), 10,
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
  [5959] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym__eol,
    STATE(172), 1,
      aux_sym_text_repeat1,
    ACTIONS(600), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(646), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5982] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(624), 11,
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
  [5999] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(636), 11,
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
  [6016] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__eol,
    ACTIONS(628), 10,
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
  [6035] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(630), 11,
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
  [6052] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym__eol,
    STATE(177), 1,
      aux_sym_text_repeat1,
    ACTIONS(600), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(649), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6074] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__eol,
    ACTIONS(636), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6092] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_DASH,
    STATE(179), 1,
      aux_sym_gather_repeat1,
    ACTIONS(652), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6112] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__eol,
    ACTIONS(630), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6130] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(305), 10,
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
  [6146] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(184), 1,
      aux_sym_text_repeat1,
    ACTIONS(606), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(657), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6166] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(642), 10,
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
  [6182] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(184), 1,
      aux_sym_text_repeat1,
    ACTIONS(600), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(659), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6202] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__eol,
    ACTIONS(624), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6220] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym__eol,
    STATE(177), 1,
      aux_sym_text_repeat1,
    ACTIONS(606), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(662), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6242] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(280), 10,
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
  [6258] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__eol,
    ACTIONS(628), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6276] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(636), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6291] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__eol,
    ACTIONS(624), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6308] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__eol,
    ACTIONS(628), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6325] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__eol,
    ACTIONS(636), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6342] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(624), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6357] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(630), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6372] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(628), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6387] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__eol,
    ACTIONS(630), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6404] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(664), 1,
      aux_sym__knot_mark_token1,
    STATE(223), 1,
      sym_stitch,
    STATE(246), 1,
      sym__knot_mark,
    STATE(202), 2,
      sym_knot,
      sym_function_declaration,
  [6424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(668), 1,
      sym__block_start,
    STATE(199), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(204), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6442] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym__block_start,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    STATE(205), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(212), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__divert_mark,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    ACTIONS(674), 1,
      sym_identifier,
    STATE(274), 1,
      sym_params,
    STATE(218), 2,
      sym__param,
      sym_divert,
  [6480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(668), 1,
      sym__block_start,
    STATE(204), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
    STATE(205), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__block_start,
    ACTIONS(678), 1,
      sym__block_end,
    STATE(208), 1,
      sym_content_block,
    STATE(209), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6515] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_tag,
    ACTIONS(682), 1,
      sym__divert_mark,
    ACTIONS(684), 1,
      sym__eol,
    STATE(227), 1,
      sym_divert,
    STATE(228), 1,
      aux_sym__content_item_repeat1,
  [6534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    ACTIONS(686), 1,
      sym__block_start,
    STATE(207), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      ts_builtin_sym_end,
    ACTIONS(690), 1,
      sym__block_start,
    STATE(205), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym__knot_mark_token1,
    STATE(246), 1,
      sym__knot_mark,
    STATE(202), 2,
      sym_knot,
      sym_function_declaration,
  [6576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      ts_builtin_sym_end,
    ACTIONS(695), 1,
      sym__block_start,
    STATE(207), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__block_start,
    ACTIONS(700), 1,
      sym__block_end,
    STATE(214), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__block_start,
    ACTIONS(700), 1,
      sym__block_end,
    STATE(213), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__divert_mark,
    ACTIONS(702), 1,
      sym_identifier,
    STATE(243), 2,
      sym__param,
      sym_divert,
  [6632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__divert_mark,
    ACTIONS(704), 1,
      anon_sym_LBRACK,
    ACTIONS(706), 1,
      sym__eol,
    STATE(265), 1,
      sym_divert,
  [6648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__block_start,
    ACTIONS(708), 1,
      ts_builtin_sym_end,
    STATE(207), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__block_end,
    ACTIONS(710), 1,
      sym__block_start,
    STATE(213), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__block_start,
    ACTIONS(713), 1,
      sym__block_end,
    STATE(213), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(686), 1,
      sym__block_start,
    STATE(207), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_tag,
    ACTIONS(717), 1,
      sym__eol,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
  [6717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      sym__eol,
    STATE(257), 1,
      sym_qualified_name,
  [6730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_params_repeat1,
  [6743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_args_repeat1,
  [6756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_params_repeat1,
  [6769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_return,
    STATE(275), 2,
      sym__code_stmt,
      sym_return,
  [6780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_args_repeat1,
  [6793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym__block_start,
    ACTIONS(745), 1,
      sym__block_end,
    STATE(267), 1,
      sym_content_block,
  [6806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_tag,
    ACTIONS(747), 1,
      sym__eol,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
  [6819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(749), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(749), 2,
      sym__eol,
      sym_tag,
  [6841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_tag,
    ACTIONS(753), 1,
      sym__eol,
    STATE(216), 1,
      aux_sym__content_item_repeat1,
  [6854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_tag,
    ACTIONS(753), 1,
      sym__eol,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
  [6867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_params_repeat1,
  [6880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_args_repeat1,
  [6893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(761), 1,
      sym__eol,
    STATE(295), 1,
      sym__knot_mark,
  [6906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym_tag,
    ACTIONS(766), 1,
      sym__eol,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
  [6919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym__block_start,
    ACTIONS(768), 1,
      sym__block_end,
    STATE(291), 1,
      sym_content_block,
  [6932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__divert_mark,
    ACTIONS(770), 1,
      sym__eol,
    STATE(266), 1,
      sym_divert,
  [6945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_identifier,
    STATE(252), 1,
      sym_qualified_name,
  [6955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [6971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_identifier,
    STATE(183), 1,
      sym_qualified_name,
  [6981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 2,
      sym__block_start,
      sym__block_end,
  [6989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 2,
      sym__block_start,
      sym__block_end,
  [6997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
    STATE(257), 1,
      sym_qualified_name,
  [7007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_EQ,
    STATE(233), 1,
      sym_stitch,
  [7017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 2,
      sym__block_start,
      sym__block_end,
  [7041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_function,
    ACTIONS(788), 1,
      sym_identifier,
  [7051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 2,
      sym__eol,
      sym__divert_mark,
  [7059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 2,
      sym__eol,
      sym__divert_mark,
  [7067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 2,
      sym__block_start,
      sym__block_end,
  [7075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_EQ,
    STATE(223), 1,
      sym_stitch,
  [7085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      sym__eol,
      sym__divert_mark,
  [7093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      sym__block_start,
      sym__block_end,
  [7109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 2,
      sym__block_start,
      sym__block_end,
  [7117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 2,
      sym__eol,
      sym__divert_mark,
  [7133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 2,
      sym__eol,
      sym_tag,
  [7141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 2,
      sym__block_start,
      sym__block_end,
  [7149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 2,
      sym__block_start,
      sym__block_end,
  [7165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_identifier,
  [7188] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LF,
  [7195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__eol,
  [7202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__eol,
  [7209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym__block_end,
  [7216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym__eol,
  [7223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym_identifier,
  [7230] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_todo_comment_token1,
  [7237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym__eol,
  [7244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__eol,
  [7251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_LBRACE2,
  [7258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [7265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym__eol,
  [7272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
  [7279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym__eol,
  [7286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym__eol,
  [7293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym_identifier,
  [7300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym__eol,
  [7307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_RBRACK,
  [7314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym__eol,
  [7321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RBRACK,
  [7328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym_identifier,
  [7335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__eol,
  [7342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_LPAREN,
  [7349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__eol,
  [7356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_COLON,
  [7363] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_include_token2,
  [7370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym_identifier,
  [7377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym__block_end,
  [7384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
  [7391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
  [7398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym__block_end,
  [7405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 256,
  [SMALL_STATE(6)] = 336,
  [SMALL_STATE(7)] = 416,
  [SMALL_STATE(8)] = 496,
  [SMALL_STATE(9)] = 576,
  [SMALL_STATE(10)] = 653,
  [SMALL_STATE(11)] = 730,
  [SMALL_STATE(12)] = 792,
  [SMALL_STATE(13)] = 847,
  [SMALL_STATE(14)] = 893,
  [SMALL_STATE(15)] = 939,
  [SMALL_STATE(16)] = 985,
  [SMALL_STATE(17)] = 1031,
  [SMALL_STATE(18)] = 1077,
  [SMALL_STATE(19)] = 1123,
  [SMALL_STATE(20)] = 1165,
  [SMALL_STATE(21)] = 1209,
  [SMALL_STATE(22)] = 1243,
  [SMALL_STATE(23)] = 1273,
  [SMALL_STATE(24)] = 1311,
  [SMALL_STATE(25)] = 1351,
  [SMALL_STATE(26)] = 1393,
  [SMALL_STATE(27)] = 1423,
  [SMALL_STATE(28)] = 1449,
  [SMALL_STATE(29)] = 1485,
  [SMALL_STATE(30)] = 1511,
  [SMALL_STATE(31)] = 1555,
  [SMALL_STATE(32)] = 1596,
  [SMALL_STATE(33)] = 1634,
  [SMALL_STATE(34)] = 1672,
  [SMALL_STATE(35)] = 1710,
  [SMALL_STATE(36)] = 1748,
  [SMALL_STATE(37)] = 1778,
  [SMALL_STATE(38)] = 1816,
  [SMALL_STATE(39)] = 1854,
  [SMALL_STATE(40)] = 1892,
  [SMALL_STATE(41)] = 1932,
  [SMALL_STATE(42)] = 1970,
  [SMALL_STATE(43)] = 2008,
  [SMALL_STATE(44)] = 2048,
  [SMALL_STATE(45)] = 2086,
  [SMALL_STATE(46)] = 2124,
  [SMALL_STATE(47)] = 2162,
  [SMALL_STATE(48)] = 2200,
  [SMALL_STATE(49)] = 2238,
  [SMALL_STATE(50)] = 2276,
  [SMALL_STATE(51)] = 2314,
  [SMALL_STATE(52)] = 2352,
  [SMALL_STATE(53)] = 2390,
  [SMALL_STATE(54)] = 2428,
  [SMALL_STATE(55)] = 2466,
  [SMALL_STATE(56)] = 2504,
  [SMALL_STATE(57)] = 2542,
  [SMALL_STATE(58)] = 2570,
  [SMALL_STATE(59)] = 2602,
  [SMALL_STATE(60)] = 2640,
  [SMALL_STATE(61)] = 2680,
  [SMALL_STATE(62)] = 2704,
  [SMALL_STATE(63)] = 2740,
  [SMALL_STATE(64)] = 2774,
  [SMALL_STATE(65)] = 2798,
  [SMALL_STATE(66)] = 2822,
  [SMALL_STATE(67)] = 2848,
  [SMALL_STATE(68)] = 2880,
  [SMALL_STATE(69)] = 2908,
  [SMALL_STATE(70)] = 2932,
  [SMALL_STATE(71)] = 2960,
  [SMALL_STATE(72)] = 2998,
  [SMALL_STATE(73)] = 3036,
  [SMALL_STATE(74)] = 3074,
  [SMALL_STATE(75)] = 3108,
  [SMALL_STATE(76)] = 3146,
  [SMALL_STATE(77)] = 3186,
  [SMALL_STATE(78)] = 3210,
  [SMALL_STATE(79)] = 3234,
  [SMALL_STATE(80)] = 3274,
  [SMALL_STATE(81)] = 3309,
  [SMALL_STATE(82)] = 3340,
  [SMALL_STATE(83)] = 3371,
  [SMALL_STATE(84)] = 3404,
  [SMALL_STATE(85)] = 3437,
  [SMALL_STATE(86)] = 3470,
  [SMALL_STATE(87)] = 3505,
  [SMALL_STATE(88)] = 3540,
  [SMALL_STATE(89)] = 3575,
  [SMALL_STATE(90)] = 3610,
  [SMALL_STATE(91)] = 3645,
  [SMALL_STATE(92)] = 3680,
  [SMALL_STATE(93)] = 3715,
  [SMALL_STATE(94)] = 3750,
  [SMALL_STATE(95)] = 3785,
  [SMALL_STATE(96)] = 3820,
  [SMALL_STATE(97)] = 3853,
  [SMALL_STATE(98)] = 3888,
  [SMALL_STATE(99)] = 3923,
  [SMALL_STATE(100)] = 3958,
  [SMALL_STATE(101)] = 3993,
  [SMALL_STATE(102)] = 4028,
  [SMALL_STATE(103)] = 4063,
  [SMALL_STATE(104)] = 4098,
  [SMALL_STATE(105)] = 4125,
  [SMALL_STATE(106)] = 4160,
  [SMALL_STATE(107)] = 4195,
  [SMALL_STATE(108)] = 4230,
  [SMALL_STATE(109)] = 4253,
  [SMALL_STATE(110)] = 4288,
  [SMALL_STATE(111)] = 4323,
  [SMALL_STATE(112)] = 4358,
  [SMALL_STATE(113)] = 4390,
  [SMALL_STATE(114)] = 4422,
  [SMALL_STATE(115)] = 4456,
  [SMALL_STATE(116)] = 4490,
  [SMALL_STATE(117)] = 4522,
  [SMALL_STATE(118)] = 4556,
  [SMALL_STATE(119)] = 4590,
  [SMALL_STATE(120)] = 4612,
  [SMALL_STATE(121)] = 4634,
  [SMALL_STATE(122)] = 4656,
  [SMALL_STATE(123)] = 4678,
  [SMALL_STATE(124)] = 4712,
  [SMALL_STATE(125)] = 4738,
  [SMALL_STATE(126)] = 4770,
  [SMALL_STATE(127)] = 4798,
  [SMALL_STATE(128)] = 4820,
  [SMALL_STATE(129)] = 4850,
  [SMALL_STATE(130)] = 4882,
  [SMALL_STATE(131)] = 4901,
  [SMALL_STATE(132)] = 4930,
  [SMALL_STATE(133)] = 4961,
  [SMALL_STATE(134)] = 4992,
  [SMALL_STATE(135)] = 5023,
  [SMALL_STATE(136)] = 5054,
  [SMALL_STATE(137)] = 5083,
  [SMALL_STATE(138)] = 5114,
  [SMALL_STATE(139)] = 5145,
  [SMALL_STATE(140)] = 5176,
  [SMALL_STATE(141)] = 5205,
  [SMALL_STATE(142)] = 5236,
  [SMALL_STATE(143)] = 5267,
  [SMALL_STATE(144)] = 5298,
  [SMALL_STATE(145)] = 5329,
  [SMALL_STATE(146)] = 5360,
  [SMALL_STATE(147)] = 5389,
  [SMALL_STATE(148)] = 5420,
  [SMALL_STATE(149)] = 5451,
  [SMALL_STATE(150)] = 5482,
  [SMALL_STATE(151)] = 5503,
  [SMALL_STATE(152)] = 5534,
  [SMALL_STATE(153)] = 5553,
  [SMALL_STATE(154)] = 5584,
  [SMALL_STATE(155)] = 5605,
  [SMALL_STATE(156)] = 5629,
  [SMALL_STATE(157)] = 5653,
  [SMALL_STATE(158)] = 5675,
  [SMALL_STATE(159)] = 5699,
  [SMALL_STATE(160)] = 5723,
  [SMALL_STATE(161)] = 5745,
  [SMALL_STATE(162)] = 5767,
  [SMALL_STATE(163)] = 5786,
  [SMALL_STATE(164)] = 5803,
  [SMALL_STATE(165)] = 5822,
  [SMALL_STATE(166)] = 5845,
  [SMALL_STATE(167)] = 5864,
  [SMALL_STATE(168)] = 5883,
  [SMALL_STATE(169)] = 5902,
  [SMALL_STATE(170)] = 5921,
  [SMALL_STATE(171)] = 5940,
  [SMALL_STATE(172)] = 5959,
  [SMALL_STATE(173)] = 5982,
  [SMALL_STATE(174)] = 5999,
  [SMALL_STATE(175)] = 6016,
  [SMALL_STATE(176)] = 6035,
  [SMALL_STATE(177)] = 6052,
  [SMALL_STATE(178)] = 6074,
  [SMALL_STATE(179)] = 6092,
  [SMALL_STATE(180)] = 6112,
  [SMALL_STATE(181)] = 6130,
  [SMALL_STATE(182)] = 6146,
  [SMALL_STATE(183)] = 6166,
  [SMALL_STATE(184)] = 6182,
  [SMALL_STATE(185)] = 6202,
  [SMALL_STATE(186)] = 6220,
  [SMALL_STATE(187)] = 6242,
  [SMALL_STATE(188)] = 6258,
  [SMALL_STATE(189)] = 6276,
  [SMALL_STATE(190)] = 6291,
  [SMALL_STATE(191)] = 6308,
  [SMALL_STATE(192)] = 6325,
  [SMALL_STATE(193)] = 6342,
  [SMALL_STATE(194)] = 6357,
  [SMALL_STATE(195)] = 6372,
  [SMALL_STATE(196)] = 6387,
  [SMALL_STATE(197)] = 6404,
  [SMALL_STATE(198)] = 6424,
  [SMALL_STATE(199)] = 6442,
  [SMALL_STATE(200)] = 6460,
  [SMALL_STATE(201)] = 6480,
  [SMALL_STATE(202)] = 6498,
  [SMALL_STATE(203)] = 6515,
  [SMALL_STATE(204)] = 6534,
  [SMALL_STATE(205)] = 6548,
  [SMALL_STATE(206)] = 6562,
  [SMALL_STATE(207)] = 6576,
  [SMALL_STATE(208)] = 6590,
  [SMALL_STATE(209)] = 6604,
  [SMALL_STATE(210)] = 6618,
  [SMALL_STATE(211)] = 6632,
  [SMALL_STATE(212)] = 6648,
  [SMALL_STATE(213)] = 6662,
  [SMALL_STATE(214)] = 6676,
  [SMALL_STATE(215)] = 6690,
  [SMALL_STATE(216)] = 6704,
  [SMALL_STATE(217)] = 6717,
  [SMALL_STATE(218)] = 6730,
  [SMALL_STATE(219)] = 6743,
  [SMALL_STATE(220)] = 6756,
  [SMALL_STATE(221)] = 6769,
  [SMALL_STATE(222)] = 6780,
  [SMALL_STATE(223)] = 6793,
  [SMALL_STATE(224)] = 6806,
  [SMALL_STATE(225)] = 6819,
  [SMALL_STATE(226)] = 6830,
  [SMALL_STATE(227)] = 6841,
  [SMALL_STATE(228)] = 6854,
  [SMALL_STATE(229)] = 6867,
  [SMALL_STATE(230)] = 6880,
  [SMALL_STATE(231)] = 6893,
  [SMALL_STATE(232)] = 6906,
  [SMALL_STATE(233)] = 6919,
  [SMALL_STATE(234)] = 6932,
  [SMALL_STATE(235)] = 6945,
  [SMALL_STATE(236)] = 6955,
  [SMALL_STATE(237)] = 6963,
  [SMALL_STATE(238)] = 6971,
  [SMALL_STATE(239)] = 6981,
  [SMALL_STATE(240)] = 6989,
  [SMALL_STATE(241)] = 6997,
  [SMALL_STATE(242)] = 7007,
  [SMALL_STATE(243)] = 7017,
  [SMALL_STATE(244)] = 7025,
  [SMALL_STATE(245)] = 7033,
  [SMALL_STATE(246)] = 7041,
  [SMALL_STATE(247)] = 7051,
  [SMALL_STATE(248)] = 7059,
  [SMALL_STATE(249)] = 7067,
  [SMALL_STATE(250)] = 7075,
  [SMALL_STATE(251)] = 7085,
  [SMALL_STATE(252)] = 7093,
  [SMALL_STATE(253)] = 7101,
  [SMALL_STATE(254)] = 7109,
  [SMALL_STATE(255)] = 7117,
  [SMALL_STATE(256)] = 7125,
  [SMALL_STATE(257)] = 7133,
  [SMALL_STATE(258)] = 7141,
  [SMALL_STATE(259)] = 7149,
  [SMALL_STATE(260)] = 7157,
  [SMALL_STATE(261)] = 7165,
  [SMALL_STATE(262)] = 7173,
  [SMALL_STATE(263)] = 7181,
  [SMALL_STATE(264)] = 7188,
  [SMALL_STATE(265)] = 7195,
  [SMALL_STATE(266)] = 7202,
  [SMALL_STATE(267)] = 7209,
  [SMALL_STATE(268)] = 7216,
  [SMALL_STATE(269)] = 7223,
  [SMALL_STATE(270)] = 7230,
  [SMALL_STATE(271)] = 7237,
  [SMALL_STATE(272)] = 7244,
  [SMALL_STATE(273)] = 7251,
  [SMALL_STATE(274)] = 7258,
  [SMALL_STATE(275)] = 7265,
  [SMALL_STATE(276)] = 7272,
  [SMALL_STATE(277)] = 7279,
  [SMALL_STATE(278)] = 7286,
  [SMALL_STATE(279)] = 7293,
  [SMALL_STATE(280)] = 7300,
  [SMALL_STATE(281)] = 7307,
  [SMALL_STATE(282)] = 7314,
  [SMALL_STATE(283)] = 7321,
  [SMALL_STATE(284)] = 7328,
  [SMALL_STATE(285)] = 7335,
  [SMALL_STATE(286)] = 7342,
  [SMALL_STATE(287)] = 7349,
  [SMALL_STATE(288)] = 7356,
  [SMALL_STATE(289)] = 7363,
  [SMALL_STATE(290)] = 7370,
  [SMALL_STATE(291)] = 7377,
  [SMALL_STATE(292)] = 7384,
  [SMALL_STATE(293)] = 7391,
  [SMALL_STATE(294)] = 7398,
  [SMALL_STATE(295)] = 7405,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(159),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(96),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(16),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(221),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(224),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(95),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(241),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(289),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(288),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 15),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 15),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 11),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 11),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_item, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_item, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(66),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(161),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(82),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(18),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(75),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 16),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 16),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 21),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 21),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(161),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(81),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(18),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(159),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(83),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(16),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(156),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(85),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(15),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 4, .production_id = 20),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 20),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2), SHIFT_REPEAT(273),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2), SHIFT_REPEAT(134),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 13),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 13),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(165),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(129),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(17),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(182),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(131),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(14),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(186),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(140),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(13),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(155),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 1),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(158),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(160),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 10),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 10),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 8),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 9),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 9),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 8),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divert, 2, .production_id = 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(172),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(177),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2), SHIFT_REPEAT(179),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(184),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(250),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2), SHIFT_REPEAT(206),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 3),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(242),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(210),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(52),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2), SHIFT_REPEAT(232),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 5),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 4),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 6),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 3),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 12),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 23),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 6),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 18),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 22),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 5),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 19),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 17),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 4, .production_id = 6),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 5),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 7),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 4),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 14),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [864] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
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
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
  },
  [4] = {
    [ts_external_token__eol] = true,
  },
  [5] = {
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
