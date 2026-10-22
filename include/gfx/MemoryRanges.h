#ifndef GFX_MEMORYRANGES_H
#define GFX_MEMORYRANGES_H

#include "common.h"

struct GfxMemoryRanges {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 bases[4];
    /* 0x2C */ u32 sizes[4];
};

struct GfxMemoryRangesA {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 bases[4];
    /* 0x30 */ u32 sizes[4];
};

#endif
