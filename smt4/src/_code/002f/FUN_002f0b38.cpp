/* NON_MATCHING: both HP percentage calculations use a 0x100-relative load base rather than retail's 0xcc-relative base and multiplication registers. */
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
s32 scrGetArg(u32 index);
u32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32 *start, s32 *count);
BtlState *btlGetMainState(void);
BtlUnitEntry *btlMainFindActiveEntry(BtlState *battle);
void scrSetResult(s32 result);

// Find a member of the specified unit kind whose current HP percentage is below the threshold.
u32 FUN_002f0b38(void)
{
    u32 kind = scrGetArg(0);
    s32 threshold = scrGetArg(1);
    u32 group = btlScriptResolveGroupArg(scrGetArg(2));
    s32 start;
    s32 count;
    FUN_002499fc(group, &start, &count);
    for (s32 index = start; index < start + count; ++index) {
        BtlUnitEntry *entry = &btlGetMainState()->units[index];
        u32 flags = entry->flags;
        if ((flags & 0x10) == 0 && (flags & 1) != 0 && (flags & 0x40) == 0 &&
            entry->groupId == kind && entry->hp * 100 / entry->hpMax <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlUnitEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->groupId == kind && entry->hp * 100 / entry->hpMax <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
