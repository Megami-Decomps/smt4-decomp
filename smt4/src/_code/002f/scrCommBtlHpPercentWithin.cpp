/* NON_MATCHING: the zeroing now matches; only the two accumulators swap r5/r6 inside the loop (retail adds the maximum into r5, the current HP into r6). */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: pushes whether the live units' current/maximum HP percentage (argument 0 compares) is at most argument 0. */
u32 scrCommBtlHpPercentWithin(void)
{
    s32 limit = scrGetArg(0);
    s32 curSum = 0;
    s32 maxSum = 0;
    s32 index;

    for (index = 0; index < 0x6D; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40)) {
            maxSum += unit->maxHp;
            curSum += unit->hp;
        }
    }
    scrSetResult(curSum * 100 / maxSum <= limit);
    return 1;
}

} /* extern "C" */
