#include "gamedata/MapSaveBlock.h"
#include "map/mapDepart.h"
#include "map/mapMain.h"
#include "game/GameState.h"

extern "C" {
extern MapMain *g_mapMain;
void mapAdjustPositionToGround(MapVector *position);

// Save the return map and pose, unless a one-shot suppression flag was set.
void FUN_00276138()
{
    MapMain *map = g_mapMain;
    MapSaveBlock *save = gameGetMapBlock();
    if (g_gameState.map.skipReturnSnapshot != 0) {
        g_gameState.map.skipReturnSnapshot = 0;
    } else {
        mapAdjustPositionToGround(&g_gameState.position);
        g_gameState.map.savedLocationSet = 1;
        g_gameState.savedMapId = save->savePoint.mapId;
        g_gameState.savedAreaId = save->savePoint.areaId;
        g_gameState.savedObjectId = save->savePointObjectId;
        g_gameState.savedPosition.x = save->savePoint.x;
        g_gameState.savedPosition.y = save->savePoint.y;
        g_gameState.savedPosition.z = save->savePoint.z;
        g_gameState.savedHeading = save->savePoint.heading;
        g_gameState.savedHeadingCopy = save->savePoint.heading;
        g_gameState.targetMapId = map->mapId;
        g_gameState.targetAreaId = map->areaId;
        g_gameState.targetPosition = g_gameState.position;
        g_gameState.targetHeading = g_gameState.overviewHeading;
        g_gameState.targetHeadingCopy = g_gameState.overviewHeading;
    }
}
}
