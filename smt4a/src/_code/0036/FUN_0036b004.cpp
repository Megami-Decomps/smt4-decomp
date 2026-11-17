/* NON_MATCHING: retail 47 vs built 46 rows; snapshot field-store scheduling and saved-pointer allocation differ. */
#include "map/mapMain.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "map/lmapMain.h"

extern "C" {
extern MapMainA *g_mapMain;
extern LmapSceneA *g_lmapScene;

void FUN_0036b004(void)
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
    g_gameState.sourcePosition.x = g_lmapScene->transform.position[0];
    g_gameState.sourcePosition.y = g_lmapScene->transform.position[1];
    g_gameState.sourcePosition.z = g_lmapScene->transform.position[2];
    g_gameState.sourceHeading = g_gameState.overviewHeading + 180.0f;
    g_gameState.sourceHeadingCopy = g_lmapView->value;
    g_gameState.destinationMap = map->transition.mapId;
    g_gameState.destinationArea = map->transition.areaId;
    g_gameState.destinationPosition = g_gameState.pointPosition;
    g_gameState.destinationHeading = g_gameState.overviewHeading;
    g_gameState.destinationHeadingCopy = g_gameState.overviewHeading;
}
}
