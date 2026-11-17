#include "map/LmapGlobals.h"
#include "game/GameStateA.h"

extern "C" {

extern LmapMainStateA *g_lmapMainState;

void lmapSnapshotTransitionState(void)
{
    LmapMainStateA *state = g_lmapMainState;
    g_gameState.savedLocationSet = 1;
    g_gameState.savedMapId = state->mapId;
    g_gameState.savedAreaId = state->areaId;
    g_gameState.savedObjectId = g_gameState.currentObjectId;
    g_gameState.savedPosition = g_lmapScene->pose.position;
    g_gameState.savedHeading = g_lmapScene->pose.heading;
    g_gameState.targetMapId = state->mapId;
    g_gameState.targetAreaId = state->areaId;
    g_gameState.targetPosition = g_lmapScene->pose.position;
    g_gameState.targetHeading = g_lmapScene->pose.heading;
}

} /* extern "C" */
