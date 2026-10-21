/* NON_MATCHING: instruction selection/order differs: retail ldr r1, [r0, #4]; compiler ldr r0, [r0, #4]. */
#include "common.h"

struct GameWork {
    /* 0x000 */ u8 unk000[0x1E64];
    /* 0x1E64 */ s8 status;
};
struct GameGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ GameWork *data;
};

extern "C" {

extern GameGlobals g_gameGlobals;

/* Returns the optional game-work status byte. */
s32 FUN_001ddc00(void)
{
    if (g_gameGlobals.data == NULL) {
        return 0;
    }
    return g_gameGlobals.data->status;
}

} /* extern "C" */
