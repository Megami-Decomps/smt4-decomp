/* NON_MATCHING: grouped stats offsets match; percentage base, numerator and constant registers differ. */
#include "battle/EntryStats.h"
#include "script/ScriptArgs.h"

#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
extern "C" {
s32 scrGetArg(s32 index);

/* Script command: sets 1 when a present, active, unblocked entry with the id has at most the given MP percentage. */
u32 FUN_002f04c4(void)
{
    u32 id = scrGetArg(0);
    s32 percent = scrGetArg(1);
    s32 i;

    for (i = 0; i < BTL_ENTRY_COUNT; i++) {
        BtlEntryStatsView *entry = &reinterpret_cast<BtlEntryStatsView *>(btlGetMainState()->entries)[i];
        u32 flags = entry->flags;
        if ((flags & BTL_ENTRY_FLAG_PRESENT) && (flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(flags & BTL_ENTRY_FLAG_BLOCKED) && entry->stats.id == id) {
            BtlEntryMpStats *stats = &entry->stats;
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
