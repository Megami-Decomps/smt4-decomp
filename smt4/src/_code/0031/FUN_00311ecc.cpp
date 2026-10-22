#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
BtlState *btlGetMainState();

u32 FUN_00311ecc()
{
    s32 group = scrGetArg(0);
    s32 slot = scrGetArg(1);
    for (s32 index = 0; index < 109; ++index) {
        BtlUnitEntry *unit = &btlGetMainState()->units[index];
        if ((unit->flags & 0x10) && (unit->flags & 1) &&
            !(unit->flags & 0x40) && unit->groupId == group &&
            (unit->values[slot] >> 10) == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
