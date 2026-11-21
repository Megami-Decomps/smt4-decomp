/* NON_MATCHING: prologue matches retail (all 11 instructions); inside the loop only r0/r4 are swapped (which collapses retail's two entry-mask ldrs into one ldm). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {

void FUN_003efbac(BtlMainStateA *state)
{
    for (s32 index = 0; index < 109; ++index) {
        u64 mask = g_btlMain.actorCategories[2];
        s32 unitIndex = state->roster[index].motion.unitIndex;
        if (unitIndex >= 0 && (state->entries[unitIndex].flags & mask) != 0) {
            state->roster[index].motion.flags &= ~0x4000;
        }
    }
}
}
