#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlEntry *btlMainFindActiveEntry(void);
extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern s32 btlScriptResolveGroupArg(s32 group);
extern s32 FUN_002499fc(u32 group, s32 *start, s32 *count);
extern s32 btlEntryHasActionSkillCategory(BtlEntry *unit, u32 arg);

/* Script command: pushes whether btlEntryHasActionSkillCategory accepts argument 0 for a present, non-excluded unit of the current group
 * or the active entry. */
u32 scrCommBtlGroupUnitCheck(void)
{
    u32 arg = scrGetArg(0);
    s32 start;
    s32 count;
    s32 index;

    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(1)), &start, &count);
    for (index = start; index < start + count; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && btlEntryHasActionSkillCategory(unit, arg) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *active;

        btlGetMainState();
        active = btlMainFindActiveEntry();
        if (active != NULL && btlEntryHasActionSkillCategory(active, arg) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
