#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapGlobals.h"
#include "game/GameStateA.h"
#include "gamedata/MapSaveBlockA.h"

extern "C" {

void FUN_00376fb8(s32 arg);
void mapPlaceSet(s32 place, s32 arg1, s32 arg2);
void gameFlagsLoadTable4cEntry(s32 id);

// Script command: switch to place 0x18 with table 0x4C entry 1 and record the current position as the
// flag block's save point.
u32 scrCommEnterPlaceAndSavePoint(void)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    FUN_00376fb8(0x65);
    mapPlaceSet(0x18, 1, 0);
    gameFlagsLoadTable4cEntry(1);
    g_gameState.progressEnabled = 1;
    g_gameState.savedLocationSet = 0;
    flags->savePoint.scale = (s16)g_gameState.overviewHeading;
    flags->savePoint.mapId = g_gameState.mapId;
    flags->savePoint.areaId = g_gameState.areaId;
    flags->savePointObjectId = g_gameState.currentObjectId;
    flags->savePoint.x = (s16)g_lmapScene->pose.position.x;
    flags->savePoint.y = (s16)g_lmapScene->pose.position.y;
    flags->savePoint.z = (s16)g_lmapScene->pose.position.z;
    flags->savePoint.heading = (s16)g_gameState.pointHeading;
    return 1;
}

} /* extern "C" */
