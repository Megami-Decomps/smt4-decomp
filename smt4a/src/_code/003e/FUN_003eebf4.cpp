/* NON_MATCHING: the final index recomputation now matches; armcc still hoists the second mask (selectionMask) out of the loop, where retail loads it inside the loop, and the push list gains sl. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;

/* Returns the selection index of the requested one-based match, or -1 when no such combatant exists. */
s32 FUN_003eebf4(const BtlMainStateA *state, s32 ordinal)
{
    s32 found = 0;
    for (s32 index = 0; index < 109; ++index) {
        u64 flags = state->entries[index].flags;
        if ((flags & g_btlMain.combatantMasks.required) != 0 &&
            (flags & g_btlMain.selectionMask) != 0) {
            ++found;
            if (found == ordinal) {
                return state->entries[index].indexView.selectionIndex;
            }
        }
    }
    return -1;
}
}
