/* NON_MATCHING: register allocation only: retail accumulates the maximum in r5 and the current value in r6; built swaps them. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlMainAccess.h"

extern "C" {

extern s32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);

/* Script command: pushes whether the live units' current/maximum HP percentage (argument 0 compares) is at most argument 0. */
u32 scrCommBtlHpPercentWithin(void)
{
    s32 limit = scrGetArg(0);
    s32 maxSum = 0;
    s32 curSum = 0;
    s32 index;

    for (index = 0; index < 0x6D; index++) {
        BtlUnitEntry *unit = &btlGetMainStateExt()->units[index];

        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40)) {
            maxSum += unit->hpMax;
            curSum += unit->hp;
        }
    }
    scrSetResult(curSum * 100 / maxSum <= limit);
    return 1;
}

} /* extern "C" */
