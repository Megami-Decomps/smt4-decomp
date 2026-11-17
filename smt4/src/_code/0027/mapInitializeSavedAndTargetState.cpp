#include "map/mapDepart.h"
#include "game/GameState.h"

struct MapMainView {
    u8 unk00[0x2c]; // 0x00
    u32 mapId;      // 0x2c
    u32 areaId;     // 0x30
};

extern "C" {
extern MapMainView *g_mapMain;
void mapAdjustPositionToGround(MapVector *position);

// Refresh the current position and initialize both saved and target map-state snapshots.
void mapInitializeSavedAndTargetState(void)
{
    MapMainView *map = g_mapMain;

    mapAdjustPositionToGround(&g_gameState.position);
    g_gameState.map.savedLocationSet = 1;
    g_gameState.savedMapId = map->mapId;
    g_gameState.savedAreaId = map->areaId;
    g_gameState.savedObjectId = g_gameState.currentObjectId;
    g_gameState.savedPosition = g_gameState.position;
    g_gameState.savedHeading = g_gameState.heading;
    g_gameState.savedHeadingCopy = g_gameState.heading;
    g_gameState.targetMapId = map->mapId;
    g_gameState.targetAreaId = map->areaId;
    g_gameState.targetPosition = g_gameState.position;
    g_gameState.targetHeading = g_gameState.overviewHeading;
    g_gameState.targetHeadingCopy = g_gameState.overviewHeading;
}
}
