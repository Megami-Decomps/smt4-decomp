#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {


s32 scrGetArg(s32 index);

/* Script command: sets the result to 1 when the live, non-excluded unit with id `arg0` has state 2 in slot `arg1`. */
u32 scrUnitSlotHasState(void)
{
    u32 id = scrGetArg(0);
    s32 arg = scrGetArg(1);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->id == id && unit->values[arg] >> 10 == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
