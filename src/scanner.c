#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

typedef enum {
  END_OF_LINE,
  BLOCK_START,
  BLOCK_END,
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
  MSG(" %s END_OF_LINE  \t", valid_symbols[END_OF_LINE]   ? "*" : "-");
  MSG(" %s BLOCK_START  \t", valid_symbols[BLOCK_START]    ? "*" : "-");
  MSG(" %s BLOCK_END    \n", valid_symbols[BLOCK_END]      ? "*" : "-");
  MSG("------------------\n");
}

typedef uint8_t BlockLevel;
const BlockLevel BT_NONE = 0;
const BlockLevel BT_KNOT = 1;
const BlockLevel BT_STITCH = 2;
// CONTENT can actually nest arbitrarily, so this is just the lowest number for content.
const BlockLevel BT_CONTENT = 3;

typedef struct {
  Array(BlockLevel) blocks;
} Scanner;


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

  for (uint32_t i = 0; i < scanner->blocks.size && size <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE; i++) {
    buffer[size] = (char) *array_get(&scanner->blocks, i);
    size++;
  }

  if (size >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    // MSG("WARN: Bumped up against tree sitter serialization limit (%d)! We may have lost data!\n",
           // TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
  }
  // MSG("Serializing %d bytes of state\n", size);
  return size;
}

void tree_sitter_ink_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;

  // reset all members as per suggestion in the docs
  array_delete(&scanner->blocks);

  // init from buffer, if present and required
  // MSG("Deserializing %d bytes of state.\n", length);
  if (buffer != NULL && length > 0) {
    uint32_t size = 0;
    while (size < length)
      array_push(&scanner->blocks, buffer[size++]);
    // MSG("Deserialized %d bytes of state.\n", size);
  }

  // Make sure the thing is never empty so we never have to check.
  if (scanner->blocks.size == 0)
    array_push(&scanner->blocks, BT_NONE);
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

/// Looks ahead to see if a new block could be started here.
///
/// Callers must call scanner->mark_end themselves if necessary; this function does not call it.
///
/// If no block type can be found, return BT_NONE. This only happens at EOF (or at trailing whitespace before EOF).
///
/// Mutates lexer, does not mutate scanner.
BlockLevel lookahead_block_start(TSLexer *lexer, Scanner *scanner) {
  MSG("Looking ahead for block start marker\n");

  // Only interested in what happens _after_ any whitespace
  for (
    int32_t c = lookahead(lexer);
    c <= ' ' && !is_eof(lexer);
    c = lookahead(lexer)
  ) skip(lexer);
  

  if (lookahead(lexer) == '\0' && is_eof(lexer)) {
    MSG("Next block: %d, because EOF.\n", BT_NONE);
    return BT_NONE;
  }

  if (lookahead(lexer) != '=') {
    MSG("Next block: %d.\n", BT_CONTENT);
    return BT_CONTENT;
  }

  // We've seen one '='; now determine whether we'll start a stitch or a knot.
  consume(lexer);
  if (lookahead(lexer) == '=') {
    MSG("Next block: %d.\n", BT_KNOT);
    return BT_KNOT;
  } else {
    MSG("Next block: %d.\n", BT_STITCH);
    return BT_STITCH;
  }
}


bool tree_sitter_ink_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  Scanner *scanner = (Scanner *)payload;

  int32_t lookahead_ = lookahead(lexer);
  MSG("\nat '%c' (%d).\n", pretty(lookahead_), lookahead_);
  print_valid_symbols(valid_symbols);

  // Start of zero length tokens, so we'll mark this spot.
  mark_end(lexer);

  if (valid_symbols[ERROR]) {
    MSG("In error recovery.\n");
    // MSG("Abort like babies!\n");
    // return false;
  }

  // first, try to end lines (that's always the innermost 'block')
  if (valid_symbols[END_OF_LINE]) {
    MSG("Checking for EO[L|F]\n");
    if (lookahead_ == '\n') {
      MSG("  at EOL\n");
      skip(lexer);
      lexer->result_symbol = END_OF_LINE;
      return true;
    } else if (is_eof(lexer)) {
      MSG("  at EOF\n");
      lexer->result_symbol = END_OF_LINE;
      return true;
    }
  }

  if (valid_symbols[BLOCK_START] || valid_symbols[BLOCK_END]) {
    MSG("Checking for Block delimiters.\n");
    if (scanner->blocks.size == 0) {
      MSG("Why are there more blocks in the scanner? Highly suspicious. Abort!");
      goto after_block_delimiters;
    }

    mark_end(lexer);  // Block tokens are zero width.

    BlockLevel current_block = *array_back(&scanner->blocks);
    BlockLevel next_block = lookahead_block_start(lexer, scanner);

    if (next_block == BT_NONE) {
      MSG("We're at the end of file, we can only close the current block.\n");
      if (valid_symbols[BLOCK_END] && !valid_symbols[ERROR]) {
        lexer->result_symbol = BLOCK_END;
        // We already checked for the existence of blocks at the start, so we can just pop.
        array_pop(&scanner->blocks);
        return true;
      }
    }

    // This next block may look a bit much, but the idea is simple:
    // Based on the current block and the next block, we decide whether to start or end a block.
    else if (current_block == BT_KNOT) {
      switch (next_block) {
        case BT_KNOT:
          MSG("  Knot->Knot: Must end current knot block.\n");
          lexer->result_symbol = BLOCK_END;
          array_pop(&scanner->blocks);
          return true;
        case BT_STITCH:
          MSG("  Knot->Stitch: Start stitch, no need to end the knot yet.\n");
          lexer->result_symbol = BLOCK_START;
          array_push(&scanner->blocks, BT_STITCH);
          return true;
        case BT_CONTENT:
          MSG("  Knot->Content: Start content block, no need to end the knot yet.\n");
          lexer->result_symbol = BLOCK_START;
          array_push(&scanner->blocks, BT_CONTENT);
          return true;
        default:
          assert(false);  // if we land here, it's a bug!
      }
    } else if (current_block == BT_STITCH) {
      switch (next_block) {
        case BT_KNOT:
          MSG("  Stitch->Knot: Must end current stitch block.\n");
          lexer->result_symbol = BLOCK_END;
          array_pop(&scanner->blocks);
          return true;
        case BT_STITCH:
          MSG("  Stitch->Stitch: Must end current stitch block.\n");
          lexer->result_symbol = BLOCK_END;
          array_pop(&scanner->blocks);
          return true;
        case BT_CONTENT:
          MSG("  Stitch->Content: Start content block, no need to end the knot yet.\n");
          lexer->result_symbol = BLOCK_START;
          array_push(&scanner->blocks, BT_CONTENT);
          return true;
        default:
          assert(false);  // if we land here, it's a bug!
      }
    } else if (current_block == BT_CONTENT) {
      switch (next_block) {
        case BT_KNOT:
          MSG("  Content->Knot: Must end current content block.\n");
          lexer->result_symbol = BLOCK_END;
          array_pop(&scanner->blocks);
          return true;
        case BT_STITCH:
          MSG("  Content->Stitch: Must end current content block.\n");
          lexer->result_symbol = BLOCK_END;
          array_pop(&scanner->blocks);
          return true;
        case BT_CONTENT:
          // TODO: Content should eventually nest
          MSG("  Content->Content: Do nothing (for now).\n");
          break;
        default:
          assert(false);  // if we land here, it's a bug!
      }
    } else if (current_block == BT_NONE) {
      switch (next_block) {
        case BT_KNOT:
          MSG("  None->Knot: Must start knot block.\n");
          lexer->result_symbol = BLOCK_START;
          array_push(&scanner->blocks, BT_KNOT);
          return true;
        case BT_STITCH:
          MSG("  None->Stitch: Must start stitch block.\n");
          lexer->result_symbol = BLOCK_START;
          array_push(&scanner->blocks, BT_STITCH);
          return true;
        case BT_CONTENT:
          MSG("  None->Content: Must start content block.\n");
          lexer->result_symbol = BLOCK_START;
          array_push(&scanner->blocks, BT_CONTENT);
          return true;
        default:
          assert(false);  // if we land here, it's a bug!
      }
    }

  }
  after_block_delimiters:

  MSG("*** FALLTHROUGH! ***\n");
  return false;
}

