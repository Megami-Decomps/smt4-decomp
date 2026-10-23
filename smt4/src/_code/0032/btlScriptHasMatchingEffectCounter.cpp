#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(s32 group, s32 *first, s32 *count);
BtlMainState *btlGetMainState();
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
void scrSetResult(s32 result);

// Test the requested group's matching combatants for either active effect counter.
u32 btlScriptHasMatchingEffectCounter()
{
    u32 id = scrGetArg(0);
    s32 first, count;
    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & BTL_ENTRY_FLAG_PRESENT) && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) && entry->id == id) {
            if (entry->effects.primary > 0 || entry->effects.secondary > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->id == id) {
            if (entry->effects.primary > 0 || entry->effects.secondary > 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
