#include "shard/Shard003F.h"

extern "C" {

/* True while unit slot `index`'s state is 4, 5, 6 or 7. */
u32 btlSlotStateIs4To7(BtlStateB *state, s32 index)
{
    s32 value = state->table4D30[index];

    if (value == 4 || value == 5 || value == 6 || value == 7) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
