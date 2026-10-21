#include "common.h"

struct LookupRecord {
    /* 0x00 */ u8 padding[0x20];
    /* 0x20 */ u16 key;
};

extern "C" {

/* Orders lookup records by key. */
s32 FUN_001264b4(const LookupRecord *left, const LookupRecord *right)
{
    return left->key - right->key;
}

} /* extern "C" */
