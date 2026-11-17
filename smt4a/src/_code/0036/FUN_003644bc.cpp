#include "common.h"
#include "game/GameStateA.h"

extern "C" {

s32 FUN_003644bc(void)
{
    return g_gameState.overrideKinds[4] == -1 && g_gameState.selectedKind == 4;
}

} /* extern "C" */
