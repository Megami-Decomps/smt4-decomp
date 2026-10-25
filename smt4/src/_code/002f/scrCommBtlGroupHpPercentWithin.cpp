/* NON_MATCHING: register allocation and stack layout: retail keeps the maximum in r5 and the current value in r6 and places the range start at sp+4 (a larger out block); built swaps the accumulators. */
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlState *btlGetMainState(void);
extern BtlUnitEntry *btlMainFindActiveEntry(void);
extern s32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern s32 btlScriptResolveGroupArg(s32 group);
extern s32 FUN_002499fc(u32 group, s32 *start, s32 *count);

/* Script command: pushes whether the HP percentage of the present, non-excluded units of the current group (and the
 * active entry) is at most argument 0. */
u32 scrCommBtlGroupHpPercentWithin(void)
{
    s32 limit = scrGetArg(0);
    s32 start;
    s32 count;
    s32 maxSum;
    s32 curSum;
    u32 group;
    s32 index;

    group = btlScriptResolveGroupArg(scrGetArg(1));
    maxSum = 0;
    curSum = 0;
    FUN_002499fc(group, &start, &count);
    index = start;
    if (index < count + start) {
        do {
            BtlUnitEntry *unit = &btlGetMainState()->units[index];

            if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40)) {
                maxSum += unit->hpMax;
                curSum += unit->hp;
            }
            index++;
        } while (index < start + count);
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlUnitEntry *active;

        btlGetMainState();
        active = btlMainFindActiveEntry();
        if (active != NULL) {
            maxSum += active->hpMax;
            curSum += active->hp;
        }
    }
    scrSetResult(curSum * 100 / maxSum <= limit);
    return 1;
}

} /* extern "C" */
