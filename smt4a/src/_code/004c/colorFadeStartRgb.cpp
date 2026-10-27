#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[0x18];
    /* 0x6C */ u32 color;
    /* 0x70 */ u8 unk70[8];
    /* 0x78 */ s32 mode;
    /* 0x7C */ u32 unk7C;
    /* 0x80 */ u8 unk80[0xC];
    /* 0x8C */ u32 colorBase;
    /* 0x90 */ u32 colorOld;
} Slot;

/* Sets the slot's mode and base color (alpha byte cleared); a zero mode also copies the base color in. */
void colorFadeStartRgb(u32 unused, Slot *slot, s32 mode, u32 color)
{
    u32 flags = slot->flags;

    slot->unk7C = 0;
    slot->mode = mode;
    slot->colorBase = color & ~0xFF;
    slot->colorOld = slot->color & ~0xFF;
    if (mode == 0) {
        flags &= ~0x1000;
        slot->color = (slot->color & 0xFF) | (color & ~0xFF);
    } else {
        flags |= 0x1000;
    }
    slot->flags = flags;
}

} /* extern "C" */
