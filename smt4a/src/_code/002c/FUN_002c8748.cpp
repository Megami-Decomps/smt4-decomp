#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {

/* Returns 0 when the record's state is 0x11, 0x12 or 0x13, otherwise 1. */
u32 FUN_002c8748(void)
{
    s32 state;
    u32 result;

    state = g_uiQuest->menuState;
    if ((state == 0x11 || state == 0x12) || (state == 0x13)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
