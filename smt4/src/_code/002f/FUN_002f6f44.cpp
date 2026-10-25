#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {


s32 scrSetResult(s32 value);
s32 scrGetArg(u32 index);

/* Script command: sets the result to 1 when some live, non-excluded unit has state 1 in slot `arg0`. */
u32 FUN_002f6f44(void)
{
    s32 slot = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->values[slot] >> 10 == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
