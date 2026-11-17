#include "common.h"
#include "game/GameStateA.h"

extern "C" {

void scrSetResult(s32 result);

/* Script command: returns 1 when the game state's flag at 0x128 is set. */
u32 FUN_0035cf14(void)
{
    scrSetResult(g_gameState.targetIconNear != 0);
    return 1;
}

} /* extern "C" */
