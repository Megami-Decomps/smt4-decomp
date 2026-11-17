/* NON_MATCHING: retail 47 vs built 46 rows; snapshot field-store scheduling and saved-pointer allocation differ. */
#include "map/mapMain.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "map/LmapViewGlobals.h"

extern "C" {
extern MapMainA *g_mapMain;

void FUN_0036b004(void)
{
    MapMainA *map = g_mapMain;
    mapProbePositionDownward(&g_gameState.pointPosition);
    g_gameState.savedLocationSet = 1;
    g_gameState.savedMapId = map->transition.mapId;
    g_gameState.savedAreaId = map->transition.areaId;
    g_gameState.savedObjectId = g_gameState.currentObjectId;
    g_gameState.savedPosition.x = g_lmapScene->pose.position.x;
    g_gameState.savedPosition.y = g_lmapScene->pose.position.y;
    g_gameState.savedPosition.z = g_lmapScene->pose.position.z;
    g_gameState.savedHeading = g_gameState.overviewHeading + 180.0f;
    g_gameState.savedHeadingCopy = g_lmapView->heading;
    g_gameState.targetMapId = map->transition.mapId;
    g_gameState.targetAreaId = map->transition.areaId;
    g_gameState.targetPosition = g_gameState.pointPosition;
    g_gameState.targetHeading = g_gameState.overviewHeading;
    g_gameState.targetHeadingCopy = g_gameState.overviewHeading;
}
}
