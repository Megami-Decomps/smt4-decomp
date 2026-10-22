#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W5_W5Match7_FlagBanks.h"

struct LmapView33a988 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 value;
};

extern "C" {

extern LmapView33a988 *g_lmapView;

// Record the resume point in the flag block: mode 1 with position, heading and view, 2 with the
// position only, 3 with the map alone.
void mapRecordResumePoint(void)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    u8 mode = g_gameState.resume.mode;
    flags->resumePoint.mode = mode;
    switch (mode) {
    case 1:
        flags->resumePoint.mapId = g_gameState.mode;
        flags->resumePoint.areaId = g_gameState.submode;
        flags->resumePointObject.objectId = g_gameState.currentObjectId;
        flags->resumePoint.position.x = g_lmapScene->position.x;
        flags->resumePoint.position.y = g_lmapScene->position.y;
        flags->resumePoint.position.z = g_lmapScene->position.z;
        flags->resumePoint.heading = g_lmapScene->targetHeading;
        flags->resumePoint.viewValue = g_lmapView->value;
        break;
    case 2:
        flags->resumePoint.mapId = g_gameState.mode;
        flags->resumePoint.areaId = g_gameState.submode;
        flags->resumePointObject.objectId = g_gameState.currentObjectId;
        flags->resumePoint.position.x = g_lmapScene->position.x;
        flags->resumePoint.position.y = g_lmapScene->position.y;
        flags->resumePoint.position.z = g_lmapScene->position.z;
        break;
    case 3:
        flags->resumePoint.mapId = g_gameState.mode;
        flags->resumePoint.areaId = g_gameState.submode;
        flags->resumePointObject.objectId = -1;
        break;
    }
}

} /* extern "C" */
