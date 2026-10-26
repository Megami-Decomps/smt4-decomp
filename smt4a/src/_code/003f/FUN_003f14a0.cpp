/* NON_MATCHING: only the register assignment of the loop differs (see the diff); written with the shared battle-state types */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

namespace {
struct BattleSelectionMaskView {
    u8 unk00[0x70];
    u64 mask; // 0x70
};
}

extern "C" {
extern BattleSelectionMaskView g_btlMain;

// Mark entries whose nonnegative target index selects flags matching the global mask.
void FUN_003f14a0(BtlMainStateA *battle)
{
    const u64 mask = g_btlMain.mask;

    for (s32 i = 0; i < 109; i++) {
        s32 target = battle->roster[i].combatant.combatantIndex;
        if (target >= 0) {
            if ((battle->entries[target].flags & mask) != 0) {
                battle->roster[i].liveFlags.unk50 |= 0x4000;
            }
        }
    }
}
}
