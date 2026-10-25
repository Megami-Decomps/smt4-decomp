#pragma once
#include "battle/btlMain.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include <stddef.h>

/* The battle state block as the script code sees it: BtlMainState followed by the fields that lie
 * past its known part. */
struct BtlMainStateExt : BtlMainState {
    /* 0x1E9C */ u8 unk1E9C[0x124];
    /* 0x1FC0 */ BtlUnitEntry *units;   /* 109 entries */
    /* 0x1FC4 */ u8 unk1FC4[0x26C];
    /* 0x2230 */ u32 target;            /* the unit the battle's pending request is aimed at */
    /* 0x2234 */ u8 unk2234[0x26];
    /* 0x225A */ s16 checkId;           /* listed id of the player's unit */
    /* 0x225C */ u8 unk225C[0x2244];
    /* 0x44A0 */ u32 flags44A0;
    /* 0x44A4 */ u32 unk44A4;
    /* 0x44A8 */ u32 stateFlags;
    /* 0x44AC */ u32 flags44AC;
    /* 0x44B0 */ u8 unk44B0[0x408];
    /* 0x48B8 */ u32 minimumPercentApplied;   /* set once an affinity query raised its percent to the minimum */
    /* 0x48BC */ u8 unk48BC[0x100];
    /* 0x49BC */ u32 flags49BC;
    /* 0x49C0 */ u8 unk49C0[5];
    /* 0x49C5 */ s8 hasActiveEntry;
    /* 0x49C6 */ u8 unk49C6[0xA];
    /* 0x49D0 */ u64 flags49D0;
    /* 0x49D8 */ u8 unk49D8[0xC];
    /* 0x49E4 */ u32 effectValue;       /* the battle effect value chosen by the effect starter */
};
typedef char BtlMainStateExtOffsetCheck[offsetof(BtlMainStateExt, units) == 0x1FC0 &&
    offsetof(BtlMainStateExt, checkId) == 0x225A && offsetof(BtlMainStateExt, stateFlags) == 0x44A8 && offsetof(BtlMainStateExt, flags49BC) == 0x49BC &&
    offsetof(BtlMainStateExt, flags49D0) == 0x49D0 && offsetof(BtlMainStateExt, target) == 0x2230 &&
    offsetof(BtlMainStateExt, flags44AC) == 0x44AC && offsetof(BtlMainStateExt, hasActiveEntry) == 0x49C5 &&
    offsetof(BtlMainStateExt, effectValue) == 0x49E4 && offsetof(BtlMainStateExt, minimumPercentApplied) == 0x48B8 ? 1 : -1];

extern "C" {

/* The battle's state block. */
BtlMainState *btlGetMainState(void);

}

/* The same block including the fields past the canonical part. */
static __inline BtlMainStateExt *btlGetMainStateExt(void)
{
    return static_cast<BtlMainStateExt *>(btlGetMainState());
}

extern "C" {
void FUN_00394b0c(void);
}
