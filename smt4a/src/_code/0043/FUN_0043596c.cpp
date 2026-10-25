/* NON_MATCHING: regular-expression alternation parser (pattern -> branch list); handler tables are pointer-to-member arrays indexed by token type and the allocation/link sequences are inlined list helpers, written here as plain structured code */
#include "common.h"
#include "gfx/MaskWork.h"
#include <new>

struct PatternTokenNode {
    /* 0x00 */ PatternTokenNode *next;
    /* 0x04 */ PatternTokenNode *previous;
    /* 0x08 */ u8 type;           /* 1: alternation separator */
};

/* A list node that owns a sub-list (alternatives of one group). */
struct PatternGroupNode {
    /* 0x00 */ PatternGroupNode *next;
    /* 0x04 */ PatternGroupNode *previous;
    /* 0x08 */ PatternGroupNode *branchHead;   /* sub-list sentinel: points at itself when empty */
    /* 0x0C */ PatternGroupNode *branchTail;
    /* 0x10 */ void *arena;                    /* allocator of the branch nodes */
    /* 0x14 */ s32 generation;
};

struct PatternParser {
    /* 0x00 */ PatternTokenNode *current;
    /* 0x04 */ PatternGroupNode groups;        /* group list sentinel */
    /* 0x0C */ void *arena;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 generation;
};

typedef s32 (PatternParser::*PatternParseHandler)(s32 *status, PatternGroupNode **cursor);
typedef s32 (PatternParser::*PatternApplyHandler)(PatternGroupNode **result, PatternGroupNode **cursor);

#define PATTERN_TOKEN_ALTERNATION 1
#define PATTERN_ERROR_OUT_OF_MEMORY 2

extern "C" {
extern const PatternParseHandler g_patternParseHandlers[];  /* indexed by token type */
extern const PatternApplyHandler g_patternApplyHandlers[];

s32 FUN_004351b8(PatternParser *parser, PatternGroupNode **first, PatternGroupNode **cursor);
void FUN_004387f0(void *block, u32 units);
void variantSetPlain(void *variant, PatternGroupNode **value);

/* Appends a freshly allocated, empty group node to a list; NULL when the arena is exhausted. */
static PatternGroupNode *patternGroupAppend(void *arena, PatternGroupNode *sentinel)
{
    PatternGroupNode *node = (PatternGroupNode *)arena;
    FUN_004387f0(node, 2);
    if (node == NULL)
        return NULL;
    new (&reinterpret_cast<MaskWorkNode *>(node)->payload) Variant;
    node->next = sentinel->next;
    node->previous = sentinel;
    sentinel->next = node;
    node->next->previous = node;
    return node;
}

/* Parses `branch ('|' branch)*`: the first branch is parsed by FUN_004351b8, every further branch
 * is appended to a group node which then replaces the first branch in *out. Returns 0 or an error. */
s32 FUN_0043596c(PatternParser *parser, PatternGroupNode **out, PatternGroupNode **cursor)
{
    PatternGroupNode *first = NULL;
    PatternGroupNode *start = *cursor;
    s32 status = FUN_004351b8(parser, &first, &start);
    if (status != 0)
        return status;

    if (parser->current->type != PATTERN_TOKEN_ALTERNATION) {
        *out = first;
        return 0;
    }

    PatternGroupNode *group = (PatternGroupNode *)parser->arena;
    FUN_004387f0(group, 2);
    if (group == NULL)
        return PATTERN_ERROR_OUT_OF_MEMORY;
    PatternGroupNode *branches = group + 0;
    branches->branchTail = NULL;
    branches->branchHead = branches;
    group->next = parser->groups.next;
    group->previous = &parser->groups;
    parser->groups.next = group;
    group->next->previous = group;
    group->generation = parser->generation;

    PatternGroupNode *branch = patternGroupAppend(first->arena, first);
    if (branch == NULL)
        return PATTERN_ERROR_OUT_OF_MEMORY;
    PatternGroupNode *value = group;
    variantSetPlain(branch + 1, &value);

    while (parser->current->type == PATTERN_TOKEN_ALTERNATION) {
        parser->current = parser->current->next;
        PatternGroupNode *position = *cursor;
        s32 pending = 0;
        PatternGroupNode *next = NULL;
        for (;;) {
            s32 result = (parser->*g_patternParseHandlers[parser->current->type])(&pending, &position);
            if (result == 1)
                break;
            if (result != 0)
                return result;
            result = (parser->*g_patternApplyHandlers[parser->current->type])(&next, &position);
            if (result > 1)
                return result;
            position = next;
        }
        first = position;
        PatternGroupNode *appended = patternGroupAppend(position->arena, position);
        if (appended == NULL)
            return PATTERN_ERROR_OUT_OF_MEMORY;
        value = group;
        variantSetPlain(appended + 1, &value);
    }
    *out = group;
    return 0;
}

} /* extern "C" */
