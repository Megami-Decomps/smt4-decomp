#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrGetArg(s32 index);

/* Tests whether an eligible group unit has the requested status-entry kind. */
u32 FUN_00311e30(void)
{
    s32 group = scrGetArg(0);
    s32 slot = scrGetArg(1);
    for (s32 i = 0; i < 109; ++i) {
        BtlUnitEntry *unit = &reinterpret_cast<BtlState *>(btlGetMainState())->units[i];
        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 &&
            (unit->flags & 0x40) == 0 && unit->groupId == group &&
            (unit->values[slot] >> 10) == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
