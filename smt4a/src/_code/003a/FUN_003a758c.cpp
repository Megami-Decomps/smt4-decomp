#include "common.h"
#include "game/GameStateA.h"

extern "C" {

/* Script command: raises the game-state flag at 0x4cd. */
u32 FUN_003a758c(void)
{
    g_gameState.unk4CD = 1;
    return 1;
}

} /* extern "C" */
