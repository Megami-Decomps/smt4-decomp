#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 btlScriptResolveGroupArg(s32 kind);
void FUN_002499fc(s32 kind, u32 *first, u32 *count);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);

u32 scrCommBattleGroupHasNegativeStat()
{
    u32 id = scrGetArg(0);
    s32 kind = (s32)scrGetArg(1);
    s32 stat = 0;
    if (kind == 0) {
        stat = 7;
    } else if (kind == 1) {
        stat = 10;
    } else if (kind == 2) {
        stat = 11;
    }
    s32 group = btlScriptResolveGroupArg((s32)scrGetArg(2));
    s32 first, count;
    FUN_002499fc(group, (u32 *)&first, (u32 *)&count);
    for (s32 index = first; index < first + count; ++index) {
        const BtlEntry *entry = &btlGetMainState()->entries[index];
        u32 flags = entry->flags;
        if (!(flags & 0x10) && (flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(flags & BTL_ENTRY_FLAG_BLOCKED) && entry->id == id &&
            entry->stat[stat] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry) {
        const BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->id == id && entry->stat[stat] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
