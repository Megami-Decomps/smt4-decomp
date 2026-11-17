#include "common.h"
#include "game/GameStateA.h"
#include "script/ScriptArgs.h"

extern "C" {

void FUN_0035846c(void);

/* Script command 0x164f: resets the event camera to its fixed preset and activates it. */
u32 FUN_00330eb4(void)
{
    if (scrGetArg(0) == 0x164f) {
        FUN_0035846c();
        g_gameState.targetMapId = 0x65;
        g_gameState.targetAreaId = 5;
        g_gameState.targetHeading = 180.0f;
        g_gameState.targetHeadingCopy = 180.0f;
        g_gameState.targetPosition.x = -12000.0f;
        g_gameState.targetPosition.y = 107.0f;
        g_gameState.targetPosition.z = 2958.0f;
        g_gameState.skipTransitionSnapshot = 1;
    }
    return 1;
}

} /* extern "C" */
