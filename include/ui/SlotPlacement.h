#ifndef UI_SLOTPLACEMENT_H
#define UI_SLOTPLACEMENT_H

#include "common.h"

struct SlotPlacement {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 frame;
    /* 0x08 */ s32 stepX;
    /* 0x0C */ s32 stepY;
    /* 0x10 */ s32 currentX;
    /* 0x14 */ s32 currentY;
    /* 0x18 */ u8 unk18[0xA];
    /* 0x22 */ u8 mode;
    /* 0x23 */ u8 unk23[9];
    /* 0x2C */ s32 startX;
    /* 0x30 */ s32 startY;
};

#endif
