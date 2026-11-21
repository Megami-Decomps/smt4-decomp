/* NON_MATCHING: registers only: through the masks pointer the loads stay in the loop as in retail, but retail keeps the
   entry in r4 and pairs the first mask's halves differently. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {

bool FUN_003ec6d8(const BtlMainStateA *state, u32 id)
{
    const BtlMainGlobalsA *main = &g_btlMain;
    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA *unit = &state->entries[index];
        if (unit != NULL && (unit->flags & main->combatantMasks.required) &&
            !(unit->flags & main->exclusionMask) &&
            (unit->flags & main->actorCategories[1]) && unit->data.id == id) {
            return true;
        }
    }
    return false;
}
}
