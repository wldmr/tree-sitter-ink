#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include <stdint.h>

typedef enum {
  END_OF_LINE,
  START_OF_FILE,
  CHOICE_BLOCK_START,
  CHOICE_BLOCK_END,
  GATHER_BLOCK_START,
  GATHER_BLOCK_END,
  ERROR,
} Token;

#define DEBUG 0
// From this badass: https://stackoverflow.com/a/1644898
// and this https://www.reddit.com/r/C_Programming/comments/jq8zsq/gblfq5y/ for the ## __VA_ARGS bit
#define DBG(fmt, ...) \
        do { if (DEBUG) fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
                                __LINE__, __func__, ## __VA_ARGS__); } while (0)

// Less noisy than DBG, but provides no context.
#define MSG(fmt, ...) \
        do { if (DEBUG) fprintf(stderr, fmt, ## __VA_ARGS__); } while (0)

inline void print_valid_symbols(const bool *valid_symbols) {
  if (valid_symbols[ERROR])
    MSG("======================================== ERROR =========================================\n");
  else
    MSG("========================================================================================\n");
  MSG(" %s END_OF_LINE        \n", valid_symbols[END_OF_LINE]        ? "*" : "-");
  MSG(" %s CHOICE_BLOCK_START \t", valid_symbols[CHOICE_BLOCK_START] ? "*" : "-");
  MSG(" %s CHOICE_BLOCK_END   \n", valid_symbols[CHOICE_BLOCK_END]   ? "*" : "-");
  MSG(" %s GATHER_BLOCK_START \t", valid_symbols[GATHER_BLOCK_START] ? "*" : "-");
  MSG(" %s GATHER_BLOCK_END   \n", valid_symbols[GATHER_BLOCK_END]   ? "*" : "-");
  MSG("------------------\n");
}

typedef enum { NONE, CONTENT, CHOICE, GATHER } BlockType;

// Typedef for numeric block level; juuust in case we want to change the amount of nesting we allow.
// To future self … CAUTION: This needs to be serialized to a string of bytes,
// so account for that when changing it to something larger.
typedef uint8_t BlockLevel;
const BlockLevel BLOCK_LEVEL_MIN = 0;
const BlockLevel BLOCK_LEVEL_MAX = UINT8_MAX;

typedef struct BlockInfo {
  BlockType type;
  uint8_t level;
} BlockInfo;

#define BLOCK_INFO_INIT (BlockInfo) {.type = NONE, .level = 0}

typedef struct {
  BlockInfo next_block;
  Array(BlockLevel) blocks;
} Scanner;

inline void print_scanner_state(Scanner *scanner) {
  MSG("Scanner: next_block=");
  switch(scanner->next_block.type) {
  case NONE: MSG("NONE"); break;
  case CONTENT: MSG("CONTENT"); break;
  case CHOICE: MSG("CHOICE"); break;
  case GATHER: MSG("GATHER"); break;
  default: assert(false); // Unhandled Enum value == Bug
  }
  MSG("|%d; Levels: ", scanner->next_block.level);
  for (int i = 0; i < scanner->blocks.size; i++)
    MSG("%d", *array_get(&scanner->blocks, i));
  MSG("\n");
}


////////////////////
// Lexing Helpers //
////////////////////

static inline void mark_end(TSLexer *lexer) {
  lexer->mark_end(lexer);
}

static inline void consume(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static inline void skip(TSLexer *lexer) {
  lexer->advance(lexer, true);
}

static inline bool is_eof(TSLexer *lexer) {
  return lexer->eof(lexer);
}

static inline int32_t lookahead(TSLexer *lexer) {
  return lexer->lookahead;
}

static inline bool is_at_line_start(TSLexer *lexer) {
  return lexer->get_column(lexer) == 0;
}


///////////////////////
// Scanner Callbacks //
///////////////////////
unsigned tree_sitter_ink_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  uint32_t size = 0;

  buffer[size++] = (char) scanner->next_block.type;
  buffer[size++] = (char) scanner->next_block.level;

  for (uint32_t i = 0; i < scanner->blocks.size && size <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE; i++) {
    buffer[size] = (char) *array_get(&scanner->blocks, i);
    size++;
  }

  if (size >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    // printf needs to be commented out to be compiled for wasm (i.e. to use the playground).
    printf("WARN: Bumped up against tree sitter serialization limit (%d)! We may have lost data!\n",
           TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
  }
  // MSG("Serializing %d bytes of state\n", size);
  return size;
}

void tree_sitter_ink_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;

  // reset all members as per suggestion in the docs
  scanner->next_block = BLOCK_INFO_INIT;
  array_delete(&scanner->blocks);

  // init from buffer, if present and required
  // MSG("Deserializing %d bytes of state.\n", length);
  if (buffer != NULL && length > 0) {
    uint32_t size = 0;

    const BlockType type = (BlockType) buffer[size++];
    const BlockLevel level = (BlockLevel)buffer[size++];
    scanner->next_block = (BlockInfo) {.type = type, .level = level };

    while (size < length)
      array_push(&scanner->blocks, buffer[size++]);
  }
  // MSG("Deserialized %d bytes of state.\n", size);

  // Make sure the thing is never empty so we never have to check.
  if (scanner->blocks.size == 0)
    array_push(&scanner->blocks, BLOCK_LEVEL_MIN);
}


void *tree_sitter_ink_external_scanner_create(void) {
  Scanner *scanner = ts_calloc(1, sizeof(Scanner));
  tree_sitter_ink_external_scanner_deserialize(scanner, NULL, 0);
  return scanner;
}

void tree_sitter_ink_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  array_delete(&scanner->blocks);
  ts_free(scanner);
}

inline char pretty(char c) {
  switch (c) {
    case '\n':
    case '\t':
    case '\f':
    case '\r':
      return '\0';
    default:
      return c;
  }
}

inline void skip_ws(TSLexer *lexer) {
  while (lookahead(lexer) <= ' ' && !is_eof(lexer))
    skip(lexer);
}

inline void skip_ws_upto_cr(TSLexer *lexer) {
  while (lookahead(lexer) <= ' ' && lookahead(lexer) != '\n' && !is_eof(lexer))
    skip(lexer);
}

bool start_block(TSLexer *lexer, Scanner *scanner, Token token, BlockLevel level) {
  lexer->result_symbol = token;
  array_push(&scanner->blocks, level);
  scanner->next_block = BLOCK_INFO_INIT;  // Is this necessary?
  return true; // Just so this can be called inline.
}

bool end_block(TSLexer *lexer, Scanner *scanner, Token token) {
  lexer->result_symbol = token;
  array_pop(&scanner->blocks);
  return true; // Just so this can be called inline.
}

/// Looks ahead to see if a new block could be started here.
///
/// Callers must call scanner->mark_end themselves if necessary; this function does not mark anything.
///
/// At ==, =, or EOF, BlockType is NONE.
///
/// Mutates lexer, does not mutate scanner.
BlockInfo lookahead_block_start(TSLexer *lexer, Scanner *scanner) {
  MSG("Looking ahead for block start marker\n");

  skip_ws(lexer);

  BlockInfo block = BLOCK_INFO_INIT;

  if (lookahead(lexer) == '=' || is_eof(lexer)) {
    MSG("Next block: None.\n");
    return block;
  }

  BlockLevel markers = 0;
  uint32_t c = lookahead(lexer);
  uint32_t first_marker = 0;
  while ((c == '*' || c == '+' || (c == '-')) && (markers < BLOCK_LEVEL_MAX)) {
    MSG("%c ", c);
    consume(lexer);
    if (c == '-' && lookahead(lexer) == '>') {
      MSG("capped off by a divert ");
      break;
    } else {
      markers += 1;
      if (first_marker == 0) first_marker = c;
      skip_ws(lexer);
      c = lookahead(lexer);
    }
  }

  MSG("Next block is flow. Level indicators: %d\n", markers);

  block.level = markers;

  switch (first_marker) {
  case '-':
    block.type = GATHER;
    break;
  case '*':
  case '+':
    block.type = CHOICE;
    break;
  default:
    block.type = CONTENT;
    break;
  }

  return block;
}


bool tree_sitter_ink_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  Scanner *scanner = (Scanner *)payload;

  print_valid_symbols(valid_symbols);
  print_scanner_state(scanner);

  if (valid_symbols[ERROR]) {
    MSG("In error recovery.\n");
    // MSG("Abort like babies!\n"); assert(false);
    // return false;
  }

  skip_ws_upto_cr(lexer);
  mark_end(lexer);

  int32_t lookahead_ = lookahead(lexer);
  MSG("at '%c' (%d).\n", pretty(lookahead_), lookahead_);

  if (valid_symbols[START_OF_FILE] && !valid_symbols[ERROR]) {
    MSG("At Start of file; determine first block marker, if any.\n");
    scanner->next_block = lookahead_block_start(lexer, scanner);
    lexer->result_symbol = START_OF_FILE;
    return true;
  }

  // first, try to end lines (that's always the innermost 'block')
  if (valid_symbols[END_OF_LINE]) {
    MSG("Checking for EO[L|F]\n");
    if (lookahead_ == '\n') {
      MSG("  at EOL\n");
      // Linebreak means the next line could start a new block.
      scanner->next_block = lookahead_block_start(lexer, scanner);
      lexer->result_symbol = END_OF_LINE;
      return true;
    } else if (is_eof(lexer)) {
      MSG("  at EOF\n");
      scanner->next_block = BLOCK_INFO_INIT;
      lexer->result_symbol = END_OF_LINE;
      return true;
    }
  }

  if (valid_symbols[GATHER_BLOCK_START] || valid_symbols[GATHER_BLOCK_END]
   || valid_symbols[CHOICE_BLOCK_START] || valid_symbols[CHOICE_BLOCK_END]) {
    MSG("Checking for Block delimiters.\n");

    if (lookahead_ == '\n') {
      skip(lexer);
      mark_end(lexer);
    }
    

    BlockLevel current_block_level = *array_back(&scanner->blocks);
    BlockInfo next_block = scanner->next_block;

    if (next_block.type == NONE) {
      MSG("Blocks can only end here.\n");
      if (valid_symbols[CHOICE_BLOCK_END]) {
        return end_block(lexer, scanner, CHOICE_BLOCK_END);
      } else if (valid_symbols[GATHER_BLOCK_END]) {
        return end_block(lexer, scanner, GATHER_BLOCK_END);
      } else {
        return false; // Weird. Error recovery next?
      }
    }

    if (next_block.type == CONTENT) {
      MSG("Next up is just content, the block remains the same.\n");
      return false;
    }

    MSG("Current %d -> Next %d|%d: ", current_block_level, next_block.type, next_block.level);
    if (next_block.level > current_block_level) {
      MSG("Next block is deeper. Start block.\n");
      if (next_block.type == CHOICE && valid_symbols[CHOICE_BLOCK_START]) {
        return start_block(lexer, scanner, CHOICE_BLOCK_START, next_block.level);
      } else if (next_block.type == GATHER && valid_symbols[GATHER_BLOCK_START]) {
        return start_block(lexer, scanner, GATHER_BLOCK_START, next_block.level);
      }
    } else {
      MSG("Next block same or shallower. End block.\n");
      if (valid_symbols[CHOICE_BLOCK_END]) {
        return end_block(lexer, scanner, CHOICE_BLOCK_END);
      } else if (valid_symbols[GATHER_BLOCK_END]) {
        return end_block(lexer, scanner, GATHER_BLOCK_END);
      } else {
        return false; // Weird. Error recovery next?
      }
    }
  }

  MSG("*** FALLTHROUGH! ***\n");
  return false;
}
