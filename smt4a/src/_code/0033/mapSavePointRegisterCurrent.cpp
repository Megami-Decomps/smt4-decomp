#include "shard/W5_W5Match7_FlagBanks.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "code/Code002b.h"

extern "C" {
void mapPlaceSet(u32 kind, u32 enabled, u32 flags);
void FUN_00376fb8(u32 handle);

// Register the current map's save point and capture its position and heading.
u32 mapSavePointRegisterCurrent(void)
{
    FlagWorkBanks* flags = gameFlagsGetBlock();
    FUN_00376fb8(flags->savePointMap.handle + 100);
    mapPlaceSet(24, 1, 0);
    gameFlagsLoadTable4cEntry(flags->savePointMap.handle);
    g_gameState.progressEnabled = 1;
    g_gameState.savedLocationSet = 0;
    flags->savePoint.scale = (s16)(s32)g_gameState.overviewHeading;
    flags->savePoint.mapId = g_gameState.mapId;
    flags->savePoint.areaId = g_gameState.areaId;
    flags->savePointObject.objectId = g_gameState.currentObjectId;
    flags->savePoint.x = (s16)(s32)g_lmapScene->pose.position.x;
    flags->savePoint.y = (s16)(s32)g_lmapScene->pose.position.y;
    flags->savePoint.z = (s16)(s32)g_lmapScene->pose.position.z;
    flags->savePoint.heading = (s16)(s32)g_gameState.pointHeading;
    return 1;
}
}
