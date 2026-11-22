#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

void battleAddEnemyRewards(BtlCombatantEntryA *entry);

/* Runs battleAddEnemyRewards for every battle entry that is eligible, not excluded and has the required mask bits. */
u32 FUN_003cc460(void)
{
    BtlMainStateA *battle = btlGetMainState();

    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &battle->entries[i];

        if ((entry->flags & g_battleMaskPresets.eligibility.active) != 0 &&
            !battleMaskIntersects(entry->flags, g_battleMaskPresets.eligibility.excluded) &&
            (entry->flags & g_battleMaskPresets.eligibility.required) != 0) {
            battleAddEnemyRewards(entry);
        }
    }
    return 1;
}

} /* extern "C" */
