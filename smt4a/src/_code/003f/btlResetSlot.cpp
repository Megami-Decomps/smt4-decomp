#include "shard/Shard003F.h"

extern "C" {

/* Window onto the per-slot word arrays at +0x4D18..+0x4D40 (4 bytes per slot). */
typedef struct SlotWindow {
    /* 0x0000 */ u8 unk0000[0x4D18];
    /* 0x4D18 */ u32 unk4D18;
    /* 0x4D1C */ u8 unk4D1C[4];
    /* 0x4D20 */ u32 unk4D20;
    /* 0x4D24 */ u8 unk4D24[4];
    /* 0x4D28 */ u32 unk4D28;
    /* 0x4D2C */ u8 unk4D2C[4];
    /* 0x4D30 */ u32 unk4D30;
    /* 0x4D34 */ u8 unk4D34[4];
    /* 0x4D38 */ u32 unk4D38;
    /* 0x4D3C */ u8 unk4D3C[4];
    /* 0x4D40 */ u32 unk4D40;
} SlotWindow;

/* Resets the animation slot `index` and records its target. */
void btlResetSlot(BtlStateB *state, s32 index, u32 target)
{
    SlotWindow *slot = (SlotWindow *)((u8 *)state + index * 4);

    slot->unk4D30 = 0;
    slot->unk4D38 = 0;
    slot->unk4D40 = target;
    slot->unk4D20 = slot->unk4D18;
    slot->unk4D28 = 0;
}

} /* extern "C" */
