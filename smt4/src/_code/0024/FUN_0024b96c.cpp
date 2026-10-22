/* NON_MATCHING: block order only: retail falls through from the 70% test into the shared `return 5` and places the 3/4 choice after it. */
#include "common.h"

struct BtlRatioUnit {
    /* 0x000 */ u8 unk000[0x50];
    /* 0x050 */ u32 flags;
    /* 0x054 */ u8 unk054[0xa4];
    /* 0x0F8 */ u32 statusFlags;
    /* 0x0FC */ u8 unk0fc[0x18];
};

struct BtlRatioMainState {
    /* 0x0000 */ u8 unk0000[0x1e84];
    /* 0x1E84 */ s16 unitTotal;
    /* 0x1E86 */ u8 unk1e86[0x12];
    /* 0x1E98 */ BtlRatioUnit *units;
    /* 0x1E9C */ u8 unk1e9c[0x3be];
    /* 0x225A */ s16 checkId;
};

extern "C" {
BtlRatioMainState *btlGetMainState(void);
s32 FUN_0027da30(BtlRatioMainState *state, s32 id);

/* Rates the share of active units (flags 0, 1 and 4 set, status flag 1 clear) among the unit
 * total: 5 at 70% or more (or when the check fails), 4 from 40%, else 3. */
u32 FUN_0024b96c(void)
{
    if (btlGetMainState() != NULL) {
        s32 id = btlGetMainState()->checkId;
        if (FUN_0027da30(btlGetMainState(), id) != 0) {
            s32 percent = 0;
            s32 total = btlGetMainState()->unitTotal;
            s32 active = 0;
            s32 i;

            for (i = 0; i < 109; i++) {
                BtlRatioUnit *unit = &btlGetMainState()->units[i];
                if ((unit->flags & 1) && (unit->flags & 2) && (unit->flags & 0x10) &&
                    !(unit->statusFlags & 2)) {
                    active++;
                }
            }
            if (total != 0) {
                percent = active * 100 / total;
            }
            if (percent < 70) {
                return (percent < 40) ? 3 : 4;
            }
        }
    }
    return 5;
}

} /* extern "C" */
