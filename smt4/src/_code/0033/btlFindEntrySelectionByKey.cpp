#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlMain.h"

extern "C" {
/* Finds the selection index associated with a stored unit lookup key. */
s32 btlFindEntrySelectionByKey(const BtlMainState *state, s32 key)
{
    for (s32 i = 0; i < 109; ++i) {
        if (state->entries[i].unk0D4 == key) {
            return state->entries[i].selectionIndex;
        }
    }
    return -1;
}
}
