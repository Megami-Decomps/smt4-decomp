#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlUnitEntry *btlMainFindActiveEntry(void);
extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern s32 btlScriptResolveGroupArg(s32 group);
extern s32 FUN_002499fc(u32 group, s32 *start, s32 *count);

/* Script command: pushes whether a present, non-excluded unit of the current group (or the active entry) has a positive counter. */
u32 scrCommBtlGroupUnitCounterPositive(void)
{
    s32 start;
    s32 count;
    s32 index;

    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(0)), &start, &count);
    index = start;
    if (index < count + start) {
        do {
            BtlUnitEntry *unit = &reinterpret_cast<BtlState *>(btlGetMainState())->units[index];

            if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && unit->counter > 0) {
                scrSetResult(1);
                return 1;
            }
            index++;
        } while (index < count + start);
    }
    if (reinterpret_cast<BtlState *>(btlGetMainState())->hasActiveEntry != 0) {
        BtlUnitEntry *active;
        s16 counter = 0;

        reinterpret_cast<BtlState *>(btlGetMainState());
        active = btlMainFindActiveEntry();
        if (active != NULL) {
            counter = active->counter;
        }
        if (active != NULL && counter > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
