#include "common.h"
#include "game/GameStateA.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 scrCommSetGameStateFlags(void)
{
    if (scrGetArg(0) == 0) {
        g_gameState.unk14C = 0;
    } else {
        g_gameState.unk14C = 1;
    }
    if (scrGetArg(1) == 0) {
        g_gameState.musicInitialized = 0;
    } else {
        g_gameState.musicInitialized = 1;
    }
    return 1;
}

} /* extern "C" */
