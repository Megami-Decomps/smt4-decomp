#include "map/LmapGlobals.h"
#include "game/GameState.h"

extern "C" {

extern LmapMainState *g_lmapMainState;

/* Records the current map, area, object and position (twice: as the current and the origin position). */
void FUN_00264794(void)
{
    LmapMainState *mainState = g_lmapMainState;
    g_gameState.map.savedLocationSet = 1;
    g_gameState.savedMapId = mainState->unk40;
    g_gameState.savedAreaId = mainState->unk48;
    g_gameState.savedObjectId = g_gameState.currentObjectId;
    g_gameState.savedPosition = g_lmapScene->pose.position;
    g_gameState.savedHeading = g_lmapScene->pose.heading;
    g_gameState.targetMapId = mainState->unk40;
    g_gameState.targetAreaId = mainState->unk48;
    g_gameState.targetPosition = g_lmapScene->pose.position;
    g_gameState.targetHeading = g_lmapScene->pose.heading;
}

} /* extern "C" */
