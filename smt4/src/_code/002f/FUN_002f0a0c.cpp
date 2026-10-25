/* NON_MATCHING: range reload uses one LDRD instead of retail's separate count/first LDRs. */
#include "battle/EntryStats.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlScriptResolveGroupArg(s32 group);
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
    for (s32 index = first; index < count + first; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) == 0 &&
            (entry->flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0) {
            BtlEntryStats *stats = btlEntryGetStats(entry);
            s32 hp = stats->hp;
            s32 maxHp = stats->maxHp;
            if (hp * 100 / maxHp >= threshold) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL) {
            BtlEntryStats *stats = btlEntryGetStats(entry);
            s32 hp = stats->hp;
            s32 maxHp = stats->maxHp;
            if (hp * 100 / maxHp <= threshold) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
