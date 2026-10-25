/* NON_MATCHING: armcc hoists the excluded mask out of the loop too (extra saved registers); retail hoists only the active mask. */
#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
s32 valueAtF0IsReady(void);
void FUN_001f50fc(s16 unitId, s32 hp);

/* For the first active, unexcluded enemy combatant, reports its HP, raised to at least 29% of its maximum. */
u32 FUN_0035f8bc(void)
{
    BtlMainStateA *state = btlGetMainState();

    if (state != NULL && valueAtF0IsReady() != 0) {
        for (s32 i = 4; i < 54; i++) {
            BtlCombatantEntryA *entry = &state->entries[i];
            if ((entry->flags & g_battleMaskPresets.eligibility.active) != 0 &&
                (entry->flags & g_battleMaskPresets.eligibility.excluded) == 0) {
                s32 floor = entry->maxHp * 29 / 100;
                FUN_001f50fc(entry->id, entry->hp < floor ? floor : entry->hp);
                break;
            }
        }
    }
    return 1;
}

} /* extern "C" */
