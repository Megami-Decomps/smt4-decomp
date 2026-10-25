#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 value);
u32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32 *first, s32 *count);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

// Test whether a matching group member or active unit has packed status kind four.
u32 FUN_003123a4(void)
{
    u32 id = scrGetArg(0);
    s32 slot = scrGetArg(1);
    u32 group = btlScriptResolveGroupArg(scrGetArg(2));
    s32 first;
    s32 count;
    FUN_002499fc(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlEntry *unit = &btlGetMainState()->entries[index];
        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && unit->id == id &&
            (unit->values[slot] >> 10) == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *unit = btlMainFindActiveEntry(btlGetMainState());
        if (unit && unit->id == id && (unit->values[slot] >> 10) == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
