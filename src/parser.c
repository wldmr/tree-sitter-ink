#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 313
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 3
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 35

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
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  aux_sym__condition_field_token1 = 23,
  anon_sym_LBRACE2 = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  aux_sym__knot_mark_token1 = 27,
  sym__divert_mark = 28,
  anon_sym_EQ = 29,
  anon_sym_LF = 30,
  anon_sym_function = 31,
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
  sym__label_field = 71,
  sym__condition_field = 72,
  sym__choice_content = 73,
  sym__compound_choice_content = 74,
  sym_knot = 75,
  sym__knot_mark = 76,
  sym_stitch = 77,
  sym_function_declaration = 78,
  sym_code = 79,
  sym__code_stmt = 80,
  sym_return = 81,
  sym__param = 82,
  sym_params = 83,
  sym_divert = 84,
  sym_include = 85,
  sym_call = 86,
  sym__arg = 87,
  sym_args = 88,
  sym_paren = 89,
  sym_unary = 90,
  sym_binary = 91,
  sym_qualified_name = 92,
  sym_todo_comment = 93,
  aux_sym_ink_repeat1 = 94,
  aux_sym_ink_repeat2 = 95,
  aux_sym_content_block_repeat1 = 96,
  aux_sym__content_item_repeat1 = 97,
  aux_sym_text_repeat1 = 98,
  aux_sym_flow_repeat1 = 99,
  aux_sym_logic_repeat1 = 100,
  aux_sym_choice_repeat1 = 101,
  aux_sym_choice_repeat2 = 102,
  aux_sym_gather_repeat1 = 103,
  aux_sym_params_repeat1 = 104,
  aux_sym_args_repeat1 = 105,
  anon_alias_sym__flow = 106,
  alias_sym_once_only_mark = 107,
  alias_sym_shuffle_mark = 108,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__condition_field_token1] = "_condition_field_token1",
  [anon_sym_LBRACE2] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__knot_mark_token1] = "knot_mark",
  [sym__divert_mark] = "_divert_mark",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [anon_sym_function] = "function",
  [anon_sym_return] = "return",
  [anon_sym_COMMA] = ",",
  [aux_sym_include_token1] = "include_token1",
  [aux_sym_include_token2] = "path",
  [aux_sym_expr_token1] = "number",
  [anon_sym_false] = "boolean",
  [anon_sym_true] = "boolean",
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
  [sym__label_field] = "_label_field",
  [sym__condition_field] = "_condition_field",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__condition_field_token1] = aux_sym__condition_field_token1,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__knot_mark_token1] = aux_sym__knot_mark_token1,
  [sym__divert_mark] = sym__divert_mark,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [aux_sym_include_token2] = aux_sym_include_token2,
  [aux_sym_expr_token1] = aux_sym_expr_token1,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_false,
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
  [sym__label_field] = sym__label_field,
  [sym__condition_field] = sym__condition_field,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__condition_field_token1] = {
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
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = true,
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
  [sym__label_field] = {
    .visible = false,
    .named = true,
  },
  [sym__condition_field] = {
    .visible = false,
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
  field_condition = 2,
  field_final = 3,
  field_label = 4,
  field_main = 5,
  field_name = 6,
  field_op = 7,
  field_params = 8,
  field_prefix = 9,
  field_target = 10,
  field_temporary = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_condition] = "condition",
  [field_final] = "final",
  [field_label] = "label",
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
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 3},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 4},
  [11] = {.index = 18, .length = 4},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 1},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 24, .length = 1},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 1},
  [19] = {.index = 28, .length = 1},
  [20] = {.index = 29, .length = 1},
  [21] = {.index = 30, .length = 4},
  [22] = {.index = 34, .length = 5},
  [23] = {.index = 39, .length = 4},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 1},
  [27] = {.index = 46, .length = 1},
  [28] = {.index = 47, .length = 2},
  [29] = {.index = 49, .length = 2},
  [30] = {.index = 51, .length = 2},
  [31] = {.index = 53, .length = 5},
  [32] = {.index = 58, .length = 2},
  [33] = {.index = 60, .length = 2},
  [34] = {.index = 62, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 1},
  [1] =
    {field_main, 0},
  [2] =
    {field_condition, 0, .inherited = true},
  [3] =
    {field_final, 1, .inherited = true},
    {field_main, 1, .inherited = true},
    {field_temporary, 1, .inherited = true},
  [6] =
    {field_final, 0, .inherited = true},
    {field_main, 0, .inherited = true},
    {field_temporary, 0, .inherited = true},
  [9] =
    {field_label, 1, .inherited = true},
  [10] =
    {field_name, 1},
  [11] =
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_temporary, 2, .inherited = true},
  [14] =
    {field_final, 2, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_temporary, 2, .inherited = true},
  [18] =
    {field_condition, 1, .inherited = true},
    {field_final, 2, .inherited = true},
    {field_main, 2, .inherited = true},
    {field_temporary, 2, .inherited = true},
  [22] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
  [24] =
    {field_prefix, 1},
  [25] =
    {field_op, 0},
  [26] =
    {field_label, 1},
  [27] =
    {field_condition, 1},
  [28] =
    {field_final, 2},
  [29] =
    {field_temporary, 1},
  [30] =
    {field_final, 3, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_temporary, 3, .inherited = true},
  [34] =
    {field_condition, 2, .inherited = true},
    {field_final, 3, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_temporary, 3, .inherited = true},
  [39] =
    {field_condition, 1, .inherited = true},
    {field_final, 3, .inherited = true},
    {field_main, 3, .inherited = true},
    {field_temporary, 3, .inherited = true},
  [43] =
    {field_op, 1},
  [44] =
    {field_name, 0},
  [45] =
    {field_name, 2},
  [46] =
    {field_condition, 2},
  [47] =
    {field_final, 3},
    {field_temporary, 1},
  [49] =
    {field_final, 3},
    {field_main, 0},
  [51] =
    {field_main, 0},
    {field_temporary, 2},
  [53] =
    {field_condition, 2, .inherited = true},
    {field_final, 4, .inherited = true},
    {field_label, 1, .inherited = true},
    {field_main, 4, .inherited = true},
    {field_temporary, 4, .inherited = true},
  [58] =
    {field_args, 2},
    {field_name, 0},
  [60] =
    {field_name, 2},
    {field_params, 4},
  [62] =
    {field_final, 4},
    {field_main, 0},
    {field_temporary, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym__flow,
  },
  [14] = {
    [1] = alias_sym_shuffle_mark,
  },
  [15] = {
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
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 15,
  [18] = 15,
  [19] = 15,
  [20] = 15,
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
  [34] = 22,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 39,
  [43] = 40,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 40,
  [51] = 51,
  [52] = 41,
  [53] = 53,
  [54] = 54,
  [55] = 48,
  [56] = 56,
  [57] = 40,
  [58] = 58,
  [59] = 39,
  [60] = 48,
  [61] = 41,
  [62] = 30,
  [63] = 48,
  [64] = 33,
  [65] = 29,
  [66] = 40,
  [67] = 32,
  [68] = 31,
  [69] = 26,
  [70] = 70,
  [71] = 39,
  [72] = 41,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 48,
  [77] = 39,
  [78] = 41,
  [79] = 48,
  [80] = 40,
  [81] = 39,
  [82] = 82,
  [83] = 70,
  [84] = 41,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 86,
  [90] = 90,
  [91] = 91,
  [92] = 90,
  [93] = 88,
  [94] = 86,
  [95] = 87,
  [96] = 56,
  [97] = 90,
  [98] = 88,
  [99] = 91,
  [100] = 100,
  [101] = 87,
  [102] = 88,
  [103] = 88,
  [104] = 86,
  [105] = 87,
  [106] = 91,
  [107] = 107,
  [108] = 108,
  [109] = 86,
  [110] = 88,
  [111] = 86,
  [112] = 87,
  [113] = 113,
  [114] = 114,
  [115] = 87,
  [116] = 116,
  [117] = 46,
  [118] = 51,
  [119] = 90,
  [120] = 58,
  [121] = 121,
  [122] = 49,
  [123] = 123,
  [124] = 124,
  [125] = 47,
  [126] = 126,
  [127] = 44,
  [128] = 121,
  [129] = 129,
  [130] = 54,
  [131] = 91,
  [132] = 53,
  [133] = 133,
  [134] = 45,
  [135] = 135,
  [136] = 90,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 137,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 141,
  [149] = 139,
  [150] = 142,
  [151] = 146,
  [152] = 152,
  [153] = 91,
  [154] = 90,
  [155] = 155,
  [156] = 91,
  [157] = 143,
  [158] = 158,
  [159] = 159,
  [160] = 159,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 164,
  [167] = 163,
  [168] = 163,
  [169] = 164,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 172,
  [175] = 172,
  [176] = 171,
  [177] = 170,
  [178] = 164,
  [179] = 173,
  [180] = 163,
  [181] = 171,
  [182] = 170,
  [183] = 173,
  [184] = 184,
  [185] = 56,
  [186] = 163,
  [187] = 163,
  [188] = 164,
  [189] = 164,
  [190] = 171,
  [191] = 191,
  [192] = 172,
  [193] = 193,
  [194] = 170,
  [195] = 173,
  [196] = 145,
  [197] = 171,
  [198] = 172,
  [199] = 170,
  [200] = 173,
  [201] = 171,
  [202] = 172,
  [203] = 170,
  [204] = 173,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 214,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 184,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 233,
  [240] = 240,
  [241] = 184,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 24,
  [246] = 246,
  [247] = 24,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 191,
  [253] = 253,
  [254] = 254,
  [255] = 249,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 191,
  [261] = 243,
  [262] = 262,
  [263] = 250,
  [264] = 264,
  [265] = 257,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 249,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 274,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 24,
  [285] = 285,
  [286] = 277,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 292,
  [296] = 293,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 271,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 277,
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
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(123);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '<') ADVANCE(179);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == 'I') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(123);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(31);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '$') ADVANCE(122);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(31);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(107);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '/') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '/') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '~') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 't') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '&') ADVANCE(182);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(207);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(150);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(115);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(208);
      END_STATE();
    case 44:
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == '|') ADVANCE(184);
      END_STATE();
    case 69:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/' &&
          lookahead != ':') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(206);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(136);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(113);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(123);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == ')') ADVANCE(143);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '<') ADVANCE(179);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == 'I') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      if (!aux_sym_text_token1_character_set_1(lookahead)) ADVANCE(107);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '$') ADVANCE(122);
      if (lookahead == '&') ADVANCE(124);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '>' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}') ADVANCE(31);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (!aux_sym_text_token1_character_set_2(lookahead)) ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (!aux_sym_text_token1_character_set_3(lookahead)) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == ']') ADVANCE(148);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (!aux_sym_text_token1_character_set_4(lookahead)) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '~') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          lookahead != ']' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '}') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '~') ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (!aux_sym_text_token1_character_set_5(lookahead)) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '|') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ':') ADVANCE(129);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(31);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'C') ADVANCE(101);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(100);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'D') ADVANCE(103);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E') ADVANCE(79);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'L') ADVANCE(105);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'N') ADVANCE(97);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(208);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O') ADVANCE(99);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'U') ADVANCE(98);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '-' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '|') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (!aux_sym_text_token1_character_set_6(lookahead)) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_text_token2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_text_token3);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_text_token4);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_text_token4);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_text_token5);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_text_token5);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_text_token6);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_text_token6);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_glue);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_glue);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead == ':') ADVANCE(129);
      if (aux_sym_logic_token1_character_set_1(lookahead)) ADVANCE(31);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_logic_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__condition_field_token1);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__condition_field_token1);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__knot_mark_token1);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__divert_mark);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_include_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(161);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_include_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(207);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != ':') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_todo_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 16, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 3},
  [5] = {.lex_state = 2, .external_lex_state = 3},
  [6] = {.lex_state = 2, .external_lex_state = 3},
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 2, .external_lex_state = 3},
  [9] = {.lex_state = 2, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 2, .external_lex_state = 3},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 7, .external_lex_state = 4},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 2, .external_lex_state = 3},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 21, .external_lex_state = 4},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 21, .external_lex_state = 4},
  [65] = {.lex_state = 21, .external_lex_state = 4},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 21, .external_lex_state = 4},
  [68] = {.lex_state = 21, .external_lex_state = 4},
  [69] = {.lex_state = 21, .external_lex_state = 4},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 21, .external_lex_state = 4},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 6, .external_lex_state = 4},
  [91] = {.lex_state = 6, .external_lex_state = 4},
  [92] = {.lex_state = 11, .external_lex_state = 4},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 21, .external_lex_state = 4},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 12, .external_lex_state = 4},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 11, .external_lex_state = 4},
  [107] = {.lex_state = 12, .external_lex_state = 4},
  [108] = {.lex_state = 12, .external_lex_state = 4},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 12, .external_lex_state = 4},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 21, .external_lex_state = 4},
  [118] = {.lex_state = 21, .external_lex_state = 4},
  [119] = {.lex_state = 12, .external_lex_state = 4},
  [120] = {.lex_state = 21, .external_lex_state = 4},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 21, .external_lex_state = 4},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 19, .external_lex_state = 4},
  [125] = {.lex_state = 21, .external_lex_state = 4},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 21, .external_lex_state = 4},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 21, .external_lex_state = 4},
  [130] = {.lex_state = 21, .external_lex_state = 4},
  [131] = {.lex_state = 12, .external_lex_state = 4},
  [132] = {.lex_state = 21, .external_lex_state = 4},
  [133] = {.lex_state = 21},
  [134] = {.lex_state = 21, .external_lex_state = 4},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 20},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 20},
  [140] = {.lex_state = 20},
  [141] = {.lex_state = 20},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 20},
  [147] = {.lex_state = 17},
  [148] = {.lex_state = 20},
  [149] = {.lex_state = 20},
  [150] = {.lex_state = 20},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 19, .external_lex_state = 4},
  [155] = {.lex_state = 17},
  [156] = {.lex_state = 19, .external_lex_state = 4},
  [157] = {.lex_state = 20},
  [158] = {.lex_state = 17},
  [159] = {.lex_state = 20},
  [160] = {.lex_state = 20},
  [161] = {.lex_state = 17},
  [162] = {.lex_state = 18},
  [163] = {.lex_state = 6, .external_lex_state = 4},
  [164] = {.lex_state = 11, .external_lex_state = 4},
  [165] = {.lex_state = 7, .external_lex_state = 4},
  [166] = {.lex_state = 6, .external_lex_state = 4},
  [167] = {.lex_state = 18},
  [168] = {.lex_state = 11, .external_lex_state = 4},
  [169] = {.lex_state = 18},
  [170] = {.lex_state = 6, .external_lex_state = 4},
  [171] = {.lex_state = 18},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 6, .external_lex_state = 4},
  [174] = {.lex_state = 6, .external_lex_state = 4},
  [175] = {.lex_state = 11, .external_lex_state = 4},
  [176] = {.lex_state = 6, .external_lex_state = 4},
  [177] = {.lex_state = 11, .external_lex_state = 4},
  [178] = {.lex_state = 12, .external_lex_state = 4},
  [179] = {.lex_state = 11, .external_lex_state = 4},
  [180] = {.lex_state = 12, .external_lex_state = 4},
  [181] = {.lex_state = 11, .external_lex_state = 4},
  [182] = {.lex_state = 18},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 19, .external_lex_state = 4},
  [188] = {.lex_state = 13},
  [189] = {.lex_state = 19, .external_lex_state = 4},
  [190] = {.lex_state = 12, .external_lex_state = 4},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 12, .external_lex_state = 4},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 12, .external_lex_state = 4},
  [195] = {.lex_state = 12, .external_lex_state = 4},
  [196] = {.lex_state = 19, .external_lex_state = 4},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 13},
  [201] = {.lex_state = 19, .external_lex_state = 4},
  [202] = {.lex_state = 19, .external_lex_state = 4},
  [203] = {.lex_state = 19, .external_lex_state = 4},
  [204] = {.lex_state = 19, .external_lex_state = 4},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 24},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 3},
  [211] = {.lex_state = 0, .external_lex_state = 4},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 3},
  [214] = {.lex_state = 0, .external_lex_state = 3},
  [215] = {.lex_state = 0, .external_lex_state = 3},
  [216] = {.lex_state = 24},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 4},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 3},
  [224] = {.lex_state = 0, .external_lex_state = 4},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0, .external_lex_state = 4},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0, .external_lex_state = 4},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 20, .external_lex_state = 4},
  [232] = {.lex_state = 0, .external_lex_state = 4},
  [233] = {.lex_state = 0, .external_lex_state = 3},
  [234] = {.lex_state = 0, .external_lex_state = 4},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0, .external_lex_state = 4},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 24, .external_lex_state = 4},
  [239] = {.lex_state = 0, .external_lex_state = 3},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0, .external_lex_state = 4},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 20},
  [244] = {.lex_state = 0, .external_lex_state = 3},
  [245] = {.lex_state = 0, .external_lex_state = 3},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 3},
  [249] = {.lex_state = 24},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 3},
  [252] = {.lex_state = 0, .external_lex_state = 4},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 3},
  [255] = {.lex_state = 24},
  [256] = {.lex_state = 0, .external_lex_state = 4},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 29},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 20},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 0, .external_lex_state = 3},
  [264] = {.lex_state = 0, .external_lex_state = 4},
  [265] = {.lex_state = 0, .external_lex_state = 3},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 0, .external_lex_state = 4},
  [270] = {.lex_state = 24},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0, .external_lex_state = 4},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 24},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0, .external_lex_state = 4},
  [280] = {.lex_state = 0, .external_lex_state = 4},
  [281] = {.lex_state = 0, .external_lex_state = 4},
  [282] = {.lex_state = 0, .external_lex_state = 4},
  [283] = {.lex_state = 0, .external_lex_state = 4},
  [284] = {.lex_state = 0, .external_lex_state = 5},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 24},
  [287] = {.lex_state = 0, .external_lex_state = 4},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 14},
  [290] = {.lex_state = 24},
  [291] = {.lex_state = 0, .external_lex_state = 4},
  [292] = {.lex_state = 24},
  [293] = {.lex_state = 0, .external_lex_state = 5},
  [294] = {.lex_state = 0, .external_lex_state = 4},
  [295] = {.lex_state = 24},
  [296] = {.lex_state = 0, .external_lex_state = 5},
  [297] = {.lex_state = 0, .external_lex_state = 4},
  [298] = {.lex_state = 0, .external_lex_state = 4},
  [299] = {.lex_state = 0, .external_lex_state = 4},
  [300] = {.lex_state = 0, .external_lex_state = 4},
  [301] = {.lex_state = 0, .external_lex_state = 4},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0, .external_lex_state = 4},
  [305] = {.lex_state = 0, .external_lex_state = 4},
  [306] = {.lex_state = 0, .external_lex_state = 4},
  [307] = {.lex_state = 213},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 24},
  [310] = {.lex_state = 0, .external_lex_state = 4},
  [311] = {.lex_state = 15},
  [312] = {.lex_state = 24},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__knot_mark_token1] = ACTIONS(1),
    [sym__divert_mark] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
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
    [sym_ink] = STATE(273),
    [sym_content_block] = STATE(205),
    [sym_knot_block] = STATE(219),
    [sym_stitch_block] = STATE(208),
    [aux_sym_ink_repeat1] = STATE(208),
    [aux_sym_ink_repeat2] = STATE(219),
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
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(164), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
    STATE(233), 1,
      sym_stitch,
    STATE(259), 1,
      sym__knot_mark,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(210), 2,
      sym_knot,
      sym_function_declaration,
    STATE(8), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(164), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
    STATE(239), 1,
      sym_stitch,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(5), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(164), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(164), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(164), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(164), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(58), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(164), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(7), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(164), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(4), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
    STATE(28), 1,
      aux_sym_gather_repeat1,
    STATE(164), 1,
      aux_sym_text_repeat1,
    STATE(211), 1,
      sym_flow,
    STATE(232), 1,
      aux_sym__content_item_repeat1,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 3,
      sym_content_block,
      sym__content_item,
      aux_sym_content_block_repeat1,
    STATE(106), 3,
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
  [730] = 20,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_BSLASH,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      aux_sym__condition_field_token1,
    ACTIONS(94), 1,
      anon_sym_LBRACE2,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    STATE(12), 1,
      aux_sym_choice_repeat2,
    STATE(13), 1,
      sym__label_field,
    STATE(37), 1,
      aux_sym_choice_repeat1,
    STATE(155), 1,
      sym__condition_field,
    STATE(166), 1,
      aux_sym_text_repeat1,
    STATE(218), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(279), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
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
  [800] = 16,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      aux_sym__condition_field_token1,
    ACTIONS(94), 1,
      anon_sym_LBRACE2,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    ACTIONS(100), 1,
      anon_sym_BSLASH,
    STATE(114), 1,
      aux_sym_choice_repeat2,
    STATE(155), 1,
      sym__condition_field,
    STATE(166), 1,
      aux_sym_text_repeat1,
    STATE(218), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    STATE(298), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
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
  [857] = 16,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      aux_sym__condition_field_token1,
    ACTIONS(94), 1,
      anon_sym_LBRACE2,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    ACTIONS(102), 1,
      anon_sym_BSLASH,
    STATE(14), 1,
      aux_sym_choice_repeat2,
    STATE(155), 1,
      sym__condition_field,
    STATE(166), 1,
      aux_sym_text_repeat1,
    STATE(218), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    STATE(300), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
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
  [914] = 16,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      aux_sym__condition_field_token1,
    ACTIONS(94), 1,
      anon_sym_LBRACE2,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    STATE(114), 1,
      aux_sym_choice_repeat2,
    STATE(155), 1,
      sym__condition_field,
    STATE(166), 1,
      aux_sym_text_repeat1,
    STATE(218), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    STATE(282), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
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
  [971] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(116), 1,
      anon_sym_BANG,
    ACTIONS(118), 1,
      anon_sym_PIPE,
    STATE(43), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1017] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_TILDE,
    ACTIONS(124), 1,
      anon_sym_BANG,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    STATE(80), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    ACTIONS(120), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1063] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_TILDE,
    ACTIONS(132), 1,
      anon_sym_BANG,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    STATE(40), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    ACTIONS(128), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1109] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      anon_sym_TILDE,
    ACTIONS(140), 1,
      anon_sym_BANG,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    STATE(50), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    ACTIONS(136), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1155] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_TILDE,
    ACTIONS(148), 1,
      anon_sym_BANG,
    ACTIONS(150), 1,
      anon_sym_PIPE,
    STATE(57), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    ACTIONS(144), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1201] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      anon_sym_TILDE,
    ACTIONS(156), 1,
      anon_sym_BANG,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    ACTIONS(152), 3,
      anon_sym_DOLLAR,
      anon_sym_AMP,
      aux_sym_logic_token1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1247] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    STATE(166), 1,
      aux_sym_text_repeat1,
    STATE(218), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    STATE(281), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
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
  [1289] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_BANG,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(168), 1,
      sym__divert_mark,
    ACTIONS(170), 1,
      aux_sym_expr_token1,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(278), 1,
      sym_args,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(172), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(229), 2,
      sym_divert,
      sym__arg,
    STATE(85), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1333] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    STATE(166), 1,
      aux_sym_text_repeat1,
    STATE(218), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    STATE(275), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
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
  [1375] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym__block_start,
      sym__block_end,
    ACTIONS(176), 16,
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
  [1401] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    STATE(166), 1,
      aux_sym_text_repeat1,
    STATE(218), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    STATE(304), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
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
  [1443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(184), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 13,
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
  [1473] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_glue,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      sym__divert_mark,
    STATE(166), 1,
      aux_sym_text_repeat1,
    STATE(218), 1,
      sym_flow,
    STATE(226), 1,
      sym__compound_choice_content,
    STATE(283), 2,
      sym__choice_content,
      sym_divert,
    STATE(91), 3,
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
  [1515] = 12,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_glue,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_DASH,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      sym__eol,
    STATE(124), 1,
      sym__label_field,
    STATE(165), 1,
      aux_sym_gather_repeat1,
    STATE(189), 1,
      aux_sym_text_repeat1,
    STATE(280), 1,
      sym_flow,
    STATE(156), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(188), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1559] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 13,
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
  [1627] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 12,
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
  [1661] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 10,
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
  [1697] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [1737] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_BANG,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      sym__divert_mark,
    ACTIONS(170), 1,
      aux_sym_expr_token1,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      sym_args,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(172), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(229), 2,
      sym_divert,
      sym__arg,
    STATE(85), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1781] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym__block_start,
      sym__block_end,
    ACTIONS(218), 16,
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
  [1807] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1848] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_choice_repeat1,
    ACTIONS(228), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(226), 14,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      aux_sym__condition_field_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [1875] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_BANG,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      sym__divert_mark,
    ACTIONS(170), 1,
      aux_sym_expr_token1,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(172), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(267), 2,
      sym_divert,
      sym__arg,
    STATE(85), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [1913] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1951] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [1989] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2027] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2065] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 13,
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
  [2127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 13,
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
  [2151] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2185] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2217] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2255] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 10,
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
  [2285] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 12,
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
  [2351] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 13,
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
  [2413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 13,
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
  [2437] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 13,
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
  [2499] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 13,
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
  [2561] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2599] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2637] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 11,
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
  [2703] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2741] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(200), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2779] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2815] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [2853] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(283), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(200), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [2887] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 10,
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
  [2919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(184), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 11,
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
  [2947] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2987] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3025] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3063] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3103] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(305), 1,
      sym__eol,
    ACTIONS(283), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(303), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3143] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3183] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3221] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3259] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3297] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3335] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3373] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3411] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_glue,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(321), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3449] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3489] = 10,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3527] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3562] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3597] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    STATE(42), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3632] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    STATE(48), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3667] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3702] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_glue,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      sym__eol,
    STATE(166), 1,
      aux_sym_text_repeat1,
    ACTIONS(356), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(90), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(347), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3735] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      sym_glue,
    ACTIONS(364), 1,
      sym__eol,
    STATE(166), 1,
      aux_sym_text_repeat1,
    ACTIONS(362), 2,
      anon_sym_LBRACK,
      sym__divert_mark,
    STATE(90), 3,
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
  [3768] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__eol,
    ACTIONS(369), 1,
      sym_glue,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      aux_sym_text_repeat1,
    ACTIONS(356), 2,
      sym_tag,
      sym__divert_mark,
    STATE(92), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(366), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3801] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3836] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    STATE(84), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3871] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    STATE(81), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 12,
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
  [3929] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_glue,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      aux_sym_text_repeat1,
    ACTIONS(356), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(97), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(381), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3960] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(390), 1,
      anon_sym_PIPE,
    STATE(76), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [3995] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      sym_glue,
    STATE(169), 1,
      aux_sym_text_repeat1,
    ACTIONS(362), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    STATE(97), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4026] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_glue,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(400), 1,
      sym__divert_mark,
    ACTIONS(402), 1,
      sym__eol,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(269), 1,
      sym_flow,
    STATE(131), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(394), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4061] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4096] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      anon_sym_PIPE,
    STATE(79), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4131] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 1,
      anon_sym_PIPE,
    STATE(63), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4166] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(410), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4201] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    STATE(59), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4236] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__eol,
    ACTIONS(414), 1,
      sym_glue,
    STATE(164), 1,
      aux_sym_text_repeat1,
    ACTIONS(362), 2,
      sym_tag,
      sym__divert_mark,
    STATE(92), 3,
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
  [4269] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_glue,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym__divert_mark,
    ACTIONS(418), 1,
      sym__eol,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(264), 1,
      sym_flow,
    STATE(131), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(394), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4304] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_glue,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(420), 1,
      sym__divert_mark,
    ACTIONS(422), 1,
      sym__eol,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(256), 1,
      sym_flow,
    STATE(131), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(394), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4339] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    STATE(78), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4374] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4409] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(428), 1,
      anon_sym_PIPE,
    STATE(52), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4444] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4479] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_glue,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(432), 1,
      sym__divert_mark,
    ACTIONS(434), 1,
      sym__eol,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(268), 1,
      sym_flow,
    STATE(131), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(394), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4514] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym__condition_field_token1,
    ACTIONS(441), 1,
      anon_sym_LBRACE2,
    STATE(114), 1,
      aux_sym_choice_repeat2,
    STATE(155), 1,
      sym__condition_field,
    ACTIONS(436), 11,
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
  [4543] = 9,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_glue,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    ACTIONS(444), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      aux_sym_logic_repeat1,
    STATE(162), 1,
      sym_flow,
    STATE(169), 1,
      aux_sym_text_repeat1,
    STATE(99), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(106), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4578] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_glue,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_text_repeat1,
    STATE(285), 1,
      sym_flow,
    STATE(153), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(446), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4610] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(200), 3,
      sym__eol,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 10,
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
  [4668] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym__divert_mark,
    ACTIONS(358), 1,
      sym__eol,
    ACTIONS(457), 1,
      sym_glue,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(119), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(454), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 11,
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
  [4722] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(283), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(200), 8,
      sym__eol,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4784] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_glue,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_text_repeat1,
    STATE(302), 1,
      sym_flow,
    STATE(153), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(446), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4816] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_glue,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      sym__eol,
    STATE(189), 1,
      aux_sym_text_repeat1,
    STATE(297), 1,
      sym_flow,
    STATE(156), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(188), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [4848] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 5,
      sym__eol,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [4878] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 11,
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
  [4934] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4968] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_SLASH,
    ACTIONS(305), 1,
      sym__eol,
    ACTIONS(283), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(289), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(303), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 11,
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
  [5024] = 8,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__divert_mark,
    ACTIONS(364), 1,
      sym__eol,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      sym_glue,
    STATE(178), 1,
      aux_sym_text_repeat1,
    STATE(119), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(394), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 11,
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
  [5078] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(214), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(224), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(208), 3,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 11,
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
  [5134] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(469), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym__condition_field_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5153] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    ACTIONS(474), 1,
      sym_glue,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      aux_sym_text_repeat1,
    STATE(136), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(471), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5182] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      aux_sym_expr_token1,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(482), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(51), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5213] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym_expr_token1,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(488), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(126), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5244] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      aux_sym_expr_token1,
    ACTIONS(500), 1,
      anon_sym_not,
    ACTIONS(502), 1,
      sym_identifier,
    ACTIONS(492), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(498), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(132), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5275] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_not,
    ACTIONS(504), 1,
      aux_sym_expr_token1,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(492), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(506), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(118), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5306] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_not,
    ACTIONS(510), 1,
      aux_sym_expr_token1,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(492), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(512), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(122), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5337] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_not,
    ACTIONS(516), 1,
      aux_sym_expr_token1,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(492), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(518), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(125), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5368] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_not,
    ACTIONS(522), 1,
      aux_sym_expr_token1,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(492), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(524), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(117), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5399] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_not,
    ACTIONS(528), 1,
      aux_sym_expr_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(492), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(530), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(129), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5430] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(534), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym__condition_field_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5449] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      aux_sym_expr_token1,
    ACTIONS(540), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(538), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(128), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5480] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym__condition_field_token1,
    ACTIONS(542), 12,
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
  [5501] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      aux_sym_expr_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(548), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(49), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5532] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      aux_sym_expr_token1,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(554), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(53), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5563] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(558), 1,
      aux_sym_expr_token1,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(560), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(47), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5594] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      aux_sym_expr_token1,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(566), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(121), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5625] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      aux_sym_expr_token1,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(572), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(133), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5656] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
    ACTIONS(576), 1,
      sym_glue,
    STATE(188), 1,
      aux_sym_text_repeat1,
    STATE(136), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(446), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5685] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__eol,
    ACTIONS(581), 1,
      sym_glue,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      aux_sym_text_repeat1,
    STATE(154), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(578), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5714] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(587), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym__condition_field_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5733] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      sym__eol,
    ACTIONS(589), 1,
      sym_glue,
    STATE(189), 1,
      aux_sym_text_repeat1,
    STATE(154), 3,
      sym_text,
      sym_logic,
      aux_sym_flow_repeat1,
    ACTIONS(188), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5762] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(591), 1,
      aux_sym_expr_token1,
    ACTIONS(595), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(593), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(46), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5793] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(597), 13,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym__condition_field_token1,
      anon_sym_LBRACE2,
      anon_sym_LBRACK,
      sym__divert_mark,
  [5812] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_not,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(599), 1,
      aux_sym_expr_token1,
    ACTIONS(603), 1,
      sym_identifier,
    ACTIONS(160), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(601), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(58), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5843] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_not,
    ACTIONS(605), 1,
      aux_sym_expr_token1,
    ACTIONS(609), 1,
      sym_identifier,
    ACTIONS(492), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(607), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(120), 5,
      sym_call,
      sym_paren,
      sym_unary,
      sym_binary,
      sym_qualified_name,
  [5874] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(613), 1,
      aux_sym__condition_field_token1,
    ACTIONS(611), 12,
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
  [5895] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__divert_mark,
    STATE(193), 1,
      sym_divert,
    ACTIONS(615), 10,
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
  [5917] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym__eol,
    STATE(163), 1,
      aux_sym_text_repeat1,
    ACTIONS(622), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(619), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5941] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_text_repeat1,
    ACTIONS(628), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(626), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [5965] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_DASH,
    ACTIONS(637), 1,
      sym__eol,
    STATE(165), 1,
      aux_sym_gather_repeat1,
    ACTIONS(632), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
  [5989] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym__eol,
    STATE(163), 1,
      aux_sym_text_repeat1,
    ACTIONS(628), 4,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym__divert_mark,
    ACTIONS(639), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6013] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_text_repeat1,
    ACTIONS(622), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(641), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6035] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_text_repeat1,
    ACTIONS(622), 4,
      sym_glue,
      anon_sym_LBRACE,
      sym_tag,
      sym__divert_mark,
    ACTIONS(644), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6059] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_text_repeat1,
    ACTIONS(628), 5,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      sym__divert_mark,
    ACTIONS(647), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6081] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__eol,
    ACTIONS(649), 10,
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
  [6100] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(653), 11,
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
  [6117] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(655), 11,
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
  [6134] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym__eol,
    ACTIONS(657), 10,
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
  [6153] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__eol,
    ACTIONS(655), 10,
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
  [6172] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__eol,
    ACTIONS(655), 10,
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
  [6191] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__eol,
    ACTIONS(653), 10,
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
  [6210] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__eol,
    ACTIONS(649), 10,
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
  [6229] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym__eol,
    STATE(180), 1,
      aux_sym_text_repeat1,
    ACTIONS(628), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(665), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6252] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym__eol,
    ACTIONS(657), 10,
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
  [6271] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym__eol,
    STATE(180), 1,
      aux_sym_text_repeat1,
    ACTIONS(622), 3,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
    ACTIONS(667), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6294] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__eol,
    ACTIONS(653), 10,
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
  [6313] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(649), 11,
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
  [6330] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(657), 11,
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
  [6347] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_DOT,
    ACTIONS(670), 10,
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
  [6366] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(265), 10,
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
  [6382] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_text_repeat1,
    ACTIONS(622), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(674), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6402] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym__eol,
    STATE(187), 1,
      aux_sym_text_repeat1,
    ACTIONS(622), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(677), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6424] = 4,
    ACTIONS(31), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_text_repeat1,
    ACTIONS(628), 3,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
    ACTIONS(680), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6444] = 5,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym__eol,
    STATE(187), 1,
      aux_sym_text_repeat1,
    ACTIONS(628), 2,
      sym_glue,
      anon_sym_LBRACE,
    ACTIONS(682), 6,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
  [6466] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__eol,
    ACTIONS(653), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6484] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(670), 10,
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
  [6500] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__eol,
    ACTIONS(655), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6518] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(333), 10,
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
  [6534] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__eol,
    ACTIONS(649), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6552] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym__eol,
    ACTIONS(657), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      sym__divert_mark,
  [6570] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__eol,
    ACTIONS(534), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6587] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(653), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6602] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(655), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6617] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(649), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6632] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(657), 9,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [6647] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__eol,
    ACTIONS(653), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6664] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__eol,
    ACTIONS(655), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6681] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__eol,
    ACTIONS(649), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6698] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym__eol,
    ACTIONS(657), 8,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_text_token4,
      aux_sym_text_token5,
      aux_sym_text_token6,
      sym_glue,
      anon_sym_LBRACE,
  [6715] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    ACTIONS(688), 1,
      sym__block_start,
    STATE(209), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(212), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6733] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym__divert_mark,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    ACTIONS(692), 1,
      sym_identifier,
    STATE(276), 1,
      sym_params,
    STATE(237), 2,
      sym__param,
      sym_divert,
  [6753] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(694), 1,
      aux_sym__knot_mark_token1,
    STATE(233), 1,
      sym_stitch,
    STATE(259), 1,
      sym__knot_mark,
    STATE(210), 2,
      sym_knot,
      sym_function_declaration,
  [6773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    ACTIONS(688), 1,
      sym__block_start,
    STATE(212), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
    STATE(217), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6791] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__block_start,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    STATE(217), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
    STATE(222), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6809] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__block_start,
    ACTIONS(700), 1,
      sym__block_end,
    STATE(213), 1,
      sym_content_block,
    STATE(223), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_tag,
    ACTIONS(704), 1,
      sym__divert_mark,
    ACTIONS(706), 1,
      sym__eol,
    STATE(224), 1,
      sym_divert,
    STATE(228), 1,
      aux_sym__content_item_repeat1,
  [6845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    ACTIONS(708), 1,
      sym__block_start,
    STATE(221), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__block_start,
    ACTIONS(712), 1,
      sym__block_end,
    STATE(215), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym__block_start,
    ACTIONS(717), 1,
      sym__block_end,
    STATE(214), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__block_start,
    ACTIONS(719), 1,
      sym__block_end,
    STATE(214), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym__divert_mark,
    ACTIONS(721), 1,
      sym_identifier,
    STATE(266), 2,
      sym__param,
      sym_divert,
  [6915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      ts_builtin_sym_end,
    ACTIONS(723), 1,
      sym__block_start,
    STATE(217), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [6929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__divert_mark,
    ACTIONS(726), 1,
      anon_sym_LBRACK,
    ACTIONS(728), 1,
      sym__eol,
    STATE(301), 1,
      sym_divert,
  [6945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    ACTIONS(708), 1,
      sym__block_start,
    STATE(221), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      aux_sym__knot_mark_token1,
    STATE(259), 1,
      sym__knot_mark,
    STATE(210), 2,
      sym_knot,
      sym_function_declaration,
  [6973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      ts_builtin_sym_end,
    ACTIONS(732), 1,
      sym__block_start,
    STATE(221), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [6987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__block_start,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
    STATE(221), 2,
      sym_knot_block,
      aux_sym_ink_repeat2,
  [7001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__block_start,
    ACTIONS(712), 1,
      sym__block_end,
    STATE(214), 2,
      sym_stitch_block,
      aux_sym_ink_repeat1,
  [7015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_tag,
    ACTIONS(739), 1,
      sym__eol,
    STATE(236), 1,
      aux_sym__content_item_repeat1,
  [7028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_args_repeat1,
  [7041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__divert_mark,
    ACTIONS(745), 1,
      sym__eol,
    STATE(299), 1,
      sym_divert,
  [7054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_params_repeat1,
  [7067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym__eol,
    ACTIONS(751), 1,
      sym_tag,
    STATE(234), 1,
      aux_sym__content_item_repeat1,
  [7080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_args_repeat1,
  [7093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_return,
    STATE(291), 2,
      sym__code_stmt,
      sym_return,
  [7104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym__knot_mark_token1,
    ACTIONS(759), 1,
      sym__eol,
    STATE(306), 1,
      sym__knot_mark,
  [7117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_tag,
    ACTIONS(761), 1,
      sym__eol,
    STATE(234), 1,
      aux_sym__content_item_repeat1,
  [7130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym__block_start,
    ACTIONS(765), 1,
      sym__block_end,
    STATE(293), 1,
      sym_content_block,
  [7143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_tag,
    ACTIONS(770), 1,
      sym__eol,
    STATE(234), 1,
      aux_sym__content_item_repeat1,
  [7156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(772), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_tag,
    ACTIONS(774), 1,
      sym__eol,
    STATE(234), 1,
      aux_sym__content_item_repeat1,
  [7180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      aux_sym_params_repeat1,
  [7193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_identifier,
    ACTIONS(780), 1,
      sym__eol,
    STATE(252), 1,
      sym_qualified_name,
  [7206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym__block_start,
    ACTIONS(782), 1,
      sym__block_end,
    STATE(296), 1,
      sym_content_block,
  [7219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_args_repeat1,
  [7232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(772), 2,
      sym__eol,
      sym_tag,
  [7243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_params_repeat1,
  [7256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_EQ,
    STATE(239), 1,
      sym_stitch,
  [7266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 2,
      sym__block_start,
      sym__block_end,
  [7274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym__block_start,
      sym__block_end,
  [7282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 2,
      sym__block_start,
      sym__block_end,
  [7306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(191), 1,
      sym_qualified_name,
  [7316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 2,
      sym__block_start,
      sym__block_end,
  [7332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 2,
      sym__eol,
      sym_tag,
  [7340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 2,
      sym__block_start,
      sym__block_end,
  [7356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_identifier,
    STATE(252), 1,
      sym_qualified_name,
  [7366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 2,
      sym__eol,
      sym__divert_mark,
  [7374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 2,
      sym__block_start,
      ts_builtin_sym_end,
  [7390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_function,
    ACTIONS(820), 1,
      sym_identifier,
  [7400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_EQ,
    STATE(233), 1,
      sym_stitch,
  [7418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 2,
      sym__block_start,
      sym__block_end,
  [7426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 2,
      sym__block_start,
      sym__block_end,
  [7434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 2,
      sym__eol,
      sym__divert_mark,
  [7442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 2,
      sym__block_start,
      sym__block_end,
  [7450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 2,
      sym__eol,
      sym__divert_mark,
  [7474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 2,
      sym__eol,
      sym__divert_mark,
  [7482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(260), 1,
      sym_qualified_name,
  [7492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [7499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_LBRACE2,
  [7506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
  [7513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
  [7520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym__eol,
  [7527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
  [7534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym_identifier,
  [7541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
  [7548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym__eol,
  [7555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__eol,
  [7562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__eol,
  [7569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym__eol,
  [7576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym__eol,
  [7583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__block_end,
  [7590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_RBRACK,
  [7597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym_identifier,
  [7604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym__eol,
  [7611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_COLON,
  [7618] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_include_token2,
  [7625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_identifier,
  [7632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym__eol,
  [7639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym_identifier,
  [7646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym__block_end,
  [7653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym__eol,
  [7660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_identifier,
  [7667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym__block_end,
  [7674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym__eol,
  [7681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym__eol,
  [7688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym__eol,
  [7695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__eol,
  [7702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym__eol,
  [7709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
  [7716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
  [7723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym__eol,
  [7730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym__eol,
  [7737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym__eol,
  [7744] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(900), 1,
      aux_sym_todo_comment_token1,
  [7751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
  [7758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_identifier,
  [7765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym__eol,
  [7772] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LF,
  [7779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_identifier,
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
  [SMALL_STATE(12)] = 800,
  [SMALL_STATE(13)] = 857,
  [SMALL_STATE(14)] = 914,
  [SMALL_STATE(15)] = 971,
  [SMALL_STATE(16)] = 1017,
  [SMALL_STATE(17)] = 1063,
  [SMALL_STATE(18)] = 1109,
  [SMALL_STATE(19)] = 1155,
  [SMALL_STATE(20)] = 1201,
  [SMALL_STATE(21)] = 1247,
  [SMALL_STATE(22)] = 1289,
  [SMALL_STATE(23)] = 1333,
  [SMALL_STATE(24)] = 1375,
  [SMALL_STATE(25)] = 1401,
  [SMALL_STATE(26)] = 1443,
  [SMALL_STATE(27)] = 1473,
  [SMALL_STATE(28)] = 1515,
  [SMALL_STATE(29)] = 1559,
  [SMALL_STATE(30)] = 1597,
  [SMALL_STATE(31)] = 1627,
  [SMALL_STATE(32)] = 1661,
  [SMALL_STATE(33)] = 1697,
  [SMALL_STATE(34)] = 1737,
  [SMALL_STATE(35)] = 1781,
  [SMALL_STATE(36)] = 1807,
  [SMALL_STATE(37)] = 1848,
  [SMALL_STATE(38)] = 1875,
  [SMALL_STATE(39)] = 1913,
  [SMALL_STATE(40)] = 1951,
  [SMALL_STATE(41)] = 1989,
  [SMALL_STATE(42)] = 2027,
  [SMALL_STATE(43)] = 2065,
  [SMALL_STATE(44)] = 2103,
  [SMALL_STATE(45)] = 2127,
  [SMALL_STATE(46)] = 2151,
  [SMALL_STATE(47)] = 2185,
  [SMALL_STATE(48)] = 2217,
  [SMALL_STATE(49)] = 2255,
  [SMALL_STATE(50)] = 2285,
  [SMALL_STATE(51)] = 2323,
  [SMALL_STATE(52)] = 2351,
  [SMALL_STATE(53)] = 2389,
  [SMALL_STATE(54)] = 2413,
  [SMALL_STATE(55)] = 2437,
  [SMALL_STATE(56)] = 2475,
  [SMALL_STATE(57)] = 2499,
  [SMALL_STATE(58)] = 2537,
  [SMALL_STATE(59)] = 2561,
  [SMALL_STATE(60)] = 2599,
  [SMALL_STATE(61)] = 2637,
  [SMALL_STATE(62)] = 2675,
  [SMALL_STATE(63)] = 2703,
  [SMALL_STATE(64)] = 2741,
  [SMALL_STATE(65)] = 2779,
  [SMALL_STATE(66)] = 2815,
  [SMALL_STATE(67)] = 2853,
  [SMALL_STATE(68)] = 2887,
  [SMALL_STATE(69)] = 2919,
  [SMALL_STATE(70)] = 2947,
  [SMALL_STATE(71)] = 2987,
  [SMALL_STATE(72)] = 3025,
  [SMALL_STATE(73)] = 3063,
  [SMALL_STATE(74)] = 3103,
  [SMALL_STATE(75)] = 3143,
  [SMALL_STATE(76)] = 3183,
  [SMALL_STATE(77)] = 3221,
  [SMALL_STATE(78)] = 3259,
  [SMALL_STATE(79)] = 3297,
  [SMALL_STATE(80)] = 3335,
  [SMALL_STATE(81)] = 3373,
  [SMALL_STATE(82)] = 3411,
  [SMALL_STATE(83)] = 3449,
  [SMALL_STATE(84)] = 3489,
  [SMALL_STATE(85)] = 3527,
  [SMALL_STATE(86)] = 3562,
  [SMALL_STATE(87)] = 3597,
  [SMALL_STATE(88)] = 3632,
  [SMALL_STATE(89)] = 3667,
  [SMALL_STATE(90)] = 3702,
  [SMALL_STATE(91)] = 3735,
  [SMALL_STATE(92)] = 3768,
  [SMALL_STATE(93)] = 3801,
  [SMALL_STATE(94)] = 3836,
  [SMALL_STATE(95)] = 3871,
  [SMALL_STATE(96)] = 3906,
  [SMALL_STATE(97)] = 3929,
  [SMALL_STATE(98)] = 3960,
  [SMALL_STATE(99)] = 3995,
  [SMALL_STATE(100)] = 4026,
  [SMALL_STATE(101)] = 4061,
  [SMALL_STATE(102)] = 4096,
  [SMALL_STATE(103)] = 4131,
  [SMALL_STATE(104)] = 4166,
  [SMALL_STATE(105)] = 4201,
  [SMALL_STATE(106)] = 4236,
  [SMALL_STATE(107)] = 4269,
  [SMALL_STATE(108)] = 4304,
  [SMALL_STATE(109)] = 4339,
  [SMALL_STATE(110)] = 4374,
  [SMALL_STATE(111)] = 4409,
  [SMALL_STATE(112)] = 4444,
  [SMALL_STATE(113)] = 4479,
  [SMALL_STATE(114)] = 4514,
  [SMALL_STATE(115)] = 4543,
  [SMALL_STATE(116)] = 4578,
  [SMALL_STATE(117)] = 4610,
  [SMALL_STATE(118)] = 4642,
  [SMALL_STATE(119)] = 4668,
  [SMALL_STATE(120)] = 4700,
  [SMALL_STATE(121)] = 4722,
  [SMALL_STATE(122)] = 4756,
  [SMALL_STATE(123)] = 4784,
  [SMALL_STATE(124)] = 4816,
  [SMALL_STATE(125)] = 4848,
  [SMALL_STATE(126)] = 4878,
  [SMALL_STATE(127)] = 4912,
  [SMALL_STATE(128)] = 4934,
  [SMALL_STATE(129)] = 4968,
  [SMALL_STATE(130)] = 5002,
  [SMALL_STATE(131)] = 5024,
  [SMALL_STATE(132)] = 5056,
  [SMALL_STATE(133)] = 5078,
  [SMALL_STATE(134)] = 5112,
  [SMALL_STATE(135)] = 5134,
  [SMALL_STATE(136)] = 5153,
  [SMALL_STATE(137)] = 5182,
  [SMALL_STATE(138)] = 5213,
  [SMALL_STATE(139)] = 5244,
  [SMALL_STATE(140)] = 5275,
  [SMALL_STATE(141)] = 5306,
  [SMALL_STATE(142)] = 5337,
  [SMALL_STATE(143)] = 5368,
  [SMALL_STATE(144)] = 5399,
  [SMALL_STATE(145)] = 5430,
  [SMALL_STATE(146)] = 5449,
  [SMALL_STATE(147)] = 5480,
  [SMALL_STATE(148)] = 5501,
  [SMALL_STATE(149)] = 5532,
  [SMALL_STATE(150)] = 5563,
  [SMALL_STATE(151)] = 5594,
  [SMALL_STATE(152)] = 5625,
  [SMALL_STATE(153)] = 5656,
  [SMALL_STATE(154)] = 5685,
  [SMALL_STATE(155)] = 5714,
  [SMALL_STATE(156)] = 5733,
  [SMALL_STATE(157)] = 5762,
  [SMALL_STATE(158)] = 5793,
  [SMALL_STATE(159)] = 5812,
  [SMALL_STATE(160)] = 5843,
  [SMALL_STATE(161)] = 5874,
  [SMALL_STATE(162)] = 5895,
  [SMALL_STATE(163)] = 5917,
  [SMALL_STATE(164)] = 5941,
  [SMALL_STATE(165)] = 5965,
  [SMALL_STATE(166)] = 5989,
  [SMALL_STATE(167)] = 6013,
  [SMALL_STATE(168)] = 6035,
  [SMALL_STATE(169)] = 6059,
  [SMALL_STATE(170)] = 6081,
  [SMALL_STATE(171)] = 6100,
  [SMALL_STATE(172)] = 6117,
  [SMALL_STATE(173)] = 6134,
  [SMALL_STATE(174)] = 6153,
  [SMALL_STATE(175)] = 6172,
  [SMALL_STATE(176)] = 6191,
  [SMALL_STATE(177)] = 6210,
  [SMALL_STATE(178)] = 6229,
  [SMALL_STATE(179)] = 6252,
  [SMALL_STATE(180)] = 6271,
  [SMALL_STATE(181)] = 6294,
  [SMALL_STATE(182)] = 6313,
  [SMALL_STATE(183)] = 6330,
  [SMALL_STATE(184)] = 6347,
  [SMALL_STATE(185)] = 6366,
  [SMALL_STATE(186)] = 6382,
  [SMALL_STATE(187)] = 6402,
  [SMALL_STATE(188)] = 6424,
  [SMALL_STATE(189)] = 6444,
  [SMALL_STATE(190)] = 6466,
  [SMALL_STATE(191)] = 6484,
  [SMALL_STATE(192)] = 6500,
  [SMALL_STATE(193)] = 6518,
  [SMALL_STATE(194)] = 6534,
  [SMALL_STATE(195)] = 6552,
  [SMALL_STATE(196)] = 6570,
  [SMALL_STATE(197)] = 6587,
  [SMALL_STATE(198)] = 6602,
  [SMALL_STATE(199)] = 6617,
  [SMALL_STATE(200)] = 6632,
  [SMALL_STATE(201)] = 6647,
  [SMALL_STATE(202)] = 6664,
  [SMALL_STATE(203)] = 6681,
  [SMALL_STATE(204)] = 6698,
  [SMALL_STATE(205)] = 6715,
  [SMALL_STATE(206)] = 6733,
  [SMALL_STATE(207)] = 6753,
  [SMALL_STATE(208)] = 6773,
  [SMALL_STATE(209)] = 6791,
  [SMALL_STATE(210)] = 6809,
  [SMALL_STATE(211)] = 6826,
  [SMALL_STATE(212)] = 6845,
  [SMALL_STATE(213)] = 6859,
  [SMALL_STATE(214)] = 6873,
  [SMALL_STATE(215)] = 6887,
  [SMALL_STATE(216)] = 6901,
  [SMALL_STATE(217)] = 6915,
  [SMALL_STATE(218)] = 6929,
  [SMALL_STATE(219)] = 6945,
  [SMALL_STATE(220)] = 6959,
  [SMALL_STATE(221)] = 6973,
  [SMALL_STATE(222)] = 6987,
  [SMALL_STATE(223)] = 7001,
  [SMALL_STATE(224)] = 7015,
  [SMALL_STATE(225)] = 7028,
  [SMALL_STATE(226)] = 7041,
  [SMALL_STATE(227)] = 7054,
  [SMALL_STATE(228)] = 7067,
  [SMALL_STATE(229)] = 7080,
  [SMALL_STATE(230)] = 7093,
  [SMALL_STATE(231)] = 7104,
  [SMALL_STATE(232)] = 7117,
  [SMALL_STATE(233)] = 7130,
  [SMALL_STATE(234)] = 7143,
  [SMALL_STATE(235)] = 7156,
  [SMALL_STATE(236)] = 7167,
  [SMALL_STATE(237)] = 7180,
  [SMALL_STATE(238)] = 7193,
  [SMALL_STATE(239)] = 7206,
  [SMALL_STATE(240)] = 7219,
  [SMALL_STATE(241)] = 7232,
  [SMALL_STATE(242)] = 7243,
  [SMALL_STATE(243)] = 7256,
  [SMALL_STATE(244)] = 7266,
  [SMALL_STATE(245)] = 7274,
  [SMALL_STATE(246)] = 7282,
  [SMALL_STATE(247)] = 7290,
  [SMALL_STATE(248)] = 7298,
  [SMALL_STATE(249)] = 7306,
  [SMALL_STATE(250)] = 7316,
  [SMALL_STATE(251)] = 7324,
  [SMALL_STATE(252)] = 7332,
  [SMALL_STATE(253)] = 7340,
  [SMALL_STATE(254)] = 7348,
  [SMALL_STATE(255)] = 7356,
  [SMALL_STATE(256)] = 7366,
  [SMALL_STATE(257)] = 7374,
  [SMALL_STATE(258)] = 7382,
  [SMALL_STATE(259)] = 7390,
  [SMALL_STATE(260)] = 7400,
  [SMALL_STATE(261)] = 7408,
  [SMALL_STATE(262)] = 7418,
  [SMALL_STATE(263)] = 7426,
  [SMALL_STATE(264)] = 7434,
  [SMALL_STATE(265)] = 7442,
  [SMALL_STATE(266)] = 7450,
  [SMALL_STATE(267)] = 7458,
  [SMALL_STATE(268)] = 7466,
  [SMALL_STATE(269)] = 7474,
  [SMALL_STATE(270)] = 7482,
  [SMALL_STATE(271)] = 7492,
  [SMALL_STATE(272)] = 7499,
  [SMALL_STATE(273)] = 7506,
  [SMALL_STATE(274)] = 7513,
  [SMALL_STATE(275)] = 7520,
  [SMALL_STATE(276)] = 7527,
  [SMALL_STATE(277)] = 7534,
  [SMALL_STATE(278)] = 7541,
  [SMALL_STATE(279)] = 7548,
  [SMALL_STATE(280)] = 7555,
  [SMALL_STATE(281)] = 7562,
  [SMALL_STATE(282)] = 7569,
  [SMALL_STATE(283)] = 7576,
  [SMALL_STATE(284)] = 7583,
  [SMALL_STATE(285)] = 7590,
  [SMALL_STATE(286)] = 7597,
  [SMALL_STATE(287)] = 7604,
  [SMALL_STATE(288)] = 7611,
  [SMALL_STATE(289)] = 7618,
  [SMALL_STATE(290)] = 7625,
  [SMALL_STATE(291)] = 7632,
  [SMALL_STATE(292)] = 7639,
  [SMALL_STATE(293)] = 7646,
  [SMALL_STATE(294)] = 7653,
  [SMALL_STATE(295)] = 7660,
  [SMALL_STATE(296)] = 7667,
  [SMALL_STATE(297)] = 7674,
  [SMALL_STATE(298)] = 7681,
  [SMALL_STATE(299)] = 7688,
  [SMALL_STATE(300)] = 7695,
  [SMALL_STATE(301)] = 7702,
  [SMALL_STATE(302)] = 7709,
  [SMALL_STATE(303)] = 7716,
  [SMALL_STATE(304)] = 7723,
  [SMALL_STATE(305)] = 7730,
  [SMALL_STATE(306)] = 7737,
  [SMALL_STATE(307)] = 7744,
  [SMALL_STATE(308)] = 7751,
  [SMALL_STATE(309)] = 7758,
  [SMALL_STATE(310)] = 7765,
  [SMALL_STATE(311)] = 7772,
  [SMALL_STATE(312)] = 7779,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(164),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(106),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(17),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(230),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(232),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(28),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(255),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(289),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(288),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_block_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary, 2, .production_id = 16),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary, 2, .production_id = 16),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 24),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 24),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_item, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_item, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(37),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 32),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 32),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 25),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 25),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(169),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(99),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(15),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2), SHIFT_REPEAT(82),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(166),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(90),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(18),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(164),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(92),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(17),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(169),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(97),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(15),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 20),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 20),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_choice_content, 4, .production_id = 30),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 30),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2, .production_id = 12),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2, .production_id = 12), SHIFT_REPEAT(272),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 2, .production_id = 12), SHIFT_REPEAT(138),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(178),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(119),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(16),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 2, .production_id = 7),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_field, 4, .production_id = 18),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(188),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(136),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(20),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_field, 3, .production_id = 17),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_field, 3, .production_id = 18),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(189),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(154),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_repeat1, 2), SHIFT_REPEAT(19),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_repeat2, 1, .production_id = 4),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_field, 5, .production_id = 27),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_field, 4, .production_id = 27),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_logic_repeat1, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(163),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gather_repeat1, 2), SHIFT_REPEAT(165),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gather_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(167),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(168),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 13),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 13),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 15),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 4, .production_id = 14),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logic, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 14),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logic, 4, .production_id = 15),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(180),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divert, 2, .production_id = 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(186),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(187),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_field, 3, .production_id = 17),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(243),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat1, 2), SHIFT_REPEAT(261),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ink_repeat2, 2), SHIFT_REPEAT(220),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ink, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1, .production_id = 6),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2), SHIFT_REPEAT(234),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_item_repeat1, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, .production_id = 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(38),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(216),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 33),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 4),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, .production_id = 8),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 4),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 4, .production_id = 8),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 5),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, .production_id = 8),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 3, .production_id = 19),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_block, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_block, 3),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 26),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 29),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 5, .production_id = 34),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_choice_content, 4, .production_id = 28),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [836] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 5, .production_id = 31),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, .production_id = 5),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 23),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 22),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 4, .production_id = 21),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather, 3, .production_id = 7),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 11),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 6),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 10),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice_content, 2, .production_id = 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 3, .production_id = 9),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_comment, 3),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
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
