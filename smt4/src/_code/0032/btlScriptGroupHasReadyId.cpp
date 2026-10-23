#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
u32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32 *range, s32 *count);
BtlMainState *btlGetMainState();
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);
s32 btlSlotsHaveReadyUnit(BtlEntry *entry);

// Script query: whether a ready combatant of the requested ID exists in the group.
u32 btlScriptGroupHasReadyId()
{
    u32 id = scrGetArg(0);
    s32 first;
    s32 count;
    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & BTL_ENTRY_FLAG_PRESENT) &&
            (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) &&
            entry->id == id && btlSlotsHaveReadyUnit(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry && entry->id == id && btlSlotsHaveReadyUnit(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
