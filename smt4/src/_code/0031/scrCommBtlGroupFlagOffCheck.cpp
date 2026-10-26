/* NON_MATCHING: the shared constant 1 (shift base and result) lives in a register like retail, but allocation swaps group/result (retail: group r6, result r7). */
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
    s32 result = 1;

    for (i = 0; i < 0x6D; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0
            && unit->id == group && (unit->groupMask & (1 << bit)) == 0) {
            scrSetResult(0);
            return result;
        }
    }
    scrSetResult(1);
    return result;
}

} /* extern "C" */
