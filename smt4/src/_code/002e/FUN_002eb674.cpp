/* NON_MATCHING: initial global-base loading and flag-test/prologue scheduling differ. */
#include "map/mapDepart.h"
#include "map/mapMain.h"
#include "map/lmapMain.h"
#include <string.h>

struct MapTransitionAuxiliary {
    u8 unk00[0x18];
    f32 value; // 0x18
};

extern "C" {
extern GameState g_gameState;
extern MapMain *g_mapMain;
extern LmapScene *g_lmapScene;
extern MapTransitionAuxiliary *DAT_004474f4;
void FUN_00270f70(MapVector *position);

void FUN_002eb674()
{
    MapMain *map = g_mapMain;
    if (g_gameState.unk284 != 0) {
        g_gameState.unk284 = 0;
    } else {
        FUN_00270f70(&g_gameState.position);
        g_gameState.unk2F8 = 1;
        g_gameState.savedMapId = map->mapId;
        g_gameState.savedAreaId = map->areaId;
        g_gameState.savedObjectId = g_gameState.currentObjectId;
        memcpy(&g_gameState.savedPosition, g_lmapScene->transform.position, sizeof(MapVector));
        g_gameState.unk314 = g_lmapScene->transform.headingDegrees;
        g_gameState.unk318 = DAT_004474f4->value;
        g_gameState.targetMapId = map->mapId;
        g_gameState.targetAreaId = map->areaId;
        g_gameState.targetPosition = g_gameState.position;
        g_gameState.unk330Scalar = g_gameState.unk90Scalar;
        g_gameState.unk334Scalar = g_gameState.unk90Scalar;
    }
}
}
