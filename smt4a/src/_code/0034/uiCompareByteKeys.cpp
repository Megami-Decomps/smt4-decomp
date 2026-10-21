#include "common.h"

extern "C" {

struct SortEntry {
    /* 0x00 */ u8 key;
};

s32 uiCompareByteKeys(const SortEntry *left, const SortEntry *right)
{
    return left->key - right->key;
}

} /* extern "C" */
