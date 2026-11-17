/* NON_MATCHING: global-address loads are hoisted differently and snapshot copies use different base registers. */
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/mapMain.h"
#include "map/LmapGlobals.h"

struct LmapTransitionView {
    u8 unk00[0x18];
    f32 value;
};

extern "C" {
extern MapMainA* g_mapMain;
extern LmapTransitionView* g_lmapView;

// Snapshot the current map and the requested destination for a transition.
void FUN_0036af24(void)
{
    MapMainA* map = g_mapMain;
    if (g_gameState.skipTransitionSnapshot != 0) {
        g_gameState.skipTransitionSnapshot = 0;
    } else {
        mapProbePositionDownward(&g_gameState.pointPosition);
        g_gameState.savedLocationSet = 1;
        g_gameState.savedMapId = map->transition.mapId;
        g_gameState.savedAreaId = map->transition.areaId;
        g_gameState.savedObjectId = g_gameState.currentObjectId;
        g_gameState.savedPosition = g_lmapScene->pose.position;
        g_gameState.savedHeading = g_lmapScene->pose.heading;
        g_gameState.savedHeadingCopy = g_lmapView->value;
        g_gameState.targetMapId = map->transition.mapId;
        g_gameState.targetAreaId = map->transition.areaId;
        g_gameState.targetPosition = g_gameState.pointPosition;
        g_gameState.targetHeading = g_gameState.overviewHeading;
        g_gameState.targetHeadingCopy = g_gameState.overviewHeading;
    }
}
}
