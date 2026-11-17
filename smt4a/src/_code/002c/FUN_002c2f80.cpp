#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {
s32 scrGetArg(u32 argument);

// Toggle the three related state flags and clear the transition byte.
u32 FUN_002c2f80(void)
{
    if (scrGetArg(0) != 0) {
        g_gameState.unk261 = 0;
        g_gameState.unk280 = 0;
        g_gameState.unk25D = 0;
        g_gameState.transitionCompleted = 0;
    } else {
        g_gameState.unk261 = 1;
        g_gameState.unk280 = 0;
        g_gameState.unk25D = 1;
        g_gameState.transitionCompleted = 1;
    }
    return 1;
}
}
