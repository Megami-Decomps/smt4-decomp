/* NON_MATCHING: initial global-base loading and flag-test/prologue scheduling differ. */
#include "map/mapDepart.h"
#include "map/mapMain.h"

extern "C" {
extern GameStateA g_gameState;
extern MapMainA *g_mapMain;

void FUN_0036ae68()
{
    MapMainA *map = g_mapMain;
    if (g_gameState.mapFlags.snapshot.skipTransitionSnapshot != 0) {
        g_gameState.mapFlags.snapshot.skipTransitionSnapshot = 0;
    } else {
        mapProbePositionDownward(&g_gameState.point.position);
        g_gameState.transitionActive = 1;
        g_gameState.sourceMap = map->transition.mapId;
        g_gameState.sourceArea = map->transition.areaId;
        g_gameState.sourceObjectId = g_gameState.currentObjectId;
        g_gameState.sourcePosition = g_gameState.point.position;
        g_gameState.sourceHeading = g_gameState.point.scale;
        g_gameState.sourceHeadingCopy = g_gameState.point.scale;
        g_gameState.destinationMap = map->transition.mapId;
        g_gameState.destinationArea = map->transition.areaId;
        g_gameState.destinationHeading = g_gameState.point.scale;
        g_gameState.destinationHeadingCopy = g_gameState.point.scale;
        g_gameState.destinationPosition = g_gameState.point.position;
    }
}
}
