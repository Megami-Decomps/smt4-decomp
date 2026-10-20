/* Hands the job work area to FUN_00335b80 for the game-over object (a tail call), or returns 0 without one. */
#include "common.h"

extern "C" {

u32 jobGetWork(void);
u32 FUN_00335b80(s32 gameOver, u32 work);

extern s32 g_btlGameOver;

u32 FUN_002ca030(void)
{
    u32 work = jobGetWork();

    if (g_btlGameOver != 0) {
        return FUN_00335b80(g_btlGameOver, work);
    }
    return 0;
}

}
