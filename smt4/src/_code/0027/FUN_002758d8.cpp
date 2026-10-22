/* NON_MATCHING: map snapshot globals and location stores use different scratch registers. */
/* Saves the active map's location and, for a local map, its scene and camera state. */
#include "map/lmapMain.h"
#include "shard/SaveWork.h"

extern "C" {
extern u8 g_gameState;
extern LmapScene *g_lmapScene;
extern void *DAT_004474f4;
SaveWork *gameGetMapBlock(void);

void FUN_002758d8(void)
{
    /* The saved map id lies beyond the shared SaveWork prefix. */
    struct MapSnapshot {
        u8 type;
        u8 mode;
        u8 area;
        u8 unk03;
        f32 position[3];
        f32 sceneHeading;
        u32 cameraValue;
        u8 unk018[0xDC0];
        s32 mapId;
    };
    struct MapContext {
        u32 mode;
        u32 area;
        s32 mapId;
        u8 unk00C[8];
        u32 type;
    };
    struct CameraSnapshotSource {
        u8 unk00[0x18];
        u32 value;
    };
    MapSnapshot *save = (MapSnapshot *)gameGetMapBlock();
    MapContext *context = (MapContext *)&g_gameState;
    u8 type = (u8)context->type;
    save->type = type;
    switch (type) {
    case 1:
        save->mode = (u8)context->mode;
        save->area = (u8)context->area;
        save->mapId = context->mapId;
        save->position[0] = g_lmapScene->transform.position[0];
        save->position[1] = g_lmapScene->transform.position[1];
        save->position[2] = g_lmapScene->transform.position[2];
        save->sceneHeading = g_lmapScene->transform.headingCopy;
        save->cameraValue = ((CameraSnapshotSource *)DAT_004474f4)->value;
        return;
    case 2:
        save->mode = (u8)context->mode;
        save->area = (u8)context->area;
        save->mapId = context->mapId;
        save->position[0] = g_lmapScene->transform.position[0];
        save->position[1] = g_lmapScene->transform.position[1];
        save->position[2] = g_lmapScene->transform.position[2];
        return;
    case 3:
        save->mode = (u8)context->mode;
        save->area = (u8)context->area;
        save->mapId = -1;
        return;
    }
}
}
