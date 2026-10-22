/* NON_MATCHING: the second mask intersection uses different result registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
BtlMainStateA *btlGetMainState();
BattleActionUnit *btlUnitGet(u32 id);
extern u32 g_btlScriptUnit;

void FUN_003283c8(s32 limit)
{
    s8 count = 0;
    for (s32 index = 4; index < 54; ++index) {
        u64 flags = btlGetMainState()->entries[index].flags;
        if ((g_btlCandidateMasks.required & flags) == 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0) {
            BattleActionUnit *unit = btlUnitGet(g_btlScriptUnit);
            ++count;
            unit->selectedUnits[index] = index;
            if (count >= limit) {
                return;
            }
        }
    }
}
}
