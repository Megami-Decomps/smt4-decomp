/* NON_MATCHING: register allocation: retail loads g_mapMain before testing unk284 into r2 and uses ip for the second vector copy. */
#include "map/mapDepart.h"
#include "map/LmapGlobals.h"
#include "game/GameState.h"

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
extern MapSnapshotSource *g_mapCamera;

// Unless a skip is pending, record the current map and scene position as both saved and target snapshots.
void mapSaveReturnSnapshot(void)
{
    MapMainView *map = g_mapMain;

    if (g_gameState.map.unk84) {
        g_gameState.map.unk84 = 0;
    } else {
        g_gameState.map.savedLocationSet = 1;
        g_gameState.savedMapId = map->mapId;
        g_gameState.savedAreaId = map->areaId;
        g_gameState.savedObjectId = g_gameState.currentObjectId;
        g_gameState.savedPosition = g_lmapScene->pose.position;
        g_gameState.savedHeading = g_lmapScene->pose.heading;
        g_gameState.savedHeadingCopy = g_mapCamera->value;
        g_gameState.targetMapId = map->mapId;
        g_gameState.targetAreaId = map->areaId;
        g_gameState.targetPosition = g_lmapScene->pose.position;
        g_gameState.targetHeading = g_lmapScene->pose.heading;
        g_gameState.targetHeadingCopy = g_mapCamera->value;
    }
}
}
