/* NON_MATCHING: register allocation only: retail keeps the stat selector in r6 and the found flag in r5; built swaps them. */
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlState *btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);

/* Script command: pushes 0 when a live, non-excluded unit with the group id in argument 0 has the selected stat
 * (argument 1: 0, 1, 2 select stat 7, 10, 11) set, else whether any such unit exists. */
u32 scrCommBtlUnitStatAllSet(void)
{
    u32 id = scrGetArg(0);
    s32 selector = scrGetArg(1);
    s32 found;
    s32 stat = 0;
    s32 index;

    if (selector == 0) {
        stat = 7;
    } else if (selector == 1) {
        stat = 10;
    } else if (selector == 2) {
        stat = 11;
    }
    found = 0;
    for (index = 0; index < 0x6D; index++) {
        BtlUnitEntry *unit = &btlGetMainState()->units[index];

        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && unit->groupId == id) {
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
