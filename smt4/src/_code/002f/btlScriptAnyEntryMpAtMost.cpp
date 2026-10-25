#include "battle/EntryStats.h"
#include "script/ScriptArgs.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32 *first, s32 *count);
BtlEntry *btlMainFindActiveEntry(BtlMainState *);

// Test whether the requested combatant has at most the given MP percentage.
u32 btlScriptAnyEntryMpAtMost(void)
{
    u32 id = scrGetArg(0);
    s32 percent = scrGetArg(1);
    s32 first, count;
    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(2)), &first, &count);
    for (s32 i = first; i < first + count; ++i) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if (!(entry->flags & BTL_ENTRY_FLAG_PRESENT) &&
            (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) &&
            entry->id == id) {
            BtlEntryMpStats *stats = btlEntryGetStats(entry);
            s32 mp = stats->mp;
            s32 maxMp = stats->maxMp;
            if (mp * 100 / maxMp <= percent) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry && entry->id == id) {
            BtlEntryMpStats *stats = btlEntryGetStats(entry);
            s32 mp = stats->mp;
            s32 maxMp = stats->maxMp;
            if (mp * 100 / maxMp <= percent) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
