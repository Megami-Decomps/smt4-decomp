#include "map/mapDepart.h"

struct MapMainView {
    u8 unk00[0x2c]; // 0x00
    u32 mapId;      // 0x2c
    u32 areaId;     // 0x30
};

extern "C" {
extern MapMainView *g_mapMain;
extern GameState g_gameState;
void FUN_00270f70(MapVector *position);

// Refresh the current position and initialize both saved and target map-state snapshots.
void mapInitializeSavedAndTargetState(void)
{
    MapMainView *map = g_mapMain;

    FUN_00270f70(&g_gameState.position);
    g_gameState.unk2F8Byte = 1;
    g_gameState.savedMapId = map->mapId;
    g_gameState.savedAreaId = map->areaId;
    g_gameState.savedObjectId = g_gameState.currentObjectId;
    g_gameState.savedPosition = g_gameState.position;
    g_gameState.unk314 = g_gameState.unkA0;
    g_gameState.unk318 = g_gameState.unkA0;
    g_gameState.targetMapId = map->mapId;
    g_gameState.targetAreaId = map->areaId;
    g_gameState.targetPosition = g_gameState.position;
    g_gameState.unk330 = g_gameState.unk90;
    g_gameState.unk334 = g_gameState.unk90;
}
}
