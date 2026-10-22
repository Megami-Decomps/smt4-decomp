/* NON_MATCHING: global state load is scheduled after the prologue and VFP copy grouping differs. */
#include "map/mapDepart.h"
#include "map/mapMain.h"

extern "C" {
extern GameState g_gameState;
extern MapMain *g_mapMain;
void FUN_00270f70(MapVector *position);

/* Saves the current map identity and position for the pending departure. */

void FUN_002eb5dc(void)
{
    MapMain *map = g_mapMain;
    if (g_gameState.unk284) {
        g_gameState.unk284 = 0;
    } else {
        FUN_00270f70(&g_gameState.position);
        g_gameState.unk2F8Byte = 1;
        g_gameState.savedMapId = map->mapId;
        g_gameState.savedAreaId = map->areaId;
        g_gameState.savedObjectId = g_gameState.currentObjectId;
        g_gameState.savedPosition = g_gameState.position;
        g_gameState.unk314 = g_gameState.unk90Scalar;
        g_gameState.unk318 = g_gameState.unk90Scalar;
        g_gameState.targetMapId = map->mapId;
        g_gameState.targetAreaId = map->areaId;
        g_gameState.unk330Scalar = g_gameState.unk90Scalar;
        g_gameState.unk334Scalar = g_gameState.unk90Scalar;
        g_gameState.targetPosition = g_gameState.position;
    }
}
}
