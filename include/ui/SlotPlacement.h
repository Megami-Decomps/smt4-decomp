#ifndef UI_SLOTPLACEMENT_H
#define UI_SLOTPLACEMENT_H

#include "common.h"
#include <stddef.h>

/* Fixed-point movement prefix shared by the party panel's slot widgets. */
struct SlotPlacementMotion {
    /* 0x00 */ u32 state;
    /* 0x04 */ s32 frame;
    /* 0x08 */ s32 stepX;
    /* 0x0C */ s32 stepY;
    /* 0x10 */ s32 currentX;
    /* 0x14 */ s32 currentY;
};

struct SlotPlacement : SlotPlacementMotion {
    /* 0x18 */ u8 unk18[0xA];
    /* 0x22 */ u8 mode;        /* nonzero uses the alternate texture-table rows */
    /* 0x23 */ u8 unk23[9];
    /* 0x2C */ s32 startX;
    /* 0x30 */ s32 startY;
    /* 0x34 */ u8 unk34[4];
    /* 0x38 */ s32 slot;
    /* 0x3C */ s32 mirrored;   /* switches which group of slots moves horizontally */
};

typedef char SlotPlacementOffsetCheck[sizeof(SlotPlacementMotion) == 0x18 &&
    offsetof(SlotPlacement, mode) == 0x22 && offsetof(SlotPlacement, startX) == 0x2C &&
    offsetof(SlotPlacement, slot) == 0x38 && offsetof(SlotPlacement, mirrored) == 0x3C &&
    sizeof(SlotPlacement) == 0x40 ? 1 : -1];

#endif
