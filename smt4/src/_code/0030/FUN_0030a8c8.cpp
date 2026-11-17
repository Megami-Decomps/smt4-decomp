#include "common.h"
#include "game/GameState.h"


extern "C" {


/* Script command: clears the game-state word at 0x48. */
u32 FUN_0030a8c8(void)
{
    g_gameState.unk048 = 0;
    return 1;
}

} /* extern "C" */
