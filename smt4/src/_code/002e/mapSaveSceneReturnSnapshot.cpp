/* NON_MATCHING: the body matches; retail reloads the game-state base in the prologue and loads the map pointer before comparing the skip flag. */
#include "map/mapDepart.h"
#include "map/mapMain.h"
#include "map/LmapGlobals.h"
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

extern "C" {
extern MapMain *g_mapMain;
void mapAdjustPositionToGround(MapVector *position);

/* Save the scene's return pose and current target unless the one-shot skip flag is set. */
void mapSaveSceneReturnSnapshot(void)
{
    const GameState &current = g_gameState;
    const MapMain *map = g_mapMain;
    if (current.map.unk84 != 0) {
        g_gameState.map.unk84 = 0;
    } else {
        mapAdjustPositionToGround(&g_gameState.position);
        g_gameState.map.savedLocationSet = 1;
        g_gameState.savedMapId = map->mapId;
        g_gameState.savedAreaId = map->areaId;
        g_gameState.savedObjectId = current.currentObjectId;
        g_gameState.savedPosition = g_lmapScene->pose.position;
        g_gameState.savedHeading = g_lmapScene->pose.heading;
        g_gameState.savedHeadingCopy = g_mapCamera->heading;
        g_gameState.targetMapId = map->mapId;
        g_gameState.targetAreaId = map->areaId;
        g_gameState.targetPosition = current.position;
        g_gameState.targetHeading = current.overviewHeading;
        g_gameState.targetHeadingCopy = current.overviewHeading;
    }
}
}
