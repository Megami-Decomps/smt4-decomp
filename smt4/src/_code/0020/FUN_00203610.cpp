#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {

/* 0 while the state is 0x11-0x13, otherwise 1. */
u32 FUN_00203610(void)
{
    s32 state = g_uiQuest->state;
    u32 result;

    if ((state == 0x11 || state == 0x12) || (state == 0x13)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
