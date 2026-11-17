/* NON_MATCHING: initial global-base loading and flag-test/prologue scheduling differ. */
#include "map/mapDepart.h"
#include "map/mapMain.h"
#include "map/LmapGlobals.h"
#include <string.h>
#include "game/GameState.h"

struct MapTransitionAuxiliary {
    u8 unk00[0x18];
    f32 value; // 0x18
};

extern "C" {
extern MapMain *g_mapMain;
extern MapTransitionAuxiliary *DAT_004474f4;
void mapAdjustPositionToGround(MapVector *position);

void FUN_002eb674()
{
    MapMain *map = g_mapMain;
    if (g_gameState.map.unk84 != 0) {
        g_gameState.map.unk84 = 0;
    } else {
        mapAdjustPositionToGround(&g_gameState.position);
        g_gameState.map.savedLocationSet = 1;
        g_gameState.savedMapId = map->mapId;
        g_gameState.savedAreaId = map->areaId;
        g_gameState.savedObjectId = g_gameState.currentObjectId;
        memcpy(&g_gameState.savedPosition, &g_lmapScene->pose.position, sizeof(MapVector));
        g_gameState.savedHeading = g_lmapScene->pose.heading;
        g_gameState.savedHeadingCopy = DAT_004474f4->value;
        g_gameState.targetMapId = map->mapId;
        g_gameState.targetAreaId = map->areaId;
        g_gameState.targetPosition = g_gameState.position;
        g_gameState.targetHeading = g_gameState.overviewHeading;
        g_gameState.targetHeadingCopy = g_gameState.overviewHeading;
    }
}
}
