#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/mapMain.h"
#include "map/LmapViewGlobals.h"
#include <string.h>

extern "C" {
extern MapMainA *g_mapMain;

/* Records the map transition's source and destination (map, area, position, heading) from the
 * current map, unless the snapshot was flagged to be skipped once. */
void FUN_0035846c()
{
    MapMainA *mapMain = g_mapMain;
    if (g_gameState.skipTransitionSnapshot != 0) {
        g_gameState.skipTransitionSnapshot = 0;
        return;
    }
    g_gameState.savedLocationSet = 1;
    g_gameState.savedMapId = mapMain->transition.mapId;
    g_gameState.savedAreaId = mapMain->transition.areaId;
    g_gameState.savedObjectId = g_gameState.currentObjectId;
    memcpy(&g_gameState.savedPosition, &g_lmapScene->pose.position, sizeof(MapVector));
    g_gameState.savedHeading = g_lmapScene->pose.heading;
    g_gameState.savedHeadingCopy = g_lmapView->heading;
    g_gameState.targetMapId = mapMain->transition.mapId;
    g_gameState.targetAreaId = mapMain->transition.areaId;
    memcpy(&g_gameState.targetPosition, &g_lmapScene->pose.position, sizeof(MapVector));
    g_gameState.targetHeading = g_lmapScene->pose.heading;
    g_gameState.targetHeadingCopy = g_lmapView->heading;
}
}
