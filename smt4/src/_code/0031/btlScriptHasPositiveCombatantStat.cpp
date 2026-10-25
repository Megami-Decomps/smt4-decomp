#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

extern "C" {
u32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 btlScriptResolveGroupArg(s32 group);
void FUN_002499fc(s32 group, u32 *first, u32 *count);
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
    s32 group = (s32)scrGetArg(2);
    u32 first;
    u32 count;
    FUN_002499fc(btlScriptResolveGroupArg(group), &first, &count);
    for (s32 index = first; index < (s32)(first + count); ++index) {
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
