#pragma once
#include "battle/btlMain.h"
#include <stddef.h>

/* One panel slot kept after the main state block (12 of them at 0x4D78). */
struct BtlPanelSlotA {
    /* 0x0 */ u32 active;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
    /* 0xC */ u8 unkC[4];
};

/* The battle state block as the script and panel code see it: the canonical block followed by the
 * fields the allocation keeps past BtlMainStateA's 0x4CF0 bytes. */
struct BtlMainStateExtA : BtlMainStateA {
    /* 0x4CF0 */ u8 unk4CF0[0x74];
    /* 0x4D64 */ s32 unk4D64;
    /* 0x4D68 */ u32 selected;
    /* 0x4D6C */ u8 unk4D6C[0xC];
    /* 0x4D78 */ BtlPanelSlotA slots[12];
};

typedef char BtlMainStateExtAOffsetCheck[
    sizeof(BtlMainStateA) == 0x4CF0 && offsetof(BtlMainStateExtA, unk4D64) == 0x4D64 &&
    offsetof(BtlMainStateExtA, selected) == 0x4D68 && offsetof(BtlMainStateExtA, slots) == 0x4D78 ? 1 : -1];

extern "C" {

/* The battle's state block. */
BtlMainStateA *btlGetMainState(void);

}

/* The same block including the fields past the canonical size. */
static __inline BtlMainStateExtA *btlGetMainStateExt(void)
{
    return static_cast<BtlMainStateExtA *>(btlGetMainState());
}
