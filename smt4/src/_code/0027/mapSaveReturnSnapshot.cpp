#include "map/mapDepart.h"
#include "map/LmapGlobals.h"
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"
#include "map/mapMain.h"

extern "C" {
extern MapMain *g_mapMain;

// Unless a skip is pending, record the current map and scene position as both saved and target snapshots.
void mapSaveReturnSnapshot(void)
{
    MapMain *map = g_mapMain;

    if (g_gameState.map.skipReturnSnapshot) {
        g_gameState.map.skipReturnSnapshot = 0;
    } else {
        g_gameState.map.savedLocationSet = 1;
        g_gameState.savedMapId = map->mapId;
        g_gameState.savedAreaId = map->areaId;
        g_gameState.savedObjectId = g_gameState.currentObjectId;
        g_gameState.savedPosition = g_lmapScene->pose.position;
        g_gameState.savedHeading = g_lmapScene->pose.heading;
        g_gameState.savedHeadingCopy = g_mapCamera->heading;
        g_gameState.targetMapId = map->mapId;
        g_gameState.targetAreaId = map->areaId;
        g_gameState.targetPosition = g_lmapScene->pose.position;
        g_gameState.targetHeading = g_lmapScene->pose.heading;
        g_gameState.targetHeadingCopy = g_mapCamera->heading;
    }
}
}
