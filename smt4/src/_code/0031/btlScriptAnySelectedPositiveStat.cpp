#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {
void FUN_002499fc(u32, s32 *, s32 *);
s32 scrGetArg(s32);
BtlEntry *btlMainFindActiveEntry(BtlMainState *);
u32 btlScriptResolveGroupArg(s32);

// Test whether a selected eligible combatant has a positive stat modifier.
u32 btlScriptAnySelectedPositiveStat(void)
{
    s32 kind = scrGetArg(0);
    s32 stat = 0;
    if (kind == 0)
        stat = 7;
    else if (kind == 1)
        stat = 10;
    else if (kind == 2)
        stat = 11;
    u32 group = btlScriptResolveGroupArg(scrGetArg(1));
    s32 first, count;
    FUN_002499fc(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & BTL_ENTRY_FLAG_PRESENT) &&
            (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) &&
            entry->stat[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry && entry->stat[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
