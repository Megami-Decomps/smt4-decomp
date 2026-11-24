#include "battle/BtlMainAccess.h"
#include <stddef.h>

extern "C" {

extern u32 g_btlPaletteColors[]; /* the palette colours, red in the low byte */

/* Starts a colour fade on one slot: remembers the current colour and tints it from the palette. */
void FUN_003f2280(BtlMainStateExtA *battle, u32 slot, u32 palette, u32 param, u32 alpha)
{
    u32 *tint = &g_btlPaletteColors[palette];

    battle->slotColorFade.mode[slot] = 4;
    battle->slotColorFade.timer[slot] = 0;
    battle->slotColorFade.parameters[slot] = param;
    battle->slotColorFade.palette[slot] = palette;
    battle->slotColorFade.previousColor[slot] = battle->slotColorFade.baseColor[slot];
    /* The palette colour byte-swapped to 0xRRGGBB00, with the given alpha in the low byte. */
    battle->slotColorFade.color[slot] = ((*tint << 24) | (((*tint >> 8) & 0xFF) << 16) | (((*tint >> 16) & 0xFF) << 8)) | alpha;
}

} /* extern "C" */
