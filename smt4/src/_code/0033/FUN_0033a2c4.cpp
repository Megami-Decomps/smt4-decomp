/* NON_MATCHING: The peeled pair loop folds field offsets into entry pointers instead of keeping retail offset registers. */
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
/* Finds the selection index associated with a stored unit lookup key. */
s32 FUN_0033a2c4(const BtlState *state, s32 key)
{
    BtlUnitEntry *entries = state->units;
    for (s32 i = 0; i < 109; ++i) {
        if (entries[i].unk0D4 == key) {
            return entries[i].selectionIndex;
        }
    }
    return -1;
}
}
