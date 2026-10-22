/* NON_MATCHING: initial global/prologue scheduling and the second position-copy base register differ. */
#include "map/mapDepart.h"
#include "map/mapMain.h"
#include "map/lmapMain.h"
#include <string.h>

struct LmapSnapshotView {
    u8 unk00[0x18];
    f32 value;
};

extern "C" {
extern GameStateA g_gameState;
extern MapMainA *g_mapMain;
extern LmapSceneA *g_lmapScene;
extern LmapSnapshotView *g_lmapView;

void FUN_0035846c()
{
    if (g_gameState.mapFlags.snapshot.skipTransitionSnapshot == 0) {
        g_gameState.transitionActive = 1;
        g_gameState.sourceMap = g_mapMain->transition.mapId;
        g_gameState.sourceArea = g_mapMain->transition.areaId;
        g_gameState.sourceObjectId = g_gameState.currentObjectId;
        memcpy(&g_gameState.sourcePosition, g_lmapScene->transform.position, sizeof(MapVector));
        g_gameState.sourceHeading = g_lmapScene->transform.headingDegrees;
        g_gameState.sourceHeadingCopy = g_lmapView->value;
        g_gameState.destinationMap = g_mapMain->transition.mapId;
        g_gameState.destinationArea = g_mapMain->transition.areaId;
        memcpy(&g_gameState.destinationPosition, g_lmapScene->transform.position, sizeof(MapVector));
        g_gameState.destinationHeading = g_lmapScene->transform.headingDegrees;
        g_gameState.destinationHeadingCopy = g_lmapView->value;
        return;
    }
    g_gameState.mapFlags.snapshot.skipTransitionSnapshot = 0;
}
}
