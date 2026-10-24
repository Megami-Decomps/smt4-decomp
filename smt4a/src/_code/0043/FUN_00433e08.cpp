/* NON_MATCHING: regular-expression pattern scanner (\Q..\E quoting, blanks skipped, per-character handlers through a pointer-to-member table); the control flow is written structured, retail interleaves the quoted and unquoted loops with gotos */
#include "common.h"

struct PatternNode {
    /* 0x00 */ PatternNode *next;
    /* 0x04 */ PatternNode *previous;
    /* 0x08 */ u8 type;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u16 character;
};

struct PatternParser {
    /* 0x00 */ PatternNode *tail;      /* node list, newest first */
    /* 0x04 */ PatternNode *head;
    /* 0x08 */ void *arena;            /* node allocator */
    /* 0x0C */ const u16 *pattern;
    /* 0x10 */ s32 cursor;
    /* 0x14 */ s32 length;
    /* 0x18 */ s32 groupDepth;
};

typedef s32 (PatternParser::*PatternHandler)();

#define PATTERN_NODE_LITERAL 0
#define PATTERN_NODE_END 0x12
#define PATTERN_ERROR_UNMATCHED_END_QUOTE 2
#define PATTERN_ERROR_OUT_OF_MEMORY 1

extern "C" {
extern const PatternHandler g_patternHandlers[0x5F]; /* indexed by character - 0x20 */

void FUN_004387f0(void *block, u32 units);
s32 halfSourceNext(PatternParser *parser, PatternNode **node);
}

/* Appends a new node to the parser's list, or returns NULL when the arena is exhausted. */
static PatternNode *patternNodeAppend(PatternParser *parser)
{
    PatternNode *node = (PatternNode *)parser->arena;
    FUN_004387f0(node, 1);
    if (node == NULL)
        return NULL;
    node->next = parser->tail;
    node->previous = (PatternNode *)parser;
    parser->tail = node;
    node->next->previous = node;
    return node;
}

static inline bool patternIsBlank(u16 c)
{
    return c == 0x20 || c == 0x3000;
}

/* Scans the pattern from the parser's cursor to `end` into nodes. Returns 0 on success, 1 when
 * the arena runs out, 2 for a stray \E, or a handler's error. */
extern "C" s32 FUN_00433e08(PatternParser *parser, void *arena, const u16 *text, s32 end)
{
    bool quoting = false;
    parser->arena = arena;
    parser->pattern = text;
    parser->length = end;
    parser->groupDepth = 0;

    while (parser->cursor != parser->length) {
        s32 cursor = parser->cursor;
        if (!quoting) {
            if (cursor != parser->length - 1 && text[cursor] == '\\' && text[cursor + 1] == 'Q') {
                parser->cursor = cursor + 2;
                quoting = true;
                continue;
            }
            if (cursor != parser->length - 1 && text[cursor] == '\\' && text[cursor + 1] == 'E')
                return PATTERN_ERROR_UNMATCHED_END_QUOTE;
            if (patternIsBlank(text[cursor])) {
                parser->cursor = cursor + 1;
                continue;
            }
            PatternNode *node = patternNodeAppend(parser);
            if (node == NULL)
                return PATTERN_ERROR_OUT_OF_MEMORY;
            u32 c = parser->pattern[parser->cursor];
            s32 result;
            if (c - 0x20 < 0x5F)
                result = (parser->*g_patternHandlers[c - 0x20])();
            else
                result = halfSourceNext(parser, &node);
            if (result != 0)
                return result;
        } else {
            if (cursor != parser->length - 1 && text[cursor] == '\\' && text[cursor + 1] == 'E') {
                parser->cursor = cursor + 2;
                quoting = false;
                continue;
            }
            PatternNode *node = patternNodeAppend(parser);
            if (node == NULL)
                return PATTERN_ERROR_OUT_OF_MEMORY;
            node->type = PATTERN_NODE_LITERAL;
            node->character = parser->pattern[parser->cursor];
            parser->cursor++;
        }
    }

    PatternNode *node = patternNodeAppend(parser);
    if (node == NULL)
        return PATTERN_ERROR_OUT_OF_MEMORY;
    node->type = PATTERN_NODE_END;
    return 0;
}
