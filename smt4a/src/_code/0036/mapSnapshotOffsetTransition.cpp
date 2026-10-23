#include "map/mapMain.h"
#include "map/mapDepart.h"
#include "map/lmapMain.h"

extern "C" {
extern MapMainA *g_mapMain;
extern LmapSceneA *g_lmapScene;
extern GameStateA g_gameState;
void mapProbePositionDownward(MapVector *);
f32 FUN_001bc124(f32 angle);
f32 FUN_001bbf0c(f32 angle);

// Save the departure point behind the player and the corresponding arrival point.
void mapSnapshotOffsetTransition(void)
{
    struct MapViewScalarView {
        u8 unk00[0x18];
        f32 value;
    };
    extern MapViewScalarView *g_lmapView;
    MapMainA *map = g_mapMain;
    mapProbePositionDownward(&g_gameState.point.position);
    g_gameState.transitionActive = 1;
    g_gameState.sourceMap = map->transition.mapId;
    g_gameState.sourceArea = map->transition.areaId;
    g_gameState.sourceObjectId = g_gameState.currentObjectId;
    g_gameState.sourcePosition = *reinterpret_cast<const MapVector *>(g_lmapScene->transform.position);
    g_gameState.sourcePosition.x += FUN_001bc124((g_gameState.point.scale + 180.0f) * 0.017453292f) * 120.0f;
    g_gameState.sourcePosition.z += FUN_001bbf0c((g_gameState.point.scale + 180.0f) * 0.017453292f) * 120.0f;
    g_gameState.sourceHeading = g_gameState.point.scale + 180.0f;
    g_gameState.sourceHeadingCopy = g_lmapView->value;
    g_gameState.destinationMap = map->transition.mapId;
    g_gameState.destinationArea = map->transition.areaId;
    g_gameState.destinationPosition = g_gameState.point.position;
    g_gameState.destinationHeading = g_gameState.point.scale;
    g_gameState.destinationHeadingCopy = g_gameState.point.scale;
}
}
