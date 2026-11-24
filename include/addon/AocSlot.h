#ifndef SMT4_ADDON_AOCSLOT_H
#define SMT4_ADDON_AOCSLOT_H

#include "common.h"

enum { AOC_SLOT_NO_HANDLE = -1 };

typedef struct AocSlot {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 textureTable;
    /* 0x14 */ u8 unk14[0x6C];
    /* 0x80 */ s32 active;
    /* 0x84 */ s32 handle;
} AocSlot;

#endif
