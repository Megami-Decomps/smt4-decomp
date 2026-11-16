#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Sets the script result; commands then report 1 (done). */
static s32 commandResult(s32 value)
{
    scrSetResult(value);
    return 1;
}

/* Script command: pushes 0 when a live, active unit of group argument 0 has flag bit argument 1 off, else 1; returns 1. */
s32 scrCommBtlGroupFlagOffCheck(void)
{
    u32 group = scrGetArg(0);
    u32 bit = scrGetArg(1);
    s32 i;

    for (i = 0; i < 0x6D; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0
            && unit->id == group && (unit->groupMask & (1 << bit)) == 0) {
            return commandResult(0);
        }
    }
    return commandResult(1);
}

} /* extern "C" */
