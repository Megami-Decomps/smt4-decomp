/* NON_MATCHING: preset store grouping, repeated map tests, and work-pointer reload timing differ. */
#include "map/MapCameraWork.h"

extern "C" {
extern MapCameraGlobals DAT_004474f0;
extern GameState g_gameState;
void FUN_002df5f8(void);

void FUN_002d28a4(s32 map, s32 area)
{
    DAT_004474f0.work->preset.enabled = 0;
    FUN_002df5f8();
    if (map == 10 && area == 8) {
        MapCameraWork *work = DAT_004474f0.work;
        work->tracks[0].controls.values[1] = 100.0f;
        work->tracks[1].controls.values[1] = 200.0f;
        work->tracks[2].controls.values[1] = 0.0f;
        work->tracks[3].controls.values[1] = 380.0f;
        work->tracks[4].controls.values[1] = 42.0f;
    }
    f32 height = 250.0f;
    f32 distance = 700.0f;
    f32 angle = 50.0f;
    switch (g_gameState.unk000) {
    case 25:
        if (g_gameState.unk004Value != 3)
            return;
        break;
    case 26:
        if (g_gameState.unk004Value != 1)
            return;
        break;
    case 27:
        if (g_gameState.unk004Value != 1)
            return;
        break;
    case 28:
        if (g_gameState.unk004Value != 1)
            return;
        height = 350.0f;
        distance = 550.0f;
        angle = 55.0f;
        break;
    default:
        return;
    }
    MapCameraWork *work = DAT_004474f0.work;
    work->preset.enabled = 1;
    for (s32 i = 0; i < 3; ++i) {
        work->tracks[0].controls.values[i] = height;
        work->tracks[1].controls.values[i] = 170.0f;
        work->tracks[2].controls.values[i] = 0.0f;
        work->tracks[3].controls.values[i] = distance;
        work->tracks[4].controls.values[i] = angle;
    }
}
}
