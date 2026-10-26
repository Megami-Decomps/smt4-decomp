/* NON_MATCHING: code shape now matches retail (roster and entries pointers reloaded per iteration, field offsets hoisted); only the register assignment and the two-ldr load of the entry mask differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;

void FUN_003efbac(BtlMainStateA *state)
{
    u64 mask = g_btlMain.actorCategories[2];
    for (s32 index = 0; index < 109; ++index) {
        s16 unitIndex = state->roster[index].motion.unitIndex;
        if (unitIndex >= 0 && (state->entries[unitIndex].flags & mask) != 0) {
            state->roster[index].motion.flags &= ~0x4000u;
        }
    }
}
}
