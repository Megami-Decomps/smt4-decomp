/* NON_MATCHING: preset store grouping, repeated map tests, and work-pointer reload timing differ. */
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

extern "C" {
void FUN_002df5f8(void);

void FUN_002d28a4(s32 map, s32 area)
{
    DAT_004474f0.view->presetEnabled = 0;
    FUN_002df5f8();
    if (map == 10 && area == 8) {
        LmapView *work = DAT_004474f0.view;
        work->targetHeight[3] = 100.0f;
        work->eyeHeight[3] = 200.0f;
        work->lateralDistance[3] = 0.0f;
        work->rearDistance[3] = 380.0f;
        work->fieldOfView[3] = 42.0f;
    }
    f32 height = 250.0f;
    f32 distance = 700.0f;
    f32 angle = 50.0f;
    switch (g_gameState.mapId) {
    case 25:
        if (g_gameState.areaId != 3)
            return;
        break;
    case 26:
        if (g_gameState.areaId != 1)
            return;
        break;
    case 27:
        if (g_gameState.areaId != 1)
            return;
        break;
    case 28:
        if (g_gameState.areaId != 1)
            return;
        height = 350.0f;
        distance = 550.0f;
        angle = 55.0f;
        break;
    default:
        return;
    }
    LmapView *work = DAT_004474f0.view;
    work->presetEnabled = 1;
    for (s32 i = 0; i < 3; ++i) {
        work->targetHeight[i + 2] = height;
        work->eyeHeight[i + 2] = 170.0f;
        work->lateralDistance[i + 2] = 0.0f;
        work->rearDistance[i + 2] = distance;
        work->fieldOfView[i + 2] = angle;
    }
}
}
