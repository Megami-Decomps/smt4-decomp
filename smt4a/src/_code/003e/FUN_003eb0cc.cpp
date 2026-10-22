/* NON_MATCHING: native's biased-entry null guard is omitted; direct flag addressing and mask allocation differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;
void* sysMemClear(void* destination, u32 size);

// Clear per-index combatant flags for the requested marked/unmarked candidate partition.
void FUN_003eb0cc(BtlMainStateA* battle, s32 mode)
{
    for (s32 slot = 0; slot < 109; ++slot) {
        s32 index = battle->roster[slot].motion.unitIndex;
        if (index < 0) {
            continue;
        }
        BtlCombatantEntryA* entry = &battle->entries[index];
        u64 flags = entry->flags;
        if (!(g_btlMain.combatantMasks.required & flags) ||
            (flags & g_btlMain.exclusionMask)) {
            continue;
        }
        if (mode == 0) {
            if (flags & g_btlMain.actorCategories[2]) {
                continue;
            }
        } else if (mode == 1) {
            if (!(flags & g_btlMain.actorCategories[2])) {
                continue;
            }
        }
        sysMemClear(entry->indexedFlags.values, sizeof(entry->indexedFlags.values));
    }
}
}
