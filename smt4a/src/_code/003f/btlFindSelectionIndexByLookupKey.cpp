// Find the combatant entry holding the lookup key and return its selection index, or -1.
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" s32 btlFindSelectionIndexByLookupKey(const BtlMainStateA* state, s32 key)
{
    for (s32 index = 0; index < 109; ++index) {
        if (state->entries[index].lookupView.lookupKey == key) {
            return state->entries[index].indexView.selectionIndex;
        }
    }
    return -1;
}
