#include "shard/Shard003E.h"

extern "C" {

/* False while unit slot `index`'s state is 4, 5 or 6. */
u32 btlSlotStateIsNot456(BtlStateB *state, s32 index)
{
    s32 value = state->table4D30[index];

    if (value == 4 || value == 5 || value == 6) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
