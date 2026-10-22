/* NON_MATCHING: turn-order pruning recovered; initial mask snapshots and loop register allocation differ by one instruction. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;

// Remove turn-order entries whose combatants no longer pass the active masks.
void FUN_003e7ef0(BtlMainStateA* battle)
{
    u64 required = g_btlMain.combatantMasks.required;
    u64 excluded = g_btlMain.exclusionMask;
    u64 turnExcluded = g_btlMain.turnOrderMasks.excluded;
    for (s32 i = 0; i < 12; ++i) {
        s32 index = battle->turnOrder.indices[i];
        if (index >= 0) {
            u64 flags = battle->entries[index].flags;
            if ((flags & required) == 0 || (flags & excluded) != 0 ||
                (flags & turnExcluded) != 0) {
                battle->turnOrder.indices[i] = -1;
            }
        }
    }
}
}
