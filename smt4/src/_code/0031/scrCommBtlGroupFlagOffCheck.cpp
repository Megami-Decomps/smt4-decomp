/* NON_MATCHING: retail keeps the constant 1 in r7 (shared by the shift base and the return value); built reloads it. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: pushes 0 when a live, active unit of group argument 0 has flag bit argument 1 off, else 1; returns 1. */
s32 scrCommBtlGroupFlagOffCheck(void)
{
    u32 group = scrGetArg(0);
    u32 bit = scrGetArg(1);
    s32 i;

    for (i = 0; i < 0x6D; i++) {
        BtlUnitEntry *unit = &btlGetMainStateExt()->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0
            && unit->groupId == group && (unit->flagMask & (1 << bit)) == 0) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
