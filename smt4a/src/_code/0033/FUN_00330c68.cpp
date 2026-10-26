/* NON_MATCHING: ARMCC schedules save-point stores and global loads in different registers. */
#include "shard/W5_W5Match7_FlagBanks.h"
#include "map/lmapMain.h"
#include "code/Code002b.h"

extern "C" {
extern LmapSceneA* g_lmapScene;
extern GameStateA g_gameState;
void mapPlaceSet(u32 kind, u32 enabled, u32 flags);
void FUN_00376fb8(u32 handle);

// Register the current map's save point and capture its position and heading.
u32 FUN_00330c68(void)
{
    FlagWorkBanks* flags = gameFlagsGetBlock();
    FUN_00376fb8(flags->savePointMap.handle + 100);
    mapPlaceSet(24, 1, 0);
    FUN_002b945c(flags->savePointMap.handle);
    g_gameState.progressEnabled = 1;
    g_gameState.transitionActive = 0;
    flags->savePoint.scale = (s16)(s32)g_gameState.point.scale;
    flags->savePoint.mapId = g_gameState.mode;
    flags->savePoint.areaId = g_gameState.submode;
    flags->savePointObject.objectId = g_gameState.currentObjectId;
    LmapSceneA* scene = g_lmapScene;
    flags->savePoint.x = (s16)(s32)scene->transform.position[0];
    flags->savePoint.y = (s16)(s32)scene->transform.position[1];
    flags->savePoint.z = (s16)(s32)scene->transform.position[2];
    flags->savePoint.heading = (s16)(s32)g_gameState.point.heading;
    return 1;
}
}
