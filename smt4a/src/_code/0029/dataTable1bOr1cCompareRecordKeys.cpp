/* NON_MATCHING: the compiler predicates the key loads and subtraction instead of branching around them after the null checks. */
#include "common.h"

struct WordRecord {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 key;
};

extern "C" {

extern WordRecord *FUN_001ad9b4(u32 index);

/* Compares the record keys selected by two halfword identifiers. */
s32 dataTable1bOr1cCompareRecordKeys(const u16 *left, const u16 *right)
{
    WordRecord *a = FUN_001ad9b4(*left);
    WordRecord *b = FUN_001ad9b4(*right);
    if (a == NULL || b == NULL) {
        return 0;
    }
    return a->key - b->key;
}

} /* extern "C" */
