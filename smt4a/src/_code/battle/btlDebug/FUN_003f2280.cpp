/* NON_MATCHING: retail derives the 0x4D38/0x4D40/0x4D48 offsets from the 0x4D30 constant register (orr with the value 4 shifted) and pushes r9; ours adds immediates. */
#include "common.h"
#include <stddef.h>

extern "C" {

/* Draw parameters of one slot: each field has a second copy for the other slot, one word on. */
struct BtlUnitDrawSlot {
    /* 0x0000 */ u8 unk0000[0x4D18];
    /* 0x4D18 */ u32 baseColor;
    /* 0x4D1C */ u32 unk4D1C;
    /* 0x4D20 */ u32 prevColor;
    /* 0x4D24 */ u32 unk4D24;
    /* 0x4D28 */ u32 color;
    /* 0x4D2C */ u32 unk4D2C;
    /* 0x4D30 */ u32 mode;
    /* 0x4D34 */ u32 unk4D34;
    /* 0x4D38 */ u32 timer;
    /* 0x4D3C */ u32 unk4D3C;
    /* 0x4D40 */ u32 param;
    /* 0x4D44 */ u32 unk4D44;
    /* 0x4D48 */ u32 palette;
};
typedef char BtlUnitDrawSlotOffsets[offsetof(BtlUnitDrawSlot, palette) == 0x4D48 ? 1 : -1];

extern u32 g_btlPaletteColors[];

/* Starts a colour fade on one slot: remembers the current colour and tints it from the palette. */
void FUN_003f2280(u8 *slots, u32 slot, u32 palette, u32 param, u32 alpha)
{
    BtlUnitDrawSlot *s = (BtlUnitDrawSlot *)(slots + slot * 4);
    u32 tint;

    s->mode = 4;
    s->timer = 0;
    s->param = param;
    s->palette = palette;
    s->prevColor = s->baseColor;
    tint = g_btlPaletteColors[palette];
    s->color = ((tint << 24) | (((tint >> 8) & 0xFF) << 16) | (((tint >> 16) & 0xFF) << 8)) | alpha;
}

} /* extern "C" */
