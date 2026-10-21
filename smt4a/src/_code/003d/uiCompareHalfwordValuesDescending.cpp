#include "common.h"

extern "C" {

struct SortEntry {
    /* 0x00 */ u16 key;
};

s32 uiCompareHalfwordValuesDescending(const SortEntry *left, const SortEntry *right)
{
    return right->key - left->key;
}

} /* extern "C" */
