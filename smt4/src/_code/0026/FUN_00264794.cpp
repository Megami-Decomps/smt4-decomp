#include "map/LmapMainGlobals.h"
#include "game/GameState.h"

extern "C" {


/* Records the current map, area, object and position (twice: as the current and the origin position). */
void FUN_00264794(void)
{
    LmapMainState *mainState = g_lmapMainState;
    g_gameState.map.savedLocationSet = 1;
    g_gameState.savedMapId = mainState->mapId;
    g_gameState.savedAreaId = mainState->areaId;
    g_gameState.savedObjectId = g_gameState.currentObjectId;
    g_gameState.savedPosition = g_lmapScene->pose.position;
    g_gameState.savedHeading = g_lmapScene->pose.heading;
    g_gameState.targetMapId = mainState->mapId;
    g_gameState.targetAreaId = mainState->areaId;
    g_gameState.targetPosition = g_lmapScene->pose.position;
    g_gameState.targetHeading = g_lmapScene->pose.heading;
}

} /* extern "C" */
