#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);

/* Script command: pushes whether a live, non-excluded battle unit with the group id in argument 0 has kind 1 in the value slot of argument 1. */
u32 FUN_0030af6c(void)
{
    u32 id = scrGetArg(0);
    s32 slot = scrGetArg(1);
    s32 index;

    for (index = 0; index < 0x6D; index++) {
        BtlUnitEntry *unit = &reinterpret_cast<BtlState *>(btlGetMainState())->units[index];

        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && unit->groupId == id
            && unit->values[slot] >> 10 == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
