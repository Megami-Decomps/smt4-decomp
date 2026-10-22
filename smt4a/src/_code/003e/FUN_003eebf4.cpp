/* NON_MATCHING: The second mask is hoisted out of the loop, and the selected entry pointer replaces retail's final index recomputation. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;

/* Returns the selection index of the requested one-based match, or -1 when no such combatant exists. */
s32 FUN_003eebf4(const BtlMainStateA *state, s32 ordinal)
{
    s32 found = 0;
    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA *entry = &state->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlMain.combatantMasks.required) != 0 &&
            (flags & g_btlMain.selectionMask) != 0) {
            ++found;
            if (found == ordinal) {
                return entry->indexView.selectionIndex;
            }
        }
    }
    return -1;
}
}
