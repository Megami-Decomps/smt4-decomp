/* NON_MATCHING: grouped stats offsets match; percentage base, numerator and constant registers differ. */
#include "battle/EntryStats.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrGetArg(s32 index);
BtlMainState *btlGetMainState(void);

// Script result: 1 when an active, unblocked entry with the given id is at or below the HP percentage.
u32 FUN_002f041c(void)
{
    u32 id = scrGetArg(0);
    s32 percent = scrGetArg(1);

    for (s32 i = 0; i < BTL_ENTRY_COUNT; ++i) {
        BtlEntryStatsView *entry = &reinterpret_cast<BtlEntryStatsView *>(btlGetMainState()->entries)[i];
        u32 flags = entry->flags;
        if ((flags & BTL_ENTRY_FLAG_PRESENT) && (flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(flags & BTL_ENTRY_FLAG_BLOCKED) && entry->stats.id == id) {
            BtlEntryStats *stats = &entry->stats;
            s32 hp = stats->hp;
            s32 maxHp = stats->maxHp;
            if (hp * 100 / maxHp <= percent) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
