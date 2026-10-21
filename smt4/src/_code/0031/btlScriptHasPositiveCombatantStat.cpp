/* NON_MATCHING: compiler folds entry address calculation into the flags load; retail uses separate ADD and LDR. */
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
u32 scrGetArg(s32 index);
void scrSetResult(s32 result);
u32 FUN_00249a54();
void FUN_002499fc(u32 group, s32 *first, s32 *count);
BtlMainState *btlGetMainState();
BtlEntry *btlMainFindActiveEntry(BtlMainState *battle);

// Report whether a matching combatant has a positive value for the selected statistic.
u32 btlScriptHasPositiveCombatantStat()
{
    u32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 stat = 0;
    if (kind == 0) {
        stat = 7;
    } else if (kind == 1) {
        stat = 10;
    } else if (kind == 2) {
        stat = 11;
    }
    scrGetArg(2);
    s32 first;
    s32 count;
    FUN_002499fc(FUN_00249a54(), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        u32 flags = entry->flags;
        if ((flags & BTL_ENTRY_FLAG_PRESENT) == 0 &&
            (flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (flags & BTL_ENTRY_FLAG_BLOCKED) == 0 &&
            entry->id == id && entry->stat[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->id == id && entry->stat[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
