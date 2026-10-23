#ifndef GFX_ASDGXPRESETRING_H
#define GFX_ASDGXPRESETRING_H
#include "common.h"
#include <stddef.h>

struct AsdGxPresetRing {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 count;
    /* 0x08 */ u32 values[3];
    /* 0x14 */ u32 index;
    /* 0x18 */ u8 unk18[0x14];
};
typedef char AsdGxPresetRingLayoutCheck[sizeof(AsdGxPresetRing) == 0x2C &&
    offsetof(AsdGxPresetRing, index) == 0x14 ? 1 : -1];

static inline u32 asdGxPresetPrevious(const AsdGxPresetRing* ring)
{
    s32 previous = ring->index - 1;
    if (previous < 0)
        previous = ring->count - 1;
    return previous;
}
#endif
