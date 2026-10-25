#pragma once
#include "battle/btlMain.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include <stddef.h>

/* The battle state block as the script code sees it: BtlMainState followed by the fields that lie
 * past its known part. */
struct BtlMainStateExt : BtlMainState {
    /* 0x1E9C */ u8 unk1E9C[0x124];
    /* 0x1FC0 */ BtlUnitEntry *units;   /* 109 entries */
    /* 0x1FC4 */ u8 unk1FC4[0x296];
    /* 0x225A */ s16 checkId;
    /* 0x225C */ u8 unk225C[0x2244];
    /* 0x44A0 */ u32 flags44A0;
    /* 0x44A4 */ u32 unk44A4;
    /* 0x44A8 */ u32 stateFlags;
    /* 0x44AC */ u8 unk44AC[0x510];
    /* 0x49BC */ u32 flags49BC;
    /* 0x49C0 */ u8 unk49C0[0x10];
    /* 0x49D0 */ u64 flags49D0;
};
typedef char BtlMainStateExtOffsetCheck[offsetof(BtlMainStateExt, units) == 0x1FC0 &&
    offsetof(BtlMainStateExt, checkId) == 0x225A && offsetof(BtlMainStateExt, stateFlags) == 0x44A8 && offsetof(BtlMainStateExt, flags49BC) == 0x49BC &&
    offsetof(BtlMainStateExt, flags49D0) == 0x49D0 ? 1 : -1];

extern "C" {

/* The battle's state block. */
BtlMainState *btlGetMainState(void);

}

/* The same block including the fields past the canonical part. */
static __inline BtlMainStateExt *btlGetMainStateExt(void)
{
    return static_cast<BtlMainStateExt *>(btlGetMainState());
}
