/* NON_MATCHING: all control flow matches; HP field addressing uses 0x100 base instead of retail's 0xCC stats base. */
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(s32 group, s32 *first, s32 *count);
BtlMainState *btlGetMainState();
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

// Test group entries at or above an HP threshold, and the active entry at or below it.
u32 FUN_002f0a0c()
{
    s32 threshold = scrGetArg(0);
    s32 group = btlScriptResolveGroupArg(scrGetArg(1));
    s32 first;
    s32 count;
    FUN_002499fc(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) == 0 &&
            (entry->flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0 &&
            entry->value * 100 / entry->maxHp >= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->value * 100 / entry->maxHp <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
