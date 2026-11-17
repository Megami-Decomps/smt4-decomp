#include "common.h"
#include "game/GameStateA.h"

extern "C" s32 FUN_0037d4d4(void)
{
    g_gameState.scriptRequestPending = 0;
    g_gameState.scriptRequestValues[0] = 0;
    g_gameState.scriptRequestValues[1] = 0;
    g_gameState.scriptRequestValues[2] = 0;
    return 1;
}
