/* NON_MATCHING: roster addressing is strength-reduced differently and uses fewer saved registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;

void FUN_003efbac(BtlMainStateA *state)
{
    u64 mask = g_btlMain.actorCategories[2];
    for (s32 index = 0; index < 109; ++index) {
        BattleRosterRecordA *record = &state->roster[index];
        s16 unitIndex = record->motion.unitIndex;
        if (unitIndex >= 0 && (state->entries[unitIndex].flags & mask) != 0) {
            record->motion.flags &= ~0x4000u;
        }
    }
}
}
