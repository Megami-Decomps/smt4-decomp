#include "common.h"
#include "game/GameState.h"


extern "C" {


s32 scrGetArg(s32 index);

/* Script command: raises the game-state request and stores the first argument with it. */
u32 FUN_002fea44(void)
{
    g_gameState.requested = 1;
    g_gameState.argument = scrGetArg(0);
    return 1;
}

} /* extern "C" */
