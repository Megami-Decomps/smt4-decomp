/* Saves the active map's location and, for a local map, its scene and camera state. */
#include "map/LmapGlobals.h"
#include "game/GameState.h"
#include "shard/SaveWork.h"

extern "C" {
extern void *DAT_004474f4;

void FUN_002758d8(void)
{
    /* The saved map id lies beyond the shared SaveWork prefix. */
    struct MapSnapshot {
        s8 type;
        u8 mode;
        u8 area;
        u8 unk03;
        f32 position[3];
        f32 sceneHeading;
        u32 cameraValue;
        u8 unk018[0xDC0];
        s32 mapId;
    };
    struct CameraSnapshotSource {
        u8 unk00[0x18];
        u32 value;
    };
    MapSnapshot *save = (MapSnapshot *)gameGetMapBlock();
    GameState *context = &g_gameState;
    u8 type = (u8)context->resumeMode;
    save->type = type;
    switch (type) {
    case 1:
        save->mode = (u8)context->mapId;
        save->area = (u8)context->areaId;
        save->mapId = context->currentObjectId;
        save->position[0] = g_lmapScene->pose.position.x;
        save->position[1] = g_lmapScene->pose.position.y;
        save->position[2] = g_lmapScene->pose.position.z;
        save->sceneHeading = g_lmapScene->pose.targetHeading;
        save->cameraValue = ((CameraSnapshotSource *)DAT_004474f4)->value;
        return;
    case 2:
        save->mode = (u8)context->mapId;
        save->area = (u8)context->areaId;
        save->mapId = context->currentObjectId;
        save->position[0] = g_lmapScene->pose.position.x;
        save->position[1] = g_lmapScene->pose.position.y;
        save->position[2] = g_lmapScene->pose.position.z;
        return;
    case 3:
        save->mode = (u8)context->mapId;
        save->area = (u8)context->areaId;
        save->mapId = -1;
        return;
    }
}
}
