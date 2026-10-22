/* NON_MATCHING: armcc hoists the excluded mask out of the loop too (extra saved registers); retail hoists only the active mask. */
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {
s32 valueAtF0IsReady(void);
void FUN_001f50fc(s16 unitId, s32 hp);

/* For the first active, unexcluded enemy combatant, reports its HP, raised to at least 29% of its maximum. */
u32 FUN_0035f8bc(void)
{
    BattleMaskState *state = btlGetMainState();

    if (state != NULL && valueAtF0IsReady() != 0) {
        for (s32 i = 4; i < 54; i++) {
            BattleMaskEntry *entry = &state->entryView.entries[i];
            if ((entry->mask & g_battleMaskPresets.eligibility.active) != 0 &&
                (entry->mask & g_battleMaskPresets.eligibility.excluded) == 0) {
                s32 floor = entry->maxHp * 29 / 100;
                FUN_001f50fc(entry->unitId, entry->hp < floor ? floor : entry->hp);
                break;
            }
        }
    }
    return 1;
}

} /* extern "C" */
