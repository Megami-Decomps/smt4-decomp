/* Saves the active map's location and, for a local map, its scene and camera state. */
#include "gamedata/MapSaveBlock.h"
#include "map/LmapGlobals.h"
#include "game/GameState.h"

extern "C" {
extern void *g_mapCamera;

void FUN_002758d8(void)
{
    struct CameraSnapshotSource {
        u8 unk00[0x18];
        f32 heading;
    };
    MapSaveBlock *save = gameGetMapBlock();
    GameState *context = &g_gameState;
    s32 type = (u8)context->resumeMode;
    save->resumeMode = type;
    switch (type) {
    case 1:
        save->resumeMapId = (u8)context->mapId;
        save->resumeAreaId = (u8)context->areaId;
        save->resumeObjectId = context->currentObjectId;
        save->resumePosition.x = g_lmapScene->pose.position.x;
        save->resumePosition.y = g_lmapScene->pose.position.y;
        save->resumePosition.z = g_lmapScene->pose.position.z;
        save->resumeHeading = g_lmapScene->pose.targetHeading;
        save->resumeViewHeading = ((CameraSnapshotSource *)g_mapCamera)->heading;
        return;
    case 2:
        save->resumeMapId = (u8)context->mapId;
        save->resumeAreaId = (u8)context->areaId;
        save->resumeObjectId = context->currentObjectId;
        save->resumePosition.x = g_lmapScene->pose.position.x;
        save->resumePosition.y = g_lmapScene->pose.position.y;
        save->resumePosition.z = g_lmapScene->pose.position.z;
        return;
    case 3:
        save->resumeMapId = (u8)context->mapId;
        save->resumeAreaId = (u8)context->areaId;
        save->resumeObjectId = -1;
        return;
    }
}
}
