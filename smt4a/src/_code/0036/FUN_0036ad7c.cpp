/* NON_MATCHING: retail 56 vs built 56 rows; snapshot pointer registers and relocated global-base literals differ. */
#include "map/mapMain.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "map/mapDepart.h"

extern "C" {
extern MapMainA *g_mapMain;
extern GameStateA g_gameState;

void FUN_0036ad7c(void)
{
    MapMainA *map = g_mapMain;
    FlagWorkBanks *flags = gameFlagsGetBlock();
    if (g_gameState.mapFlags.snapshot.skipTransitionSnapshot != 0) {
        g_gameState.mapFlags.snapshot.skipTransitionSnapshot = 0;
    } else {
        mapProbePositionDownward(&g_gameState.point.position);
        g_gameState.transitionActive = 1;
        g_gameState.sourceMap = flags->savePoint.mapId;
        g_gameState.sourceArea = flags->savePoint.areaId;
        g_gameState.sourceObjectId = flags->savePointObject.objectId;
        g_gameState.sourcePosition.x = static_cast<f32>(flags->savePoint.x);
        g_gameState.sourcePosition.y = static_cast<f32>(flags->savePoint.y);
        g_gameState.sourcePosition.z = static_cast<f32>(flags->savePoint.z);
        g_gameState.sourceHeading = static_cast<f32>(flags->savePoint.heading);
        g_gameState.sourceHeadingCopy = static_cast<f32>(flags->savePoint.heading);
        g_gameState.destinationMap = map->transition.mapId;
        g_gameState.destinationArea = map->transition.areaId;
        g_gameState.destinationPosition = g_gameState.point.position;
        g_gameState.destinationHeading = g_gameState.point.scale;
        g_gameState.destinationHeadingCopy = g_gameState.point.scale;
    }
}
}
