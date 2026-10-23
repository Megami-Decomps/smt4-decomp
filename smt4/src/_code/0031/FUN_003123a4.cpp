/* NON_MATCHING: unit addressing uses separate add/ldr instead of retail writeback ldr, adding one instruction. */
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 value);
u32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32 *first, s32 *count);
BtlState *btlGetMainState(void);
BtlUnitEntry *btlMainFindActiveEntry(BtlState *state);

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
        BtlUnitEntry *unit = &btlGetMainState()->units[index];
        u32 flags = unit->flags;
        if (!(flags & 0x10) && (flags & 1) && !(flags & 0x40) && unit->groupId == id &&
            (unit->values[slot] >> 10) == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlUnitEntry *unit = btlMainFindActiveEntry(btlGetMainState());
        if (unit && unit->groupId == id && (unit->values[slot] >> 10) == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
