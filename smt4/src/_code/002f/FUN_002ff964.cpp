#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
s32 scrGetArg(u32 index);
u32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32 *start, s32 *count);
BtlState *btlGetMainState(void);
BtlUnitEntry *btlMainFindActiveEntry(BtlState *battle);
void scrSetResult(s32 result);

// Test whether the selected group or active entry contains the requested id at the required level.
u32 FUN_002ff964(void)
{
    u32 id = scrGetArg(0);
    s32 minimumLevel = scrGetArg(1);
    u32 group = btlScriptResolveGroupArg(scrGetArg(2));
    s32 start;
    s32 count;
    FUN_002499fc(group, &start, &count);
    for (s32 index = start; index < start + count; ++index) {
        BtlUnitEntry *entry = &btlGetMainState()->units[index];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 &&
            entry->groupId == id && entry->level >= minimumLevel) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlUnitEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->groupId == id && entry->level >= minimumLevel) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
