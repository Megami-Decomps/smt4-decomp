/* NON_MATCHING: through the masks pointer the mask loads stay in the loop as in retail; registers differ (retail
   reuses the global's address register for the masks and keeps the fallback in sl). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {
u32 recordGetScaledMaximum(u32 sourceId);

// Prefer a matching active battle participant's maximum HP over the record value.
u32 btlUnitMaxHp(u32 sourceId)
{
    BtlMainStateA *state = g_btlMain.state;
    u32 fallback = recordGetScaledMaximum(sourceId);
    if (state != NULL && state->unk0088 != 29) {
        const BtlMainGlobalsA *main = &g_btlMain;
        for (s32 index = 0; index < 109; ++index) {
            BtlCombatantEntryA *entry = &state->entries[index];
            if ((entry->flags & main->combatantMasks.required) &&
                !(entry->flags & main->exclusionMask) &&
                (entry->flags & main->actorCategories[1]) &&
                entry->data.sourceId == sourceId) {
                fallback = entry->data.maxHp;
                break;
            }
        }
    }
    return fallback;
}
}
