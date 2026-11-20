#include "map/mapDepart.h"
#include "map/mapMain.h"
#include "game/GameState.h"

extern "C" {
extern MapMain *g_mapMain;
void mapAdjustPositionToGround(MapVector *position);

/* Saves the current map identity and position for the pending departure. */

void FUN_002eb5dc(void)
{
    const GameState &current = g_gameState;
    const MapMain *map = g_mapMain;
    if (current.map.skipReturnSnapshot) {
        g_gameState.map.skipReturnSnapshot = 0;
    } else {
        mapAdjustPositionToGround(&g_gameState.position);
        g_gameState.map.savedLocationSet = 1;
        g_gameState.savedMapId = map->mapId;
        g_gameState.savedAreaId = map->areaId;
        g_gameState.savedObjectId = current.currentObjectId;
        g_gameState.savedPosition = current.position;
        g_gameState.savedHeading = current.overviewHeading;
        g_gameState.savedHeadingCopy = current.overviewHeading;
        g_gameState.targetMapId = map->mapId;
        g_gameState.targetAreaId = map->areaId;
        g_gameState.targetHeading = current.overviewHeading;
        g_gameState.targetHeadingCopy = current.overviewHeading;
        g_gameState.targetPosition = current.position;
    }
}
}
