#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

extern "C" {

extern BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);
extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern s32 btlScriptResolveGroupArg(s32 group);
extern s32 FUN_002499fc(u32 group, s32 *start, s32 *count);
extern s32 btlSlotsHaveReadyUnit(BtlEntry *unit);

/* Script command: pushes whether btlSlotsHaveReadyUnit accepts a present, non-excluded unit of the current group or the active entry. */
u32 scrCommBtlGroupUnitCheckB(void)
{
    s32 start;
    s32 count;
    s32 index;

    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(0)), &start, &count);
    for (index = start; index < start + count; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && btlSlotsHaveReadyUnit(unit) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *active = btlMainFindActiveEntry(btlGetMainState());
        if (active != NULL && btlSlotsHaveReadyUnit(active) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
