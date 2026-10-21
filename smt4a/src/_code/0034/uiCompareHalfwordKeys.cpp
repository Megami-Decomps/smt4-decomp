#include "common.h"

extern "C" {

struct SortEntry {
    /* 0x00 */ u16 key;
};

s32 uiCompareHalfwordKeys(const SortEntry *left, const SortEntry *right)
{
    return left->key - right->key;
}

} /* extern "C" */
