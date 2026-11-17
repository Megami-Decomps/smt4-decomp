/* NON_MATCHING: global state load is scheduled after the prologue and VFP copy grouping differs. */
#include "map/mapDepart.h"
#include "map/mapMain.h"
#include "game/GameState.h"

extern "C" {
extern MapMain *g_mapMain;
void mapAdjustPositionToGround(MapVector *position);

/* Saves the current map identity and position for the pending departure. */

void FUN_002eb5dc(void)
{
    MapMain *map = g_mapMain;
    if (g_gameState.map.unk84) {
        g_gameState.map.unk84 = 0;
    } else {
        mapAdjustPositionToGround(&g_gameState.position);
        g_gameState.map.savedLocationSet = 1;
        g_gameState.savedMapId = map->mapId;
        g_gameState.savedAreaId = map->areaId;
        g_gameState.savedObjectId = g_gameState.currentObjectId;
        g_gameState.savedPosition = g_gameState.position;
        g_gameState.savedHeading = g_gameState.overviewHeading;
        g_gameState.unk318 = g_gameState.overviewHeading;
        g_gameState.targetMapId = map->mapId;
        g_gameState.targetAreaId = map->areaId;
        g_gameState.targetHeading = g_gameState.overviewHeading;
        g_gameState.unk334 = g_gameState.overviewHeading;
        g_gameState.targetPosition = g_gameState.position;
    }
}
}
