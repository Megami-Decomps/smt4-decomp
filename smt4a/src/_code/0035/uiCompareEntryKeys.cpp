#include "common.h"

extern "C" {

struct SortEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 key;
};

s32 uiCompareEntryKeys(const SortEntry *left, const SortEntry *right)
{
    return left->key - right->key;
}

} /* extern "C" */
