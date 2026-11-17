#include "map/mapMain.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "map/LmapGlobals.h"

extern "C" {
extern MapMainA *g_mapMain;
f32 libm_sinf(f32 angle);
f32 libm_cosf(f32 angle);

// Save the departure point behind the player and the corresponding arrival point.
void mapSnapshotOffsetTransition(void)
{
    struct MapViewScalarView {
        u8 unk00[0x18];
        f32 value;
    };
    extern MapViewScalarView *g_lmapView;
    MapMainA *map = g_mapMain;
    mapProbePositionDownward(&g_gameState.pointPosition);
    g_gameState.savedLocationSet = 1;
    g_gameState.savedMapId = map->transition.mapId;
    g_gameState.savedAreaId = map->transition.areaId;
    g_gameState.savedObjectId = g_gameState.currentObjectId;
    g_gameState.savedPosition = g_lmapScene->pose.position;
    g_gameState.savedPosition.x += libm_sinf((g_gameState.overviewHeading + 180.0f) * 0.017453292f) * 120.0f;
    g_gameState.savedPosition.z += libm_cosf((g_gameState.overviewHeading + 180.0f) * 0.017453292f) * 120.0f;
    g_gameState.savedHeading = g_gameState.overviewHeading + 180.0f;
    g_gameState.savedHeadingCopy = g_lmapView->value;
    g_gameState.targetMapId = map->transition.mapId;
    g_gameState.targetAreaId = map->transition.areaId;
    g_gameState.targetPosition = g_gameState.pointPosition;
    g_gameState.targetHeading = g_gameState.overviewHeading;
    g_gameState.targetHeadingCopy = g_gameState.overviewHeading;
}
}
