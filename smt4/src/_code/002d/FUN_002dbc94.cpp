#include "battle/EntryStats.h"
#include "util/SlotRangeSelect.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
#include "battle/BattleHelpers.h"

extern "C" {
s32 scrGetArg(s32 index);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

/* Test whether the requested battle group, or the active entry, has a unit at or below the HP
 * percentage. */
u32 FUN_002dbc94()
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
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0) {
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
