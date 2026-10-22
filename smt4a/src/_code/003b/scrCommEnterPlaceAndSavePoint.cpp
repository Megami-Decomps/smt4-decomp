#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

void FUN_00376fb8(s32 arg);
void mapPlaceSet(s32 place, s32 arg1, s32 arg2);
void FUN_002b945c(s32 id);

// Script command: switch to place 0x18 with table 0x4C entry 1 and record the current position as the
// flag block's save point.
u32 scrCommEnterPlaceAndSavePoint(void)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    FUN_00376fb8(0x65);
    mapPlaceSet(0x18, 1, 0);
    FUN_002b945c(1);
    g_gameState.progressEnabled = 1;
    g_gameState.transitionActive = 0;
    flags->savePoint.scale = (s16)g_gameState.point.scale;
    flags->savePoint.mapId = g_gameState.mode;
    flags->savePoint.areaId = g_gameState.submode;
    flags->savePointObject.objectId = g_gameState.currentObjectId;
    flags->savePoint.x = (s16)g_lmapScene->position.x;
    flags->savePoint.y = (s16)g_lmapScene->position.y;
    flags->savePoint.z = (s16)g_lmapScene->position.z;
    flags->savePoint.heading = (s16)g_gameState.point.heading;
    return 1;
}

} /* extern "C" */
