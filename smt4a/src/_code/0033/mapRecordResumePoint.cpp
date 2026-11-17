#include "shard/W5_W5Match7_SceneState.h"
#include "map/LmapViewGlobals.h"
#include "game/GameStateA.h"
#include "gamedata/MapSaveBlockA.h"

extern "C" {

// Record the resume point in the flag block: mode 1 with position, heading and view, 2 with the
// position only, 3 with the map alone.
void mapRecordResumePoint(void)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    u8 mode = g_gameState.resumeMode;
    flags->resumeMode = mode;
    switch (mode) {
    case 1:
        flags->resumeMapId = g_gameState.mapId;
        flags->resumeAreaId = g_gameState.areaId;
        flags->resumeObjectId = g_gameState.currentObjectId;
        flags->resumePosition.x = g_lmapScene->pose.position.x;
        flags->resumePosition.y = g_lmapScene->pose.position.y;
        flags->resumePosition.z = g_lmapScene->pose.position.z;
        flags->resumeHeading = g_lmapScene->pose.targetHeading;
        flags->resumeViewHeading = g_lmapView->heading;
        break;
    case 2:
        flags->resumeMapId = g_gameState.mapId;
        flags->resumeAreaId = g_gameState.areaId;
        flags->resumeObjectId = g_gameState.currentObjectId;
        flags->resumePosition.x = g_lmapScene->pose.position.x;
        flags->resumePosition.y = g_lmapScene->pose.position.y;
        flags->resumePosition.z = g_lmapScene->pose.position.z;
        break;
    case 3:
        flags->resumeMapId = g_gameState.mapId;
        flags->resumeAreaId = g_gameState.areaId;
        flags->resumeObjectId = -1;
        break;
    }
}

} /* extern "C" */
