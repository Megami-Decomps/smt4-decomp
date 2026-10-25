#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "shard/btlSelectCandidateEntries.h"

extern "C" {
BattleActionUnit *btlUnitGet(u32 id);
extern u32 g_btlScriptUnit;

void btlSelectCandidateEntries(s32 limit)
{
    s8 count = 0;
    for (s32 index = 4; index < 54; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((g_btlCandidateMasks.required & entry->flags) == 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0) {
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
