#include "common.h"
extern "C" {
extern struct { u32 mode; u8 unk04[0x4F8]; s32 count; } g_gameState;
/* Advances the counter, capped at six, in the four supported game modes. */
void FUN_00325aa0(void)
{
    if (g_gameState.mode == 28 || g_gameState.mode == 29 ||
        g_gameState.mode == 30 || g_gameState.mode == 31) {
        ++g_gameState.count;
        if (g_gameState.count > 6)
            g_gameState.count = 6;
    }
}
}
