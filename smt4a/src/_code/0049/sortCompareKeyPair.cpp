#include "common.h"

struct KeyedEntry {
    /* 0x00 */ u16 primary;
    /* 0x02 */ u16 secondary;
};

/* Sorts by primary key, then by secondary key. */
extern "C" s32 sortCompareKeyPair(const KeyedEntry *left, const KeyedEntry *right)
{
    s32 difference = left->primary - right->primary;
    if (difference == 0)
        difference = left->secondary - right->secondary;
    return difference;
}
