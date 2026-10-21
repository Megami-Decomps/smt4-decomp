#include "common.h"

extern "C" {

struct SortEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 key;
};

s32 uiCompareFloatKeys(const SortEntry *left, const SortEntry *right)
{
    return (s32)(left->key - right->key);
}

} /* extern "C" */
