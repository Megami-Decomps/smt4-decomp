/* NON_MATCHING: the masks go through a local pointer (retail hoists only the active mask); retail loads the excluded mask's halves with two ldr (ours ldm), loads hp/maxHp together and the id early through a +0x100 base (ldrh, sxth) where ours uses ldrsh with a pooled 0x166. */
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
        const BattleMaskPresets *masks = &g_battleMaskPresets;

        for (s32 i = 4; i < 54; i++) {
            BtlCombatantEntryA *entry = &state->entries[i];
            if ((entry->flags & masks->eligibility.active) != 0 &&
                (entry->flags & masks->eligibility.excluded) == 0) {
                FUN_001f50fc(entry->data.id, entry->data.maxHp * 29 / 100 > entry->data.hp ? entry->data.maxHp * 29 / 100 : entry->data.hp);
                break;
            }
        }
    }
    return 1;
}

} /* extern "C" */
