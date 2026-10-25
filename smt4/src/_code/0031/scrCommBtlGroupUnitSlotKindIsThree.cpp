#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlUnitEntry *btlMainFindActiveEntry(void);
extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern u32 btlScriptResolveGroupArg(void);
extern s32 FUN_002499fc(u32 group, s32 *start, s32 *count);

/* Script command: pushes whether a present, non-excluded unit of the current group (or the active entry) with the group
 * id in argument 0 has kind 3 in the value slot of argument 1. */
u32 scrCommBtlGroupUnitSlotKindIsThree(void)
{
    u32 id = scrGetArg(0);
    s32 slot = scrGetArg(1);
    s32 start;
    s32 count;
    s32 index;

    scrGetArg(2);
    FUN_002499fc(btlScriptResolveGroupArg(), &start, &count);
    for (index = start; index < start + count; index++) {
        BtlUnitEntry *unit = &reinterpret_cast<BtlState *>(btlGetMainState())->units[index];

        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && unit->groupId == id
            && unit->values[slot] >> 10 == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    if (reinterpret_cast<BtlState *>(btlGetMainState())->hasActiveEntry != 0) {
        BtlUnitEntry *active;

        reinterpret_cast<BtlState *>(btlGetMainState());
        active = btlMainFindActiveEntry();
        if (active != NULL && active->groupId == id && active->values[slot] >> 10 == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
