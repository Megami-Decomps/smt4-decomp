#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

/* The entry stat a script selector argument picks (0, 1, 2 -> 7, 10, 11); 0 for any other selector. */
static __inline s32 statForSelector(s32 selector)
{
    s32 stat = 0;
    switch (selector) {
    case 0:
        stat = 7;
        break;
    case 1:
        stat = 10;
        break;
    case 2:
        stat = 11;
        break;
    default:
        return stat;
    }
    return stat;
}

/* Script command: pushes 0 when a live, non-excluded unit with the group id in argument 0 has the selected stat
 * (argument 1: 0, 1, 2 select stat 7, 10, 11) set, else whether any such unit exists. */
u32 scrCommBtlUnitStatAllSet(void)
{
    u32 id = scrGetArg(0);
    s32 stat = statForSelector(scrGetArg(1));
    s32 found = 0;
    s32 index;

    for (index = 0; index < 0x6D; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && unit->data.id == id) {
            found = 1;
            if (unit->stat[stat] > -1) {
                scrSetResult(0);
                return 1;
            }
        }
    }
    scrSetResult(found != 0);
    return 1;
}

} /* extern "C" */
