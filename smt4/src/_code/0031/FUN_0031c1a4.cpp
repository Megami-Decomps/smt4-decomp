#include "common.h"
#include "script/ScriptArgs.h"
#include "game/GameState.h"


extern "C" {
void FUN_0021e450(void);
}

extern "C" s32 FUN_0031c1a4(void)
{
    scrSetResult(g_gameState.argument);
    FUN_0021e450();
    return 1;
}
