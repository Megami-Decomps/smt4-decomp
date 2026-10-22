/* NON_MATCHING: register allocation: retail loads g_mapMain before testing unk284 into r2 and uses ip for the second vector copy. */
#include "map/mapDepart.h"

struct LmapSceneView {
    u8 unk00[0x1c];       // 0x00
    MapVector position;   // 0x1c
    u8 unk28[0x24];       // 0x28
    f32 heading;          // 0x4c
};

struct MapMainView {
    u8 unk00[0x2c]; // 0x00
    u32 mapId;      // 0x2c
    u32 areaId;     // 0x30
};

struct MapSnapshotSource {
    u8 unk00[0x18]; // 0x00
    f32 value;      // 0x18
};

extern "C" {
extern MapMainView *g_mapMain;
extern GameState g_gameState;
extern MapSnapshotSource *DAT_004474f4;
extern LmapSceneView *g_lmapScene;

// Unless a skip is pending, record the current map and scene position as both saved and target snapshots.
void FUN_00275e4c(void)
{
    MapMainView *map = g_mapMain;

    if (g_gameState.unk284) {
        g_gameState.unk284 = 0;
    } else {
        g_gameState.unk2F8Byte = 1;
        g_gameState.savedMapId = map->mapId;
        g_gameState.savedAreaId = map->areaId;
        g_gameState.savedObjectId = g_gameState.currentObjectId;
        g_gameState.savedPosition = g_lmapScene->position;
        g_gameState.unk314 = g_lmapScene->heading;
        g_gameState.unk318 = DAT_004474f4->value;
        g_gameState.targetMapId = map->mapId;
        g_gameState.targetAreaId = map->areaId;
        g_gameState.targetPosition = g_lmapScene->position;
        g_gameState.unk330Scalar = g_lmapScene->heading;
        g_gameState.unk334Scalar = DAT_004474f4->value;
    }
}
}
