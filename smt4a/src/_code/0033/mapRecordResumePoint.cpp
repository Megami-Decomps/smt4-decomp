#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapViewGlobals.h"
#include "game/GameStateA.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

// Record the resume point in the flag block: mode 1 with position, heading and view, 2 with the
// position only, 3 with the map alone.
void mapRecordResumePoint(void)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    u8 mode = g_gameState.resumeMode;
    flags->resumePoint.mode = mode;
    switch (mode) {
    case 1:
        flags->resumePoint.mapId = g_gameState.mapId;
        flags->resumePoint.areaId = g_gameState.areaId;
        flags->resumePointObject.objectId = g_gameState.currentObjectId;
        flags->resumePoint.position.x = g_lmapScene->pose.position.x;
        flags->resumePoint.position.y = g_lmapScene->pose.position.y;
        flags->resumePoint.position.z = g_lmapScene->pose.position.z;
        flags->resumePoint.heading = g_lmapScene->pose.targetHeading;
        flags->resumePoint.viewHeading = g_lmapView->heading;
        break;
    case 2:
        flags->resumePoint.mapId = g_gameState.mapId;
        flags->resumePoint.areaId = g_gameState.areaId;
        flags->resumePointObject.objectId = g_gameState.currentObjectId;
        flags->resumePoint.position.x = g_lmapScene->pose.position.x;
        flags->resumePoint.position.y = g_lmapScene->pose.position.y;
        flags->resumePoint.position.z = g_lmapScene->pose.position.z;
        break;
    case 3:
        flags->resumePoint.mapId = g_gameState.mapId;
        flags->resumePoint.areaId = g_gameState.areaId;
        flags->resumePointObject.objectId = -1;
        break;
    }
}

} /* extern "C" */
