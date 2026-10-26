/* NON_MATCHING: register allocation: retail writes the unit pointer back into the base register (ldr r2, [r0, r2, lsl #3]!) with the flags in r2; this build keeps the pointer in r2 and the flags in r0 */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: flags every active, visible unit with the argument's id (units 4..53) with 0x400000; returns 1. */
u32 FUN_0030bbc4(void)
{
    u32 id = scrGetArg(0);
    BtlMainState *state = btlGetMainState();
    s32 i;

    for (i = 4; i < 54; i++) {
        BtlEntry *unit = &state->entries[i];
        u32 flags = unit->flags;

        if ((flags & 1) != 0 && (flags & 0x40) == 0 && (flags & 0x10) != 0 && unit->id == id) {
            unit->flags |= 0x400000;
        }
    }
    return 1;
}

} /* extern "C" */
