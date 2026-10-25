#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlUnitEntry *btlMainFindActiveEntry(void);
extern s32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern s32 btlScriptResolveGroupArg(s32 group);
extern s32 FUN_002499fc(u32 group, s32 *start, s32 *count);

/* Script command: pushes whether the average level of the present, non-excluded units of the current group (and the
 * active entry) is at most argument 0. */
u32 scrCommBtlGroupAverageLevelWithin(void)
{
    s32 limit = scrGetArg(0);
    s32 start;
    s32 count;
    s32 sum;
    s32 units;
    u32 group;
    s32 index;

    group = btlScriptResolveGroupArg(scrGetArg(1));
    sum = 0;
    units = 0;
    FUN_002499fc(group, &start, &count);
    index = start;
    if (index < count + start) {
        do {
            BtlUnitEntry *unit = &reinterpret_cast<BtlState *>(btlGetMainState())->units[index];

            if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40)) {
                units++;
                sum += unit->level;
            }
            index++;
        } while (index < start + count);
    }
    if (reinterpret_cast<BtlState *>(btlGetMainState())->hasActiveEntry != 0) {
        BtlUnitEntry *active;

        reinterpret_cast<BtlState *>(btlGetMainState());
        active = btlMainFindActiveEntry();
        if (active != NULL) {
            units++;
            sum += active->level;
        }
    }
    scrSetResult(limit <= sum / units);
    return 1;
}

} /* extern "C" */
