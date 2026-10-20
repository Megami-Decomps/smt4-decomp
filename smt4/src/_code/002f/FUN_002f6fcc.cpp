/* NON_MATCHING: writeback form only: retail loads flags with `ldr r1,[r0,r1,lsl #3]!` and reuses r0 for the slot address; built adds the unit address separately */
/* Reports through scrSetResult whether any active, unlocked unit has a clean or type-2 entry in the slot chosen by scrGetArg(0); always returns 1. */
#include "common.h"

extern "C" {

typedef struct Unit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x1EE];
    /* 0x1F2 */ u16 slotState[1];   /* top 6 bits: kind, 0 = none */
    /* 0x1F4 */ u8 unk1F4[0x94];
} Unit; /* 0x288 */

typedef struct UnitManager {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ Unit *units;
} UnitManager;

extern UnitManager *btlGetMainState(void);
extern void scrSetResult(s32 found);
extern s32 scrGetArg(u32 index);

u32 FUN_002f6fcc(void)
{
    s32 slot = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        Unit *unit = &btlGetMainState()->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0) {
            u16 state = unit->slotState[slot];

            if ((state & 0xFC00) == 0 || (state >> 10) == 2) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}

}
