#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlEntry *btlMainFindActiveEntry(void);
extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern s32 btlScriptResolveGroupArg(s32 group);
extern s32 FUN_002499fc(u32 group, s32 *start, s32 *count);

/* Script command: pushes whether a present, non-excluded unit of the current group (or the active entry) has the group id in argument 0. */
u32 scrCommBtlGroupHasUnitId(void)
{
    u32 id = scrGetArg(0);
    s32 start;
    s32 count;
    s32 index;

    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(1)), &start, &count);
    for (index = start; index < start + count; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && unit->id == id) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *active;

        btlGetMainState();
        active = btlMainFindActiveEntry();
        if (active != NULL && active->id == id) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
