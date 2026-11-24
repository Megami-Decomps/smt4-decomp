#include "battle/BtlMainAccess.h"

extern "C" {

/* False while unit slot `index`'s state is 4, 5 or 6. */
u32 btlSlotStateIsNot456(BtlMainStateExtA *state, s32 index)
{
    s32 value = state->slotColorFade.mode[index];

    if (value == 4 || value == 5 || value == 6) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
