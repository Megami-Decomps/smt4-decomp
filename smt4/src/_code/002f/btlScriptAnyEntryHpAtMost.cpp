#include "battle/EntryStats.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

extern "C" {
s32 scrGetArg(u32 index);
u32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(u32 group, s32 *start, s32 *count);
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);
void scrSetResult(s32 result);

// Find a member of the specified unit kind whose current HP percentage is below the threshold.
u32 btlScriptAnyEntryHpAtMost(void)
{
    u32 kind = scrGetArg(0);
    s32 threshold = scrGetArg(1);
    u32 group = btlScriptResolveGroupArg(scrGetArg(2));
    s32 start;
    s32 count;
    FUN_002499fc(group, &start, &count);
    for (s32 index = start; index < start + count; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 &&
            entry->id == kind) {
            BtlEntryStats *stats = btlEntryGetStats(entry);
            s32 hp = stats->hp;
            s32 maxHp = stats->maxHp;
            if (hp * 100 / maxHp <= threshold) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->id == kind) {
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
