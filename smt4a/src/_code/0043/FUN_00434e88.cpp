/* NON_MATCHING: classifies an id-chain pattern (exact, prefix, suffix, contains) and matches it against a wide string; written from the decompilation, branch layout not compared with retail */
#include "common.h"

#define PAT_LITERAL 0        /* a plain id */
#define PAT_WILD_OPEN 7      /* start of "anything" (flag 0), followed by PAT_WILD_BODY */
#define PAT_WILD_BODY 0xC
#define PAT_ANCHOR 0x11      /* flag 0: begin anchor, flag 1: end anchor */
#define PAT_END 0x12

#define PAT_RESULT_UNSUPPORTED 0
#define PAT_RESULT_MATCH 1
#define PAT_RESULT_NO_MATCH 2

/* A node of the pattern chain. */
struct IdPatternNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ IdPatternNode *next;
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u8 flag;
};

struct IdPattern {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ IdPatternNode *first;
};

struct IdChainCursor {
    IdPatternNode *node;
};

struct IdSequence {
    /* 0x00 */ u16 *ids;
    /* 0x04 */ u32 length;
};

extern "C" {
u32 wstrlenU16(u16 *text);
bool idChainMatchSequence(IdSequence *sequence, IdChainCursor *cursor, u32 start, u32 count);

/* Counts the literal nodes from `node` on and returns the node that ends the run. */
static __inline IdPatternNode *patternSkipLiterals(IdPatternNode *node, u32 *count)
{
    while (node->kind == PAT_LITERAL) {
        (*count)++;
        node = node->next;
    }
    return node;
}

/* Returns 1 when `text` matches the pattern, 2 when it does not and 0 for a pattern shape that
 * is not supported. */
u32 FUN_00434e88(IdSequence *sequence, IdPattern *pattern, u16 *text, s32 unused)
{
    sequence->ids = text;
    u32 length = wstrlenU16(text);
    sequence->length = length;
    IdChainCursor cursor;
    cursor.node = pattern->first;
    IdPatternNode *first = cursor.node;
    u32 count;
    bool matched;

    if (first->kind == PAT_LITERAL) {
        /* literals, then one of: end, end anchor, trailing wildcard */
        count = 1;
        IdPatternNode *tail = patternSkipLiterals(first->next, &count);
        if (tail->kind == PAT_WILD_OPEN) {
            if (tail->flag != 0 || tail->next->kind != PAT_WILD_BODY || tail->next->next->kind != PAT_END)
                return PAT_RESULT_UNSUPPORTED;
            if (length < count)
                return PAT_RESULT_NO_MATCH;
        } else if (tail->kind == PAT_ANCHOR) {
            if (tail->flag != 1 || tail->next->kind != PAT_END)
                return PAT_RESULT_UNSUPPORTED;
            if (length != count)
                return PAT_RESULT_NO_MATCH;
        } else if (tail->kind == PAT_END) {
            if (length != count)
                return PAT_RESULT_NO_MATCH;
        } else {
            return PAT_RESULT_UNSUPPORTED;
        }
        matched = idChainMatchSequence(sequence, &cursor, 0, count);
    } else if (first->kind == PAT_WILD_OPEN) {
        /* leading wildcard: literals, then end (suffix) or another wildcard (contains) */
        if (first->flag != 0 || first->next->kind != PAT_WILD_BODY)
            return PAT_RESULT_UNSUPPORTED;
        count = 0;
        IdPatternNode *literals = first->next->next;
        IdPatternNode *tail = patternSkipLiterals(literals, &count);
        if (tail->kind == PAT_WILD_OPEN) {
            if (count == 0 || tail->flag != 0 || tail->next->kind != PAT_WILD_BODY || tail->next->next->kind != PAT_END)
                return PAT_RESULT_UNSUPPORTED;
            if (length < count)
                return PAT_RESULT_NO_MATCH;
            for (u32 start = 0; start + count <= sequence->length; start++) {
                cursor.node = literals;
                if (idChainMatchSequence(sequence, &cursor, start, count))
                    return PAT_RESULT_MATCH;
            }
            return PAT_RESULT_NO_MATCH;
        }
        if (tail->kind != PAT_END || count == 0)
            return PAT_RESULT_UNSUPPORTED;
        if (length < count)
            return PAT_RESULT_NO_MATCH;
        cursor.node = literals;
        matched = idChainMatchSequence(sequence, &cursor, length - count, count);
    } else if (first->kind == PAT_ANCHOR && first->flag == 0) {
        /* begin anchor: literals, then end or end anchor */
        count = 0;
        cursor.node = first->next;
        IdPatternNode *tail = patternSkipLiterals(cursor.node, &count);
        if (tail->kind == PAT_ANCHOR) {
            if (count == 0 || tail->flag != 1 || tail->next->kind != PAT_END)
                return PAT_RESULT_UNSUPPORTED;
            if (length != count)
                return PAT_RESULT_NO_MATCH;
        } else if (tail->kind == PAT_END) {
            if (count == 0)
                return PAT_RESULT_UNSUPPORTED;
            if (length != count)
                return PAT_RESULT_NO_MATCH;
        } else {
            return PAT_RESULT_UNSUPPORTED;
        }
        matched = idChainMatchSequence(sequence, &cursor, 0, count);
    } else {
        return PAT_RESULT_UNSUPPORTED;
    }
    return matched ? PAT_RESULT_MATCH : PAT_RESULT_NO_MATCH;
}

} /* extern "C" */
