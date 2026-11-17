#include "map/mapMain.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "map/lmapMain.h"

extern "C" {
extern MapMainA *g_mapMain;
extern LmapSceneA *g_lmapScene;
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
    g_gameState.transitionActive = 1;
    g_gameState.sourceMap = map->transition.mapId;
    g_gameState.sourceArea = map->transition.areaId;
    g_gameState.sourceObjectId = g_gameState.currentObjectId;
    g_gameState.sourcePosition = *reinterpret_cast<const MapVector *>(g_lmapScene->transform.position);
    g_gameState.sourcePosition.x += libm_sinf((g_gameState.overviewHeading + 180.0f) * 0.017453292f) * 120.0f;
    g_gameState.sourcePosition.z += libm_cosf((g_gameState.overviewHeading + 180.0f) * 0.017453292f) * 120.0f;
    g_gameState.sourceHeading = g_gameState.overviewHeading + 180.0f;
    g_gameState.sourceHeadingCopy = g_lmapView->value;
    g_gameState.destinationMap = map->transition.mapId;
    g_gameState.destinationArea = map->transition.areaId;
    g_gameState.destinationPosition = g_gameState.pointPosition;
    g_gameState.destinationHeading = g_gameState.overviewHeading;
    g_gameState.destinationHeadingCopy = g_gameState.overviewHeading;
}
}
