#include "common.h"

struct AocRecord {
    /* 0x00 */ u8 padding[0x20];
    /* 0x20 */ u16 key;
};

extern "C" {

/* Orders AOC records by key. */
s32 aocCompareRecord84Keys(const AocRecord *left, const AocRecord *right)
{
    return left->key - right->key;
}

} /* extern "C" */
