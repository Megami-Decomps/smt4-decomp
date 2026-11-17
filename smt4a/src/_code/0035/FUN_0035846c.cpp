/* NON_MATCHING: only the first block differs: retail loads g_gameState's address twice (once for the
 * skip-flag test, once for the clear and the body), armcc loads it once. */
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/mapMain.h"
#include "map/lmapMain.h"
#include <string.h>

struct LmapSnapshotView {
    u8 unk00[0x18];
    f32 value;
};

extern "C" {
extern MapMainA *g_mapMain;
extern LmapSceneA *g_lmapScene;
extern LmapSnapshotView *g_lmapView;

/* Records the map transition's source and destination (map, area, position, heading) from the
 * current map, unless the snapshot was flagged to be skipped once. */
void FUN_0035846c()
{
    MapMainA *mapMain = g_mapMain;
    if (g_gameState.skipTransitionSnapshot != 0) {
        g_gameState.skipTransitionSnapshot = 0;
        return;
    }
    g_gameState.transitionActive = 1;
    g_gameState.sourceMap = mapMain->transition.mapId;
    g_gameState.sourceArea = mapMain->transition.areaId;
    g_gameState.sourceObjectId = g_gameState.currentObjectId;
    memcpy(&g_gameState.sourcePosition, g_lmapScene->transform.position, sizeof(MapVector));
    g_gameState.sourceHeading = g_lmapScene->transform.headingDegrees;
    g_gameState.sourceHeadingCopy = g_lmapView->value;
    g_gameState.destinationMap = mapMain->transition.mapId;
    g_gameState.destinationArea = mapMain->transition.areaId;
    memcpy(&g_gameState.destinationPosition, g_lmapScene->transform.position, sizeof(MapVector));
    g_gameState.destinationHeading = g_lmapScene->transform.headingDegrees;
    g_gameState.destinationHeadingCopy = g_lmapView->value;
}
}
