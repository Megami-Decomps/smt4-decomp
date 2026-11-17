#include "common.h"
#include "game/GameStateA.h"

extern "C" {

/* Script command: clears the game state's word at 0x4C. */
u32 FUN_0039bca4(void)
{
    g_gameState.unk04C = 0;
    return 1;
}

} /* extern "C" */
