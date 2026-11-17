/* NON_MATCHING: initial global-base loading and flag-test/prologue scheduling differ. */
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/mapMain.h"

extern "C" {
extern MapMainA *g_mapMain;

void FUN_0036ae68()
{
    MapMainA *map = g_mapMain;
    if (g_gameState.skipTransitionSnapshot != 0) {
        g_gameState.skipTransitionSnapshot = 0;
    } else {
        mapProbePositionDownward(&g_gameState.pointPosition);
        g_gameState.savedLocationSet = 1;
        g_gameState.savedMapId = map->transition.mapId;
        g_gameState.savedAreaId = map->transition.areaId;
        g_gameState.savedObjectId = g_gameState.currentObjectId;
        g_gameState.savedPosition = g_gameState.pointPosition;
        g_gameState.savedHeading = g_gameState.overviewHeading;
        g_gameState.savedHeadingCopy = g_gameState.overviewHeading;
        g_gameState.targetMapId = map->transition.mapId;
        g_gameState.targetAreaId = map->transition.areaId;
        g_gameState.targetHeading = g_gameState.overviewHeading;
        g_gameState.targetHeadingCopy = g_gameState.overviewHeading;
        g_gameState.targetPosition = g_gameState.pointPosition;
    }
}
}
