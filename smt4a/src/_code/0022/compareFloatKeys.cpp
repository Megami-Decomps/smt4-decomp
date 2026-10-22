#include "common.h"

struct FloatSortEntry {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ f32 key;
};

/* Compare indirect entries using the integer part of their key difference. */
extern "C" s32 compareFloatKeys(const FloatSortEntry *const *left,
                             const FloatSortEntry *const *right)
{
    return static_cast<s32>((*left)->key - (*right)->key);
}
