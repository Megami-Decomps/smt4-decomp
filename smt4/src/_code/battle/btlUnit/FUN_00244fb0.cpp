#include "common.h"
#include <stddef.h>

extern "C" {

/* Colour fade state of a battle unit's two draw slots. */
struct BtlUnitColorFade {
    /* 0x0000 */ u8 unk0000[0x4A0C];
    /* 0x4A0C */ u32 baseColor[2];
    /* 0x4A14 */ u32 prevColor[2];
    /* 0x4A1C */ u32 color[2];
    /* 0x4A24 */ u32 mode[2];
    /* 0x4A2C */ u32 timer[2];
    /* 0x4A34 */ u32 param[2];
    /* 0x4A3C */ u32 palette[2];
};
typedef char BtlUnitColorFadeOffsets[offsetof(BtlUnitColorFade, palette) == 0x4A3C ? 1 : -1];

extern u32 g_btlPaletteColors[]; /* the palette colours, red in the low byte */

/* Starts a colour fade on one slot: remembers the current colour and tints it from the palette. */
void FUN_00244fb0(BtlUnitColorFade *fade, u32 slot, u32 palette, u32 param, u32 alpha)
{
    u32 *tint = &g_btlPaletteColors[palette];

    fade->mode[slot] = 4;
    fade->timer[slot] = 0;
    fade->param[slot] = param;
    fade->palette[slot] = palette;
    fade->prevColor[slot] = fade->baseColor[slot];
    /* The palette colour byte-swapped to 0xRRGGBB00, with the given alpha in the low byte. */
    fade->color[slot] = ((*tint << 24) | (((*tint >> 8) & 0xFF) << 16) | (((*tint >> 16) & 0xFF) << 8)) | alpha;
}

} /* extern "C" */
