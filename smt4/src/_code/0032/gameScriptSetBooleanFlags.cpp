#include "common.h"
#include "game/GameState.h"

extern "C" {
s32 scrGetArg(u32 index);
/* Stores the two script-controlled boolean flags. */
s32 gameScriptSetBooleanFlags()
{
    if (scrGetArg(0) == 0) {
        g_gameState.event.scriptFlag = 0;
    } else {
        g_gameState.event.scriptFlag = 1;
    }
    if (scrGetArg(1) == 0) {
        g_gameState.event.bgmReleased = 0;
    } else {
        g_gameState.event.bgmReleased = 1;
    }
    return 1;
}
}
