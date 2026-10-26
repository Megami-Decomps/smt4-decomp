#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

struct State { u8 unk000[0x14c]; u8 first; u8 second; };
extern State g_gameState;

s32 scrCommSetGameStateFlags(void)
{
    if (scrGetArg(0) == 0) {
        g_gameState.first = 0;
    } else {
        g_gameState.first = 1;
    }
    if (scrGetArg(1) == 0) {
        g_gameState.second = 0;
    } else {
        g_gameState.second = 1;
    }
    return 1;
}

} /* extern "C" */
