#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlState *btlGetMainState(void);
extern BtlUnitEntry *btlMainFindActiveEntry(void);
extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern u32 FUN_00249a54(void);
extern s32 FUN_002499fc(u32 group, s32 *start, s32 *count);
extern s32 FUN_00245854(BtlUnitEntry *unit, u32 arg);

/* Script command: pushes whether FUN_00245854 accepts argument 0 for a present, non-excluded unit of the current group
 * or the active entry. */
u32 scrCommBtlGroupUnitCheck(void)
{
    u32 arg = scrGetArg(0);
    s32 start;
    s32 count;
    s32 index;

    scrGetArg(1);
    FUN_002499fc(FUN_00249a54(), &start, &count);
    for (index = start; index < start + count; index++) {
        BtlUnitEntry *unit = &btlGetMainState()->units[index];

        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && FUN_00245854(unit, arg) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlUnitEntry *active;

        btlGetMainState();
        active = btlMainFindActiveEntry();
        if (active != NULL && FUN_00245854(active, arg) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
