/* NON_MATCHING: prologue matches retail; inside the loop only r0/r4 are swapped (collapsing retail's two entry-mask ldrs into one ldm). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"

namespace {
}

extern "C" {

/* Mark entries whose nonnegative target index selects flags matching the global mask. */
void FUN_003f14a0(BtlMainStateA *battle)
{
    for (s32 i = 0; i < 109; i++) {
        const u64 mask = g_btlMain.actorCategories[2];
        s32 target = battle->roster[i].combatant.combatantIndex;
        if (target >= 0) {
            if ((battle->entries[target].flags & mask) != 0) {
                battle->roster[i].liveFlags.unk50 |= 0x4000;
            }
        }
    }
}
}
