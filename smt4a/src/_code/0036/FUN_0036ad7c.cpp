/* NON_MATCHING: retail 56 vs built 56 rows; snapshot pointer registers and relocated global-base literals differ. */
#include "map/mapMain.h"
#include "game/GameStateA.h"
#include "gamedata/MapSaveBlockA.h"
#include "map/mapDepart.h"

extern "C" {
extern MapMainA *g_mapMain;

void FUN_0036ad7c(void)
{
    MapMainA *map = g_mapMain;
    MapSaveBlockA *flags = gameFlagsGetBlock();
    if (g_gameState.skipTransitionSnapshot != 0) {
        g_gameState.skipTransitionSnapshot = 0;
    } else {
        mapProbePositionDownward(&g_gameState.pointPosition);
        g_gameState.savedLocationSet = 1;
        g_gameState.savedMapId = flags->savePoint.mapId;
        g_gameState.savedAreaId = flags->savePoint.areaId;
        g_gameState.savedObjectId = flags->savePointObjectId;
        g_gameState.savedPosition.x = static_cast<f32>(flags->savePoint.x);
        g_gameState.savedPosition.y = static_cast<f32>(flags->savePoint.y);
        g_gameState.savedPosition.z = static_cast<f32>(flags->savePoint.z);
        g_gameState.savedHeading = static_cast<f32>(flags->savePoint.heading);
        g_gameState.savedHeadingCopy = static_cast<f32>(flags->savePoint.heading);
        g_gameState.targetMapId = map->transition.mapId;
        g_gameState.targetAreaId = map->transition.areaId;
        g_gameState.targetPosition = g_gameState.pointPosition;
        g_gameState.targetHeading = g_gameState.overviewHeading;
        g_gameState.targetHeadingCopy = g_gameState.overviewHeading;
    }
}
}
