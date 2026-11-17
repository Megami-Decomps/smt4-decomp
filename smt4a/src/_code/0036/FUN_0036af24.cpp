/* NON_MATCHING: global-address loads are hoisted differently and snapshot copies use different base registers. */
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/mapMain.h"
#include "map/lmapMain.h"

struct LmapTransitionView {
    u8 unk00[0x18];
    f32 value;
};

extern "C" {
extern MapMainA* g_mapMain;
extern LmapSceneA* g_lmapScene;
extern LmapTransitionView* g_lmapView;

// Snapshot the current map and the requested destination for a transition.
void FUN_0036af24(void)
{
    MapMainA* map = g_mapMain;
    if (g_gameState.skipTransitionSnapshot != 0) {
        g_gameState.skipTransitionSnapshot = 0;
    } else {
        mapProbePositionDownward(&g_gameState.pointPosition);
        g_gameState.transitionActive = 1;
        g_gameState.sourceMap = map->transition.mapId;
        g_gameState.sourceArea = map->transition.areaId;
        g_gameState.sourceObjectId = g_gameState.currentObjectId;
        g_gameState.sourcePosition = *reinterpret_cast<const MapVector*>(g_lmapScene->transform.position);
        g_gameState.sourceHeading = g_lmapScene->transform.headingDegrees;
        g_gameState.sourceHeadingCopy = g_lmapView->value;
        g_gameState.destinationMap = map->transition.mapId;
        g_gameState.destinationArea = map->transition.areaId;
        g_gameState.destinationPosition = g_gameState.pointPosition;
        g_gameState.destinationHeading = g_gameState.overviewHeading;
        g_gameState.destinationHeadingCopy = g_gameState.overviewHeading;
    }
}
}
