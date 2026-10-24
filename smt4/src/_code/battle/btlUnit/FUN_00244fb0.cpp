/* NON_MATCHING: retail derives the 0x4A2C/0x4A34/0x4A3C offsets from the 0x4A24 constant register (orr with the value 4 shifted) and pushes r9; ours adds immediates. */
#include "common.h"
#include <stddef.h>

extern "C" {

/* Draw parameters of one slot: each field has a second copy for the other slot, one word on. */
struct BtlUnitDrawSlot {
    /* 0x0000 */ u8 unk0000[0x4A0C];
    /* 0x4A0C */ u32 baseColor;
    /* 0x4A10 */ u32 unk4A10;
    /* 0x4A14 */ u32 prevColor;
    /* 0x4A18 */ u32 unk4A18;
    /* 0x4A1C */ u32 color;
    /* 0x4A20 */ u32 unk4A20;
    /* 0x4A24 */ u32 mode;
    /* 0x4A28 */ u32 unk4A28;
    /* 0x4A2C */ u32 timer;
    /* 0x4A30 */ u32 unk4A30;
    /* 0x4A34 */ u32 param;
    /* 0x4A38 */ u32 unk4A38;
    /* 0x4A3C */ u32 palette;
};
typedef char BtlUnitDrawSlotOffsets[offsetof(BtlUnitDrawSlot, palette) == 0x4A3C ? 1 : -1];

extern u32 g_btlPaletteColors[];

/* Starts a colour fade on one slot: remembers the current colour and tints it from the palette. */
void FUN_00244fb0(u8 *slots, u32 slot, u32 palette, u32 param, u32 alpha)
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
