#include "gamedata/MapSaveBlockA.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "code/Code002b.h"
#include "map/mapDepart.h"

extern "C" {
void mapPlaceSet(u32 kind, u32 enabled, u32 flags);

// Register the current map's save point and capture its position and heading.
u32 mapSavePointRegisterCurrent(void)
{
    MapSaveBlockA* flags = gameFlagsGetBlock();
    mapSetDepartureIndex(flags->sceneResult + 100);
    mapPlaceSet(24, 1, 0);
    gameFlagsLoadTable4cEntry(flags->sceneResult);
    g_gameState.progressEnabled = 1;
    g_gameState.savedLocationSet = 0;
    flags->savePoint.scale = (s16)(s32)g_gameState.overviewHeading;
    flags->savePoint.mapId = g_gameState.mapId;
    flags->savePoint.areaId = g_gameState.areaId;
    flags->savePointObjectId = g_gameState.currentObjectId;
    flags->savePoint.x = (s16)(s32)g_lmapScene->pose.position.x;
    flags->savePoint.y = (s16)(s32)g_lmapScene->pose.position.y;
    flags->savePoint.z = (s16)(s32)g_lmapScene->pose.position.z;
    flags->savePoint.heading = (s16)(s32)g_gameState.pointHeading;
    return 1;
}
}
