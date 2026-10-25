/* NON_MATCHING: writeback form only: retail loads flags with `ldr r1,[r0,r1,lsl #3]!` and reuses r0 for the slot address; built adds the unit address separately */
/* Reports through scrSetResult whether any active, unlocked unit has a clean or type-2 entry in the slot chosen by scrGetArg(0); always returns 1. */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {


u32 FUN_002f6fcc(void)
{
    s32 slot = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0) {
            u16 state = unit->values[slot];

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
