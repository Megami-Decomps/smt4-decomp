/* NON_MATCHING: the final index recomputation now matches; armcc still hoists the second mask (selectionMask) out of the loop, where retail loads it inside the loop, and the push list gains sl. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Returns the selection index of the requested one-based match, or -1 when no such combatant exists. */
s32 btlFindSelectionIndexByOrdinal(const BtlMainStateA *state, s32 ordinal)
{
    s32 found = 0;
    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA *entry = &state->entries[index];
        if ((entry->flags & g_btlMain.combatantMasks.required) != 0 &&
            (g_btlMain.selectionMask & entry->flags) != 0) {
            ++found;
            if (found == ordinal) {
                return state->entries[index].selectionIndex;
            }
        }
    }
    return -1;
}
}
