#include "battle/EntryStats.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

// Script result: 1 when any active, unblocked entry is at or above the HP percentage.
u32 FUN_002f0388(void)
{
    s32 percent = scrGetArg(0);

    for (s32 i = 0; i < BTL_ENTRY_COUNT; ++i) {
        BtlEntry *unit = &btlGetMainState()->entries[i];
        BtlEntryStatsView *entry = reinterpret_cast<BtlEntryStatsView *>(unit);
        u32 flags = entry->flags;
        if ((flags & BTL_ENTRY_FLAG_PRESENT) && (flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(flags & BTL_ENTRY_FLAG_BLOCKED)) {
            BtlEntryStats *stats = &entry->stats;
            s32 hp = stats->hp;
            s32 maxHp = stats->maxHp;
            if (hp * 100 / maxHp >= percent) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
