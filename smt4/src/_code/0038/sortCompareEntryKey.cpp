#include "common.h"

struct KeyedEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 key;
};

/* Orders entries by their signed keys. */
extern "C" s32 sortCompareEntryKey(const KeyedEntry *left, const KeyedEntry *right)
{
    return left->key - right->key;
}
