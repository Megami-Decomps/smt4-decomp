#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlState *btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern s32 FUN_00245854(BtlUnitEntry *unit, u32 arg);

/* Script command: pushes whether FUN_00245854 accepts argument 1 for a live, non-excluded battle unit with the group id in argument 0. */
u32 scrCommBtlUnitCheckForGroup(void)
{
    u32 id = scrGetArg(0);
    u32 arg = scrGetArg(1);
    s32 index;

    for (index = 0; index < 0x6D; index++) {
        BtlUnitEntry *unit = &btlGetMainState()->units[index];

        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && unit->groupId == id
            && FUN_00245854(unit, arg) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
