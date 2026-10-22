#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);
BtlMainState *btlGetMainState();

/* Script command: whether a present, active entry with the given id has a negative stat of the given kind. */
u32 scrCommBattleEntryHasNegativeStat()
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
    for (s32 index = 0; index < BTL_ENTRY_COUNT; ++index) {
        const BtlEntry *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) && entry->id == id &&
            entry->stat[stat] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
