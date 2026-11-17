#include "common.h"
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
f32 __hardfp_atan2f(f32 x, f32 z);

/* Script command: returns one of six game state values by selector 0-5 (3 is a heading in degrees, 4 is a constant 500). */
u32 FUN_00310f44(void)
{
    switch (scrGetArg(0)) {
    case 0:
        scrSetResult((s32)g_gameState.cameraTarget.x);
        break;
    case 1:
        scrSetResult((s32)g_gameState.cameraTarget.y);
        break;
    case 2:
        scrSetResult((s32)g_gameState.cameraTarget.z);
        break;
    case 3: {
        LmapView *track = g_mapCamera;

        f32 dx = track->lookTo.x - track->lookFrom.x;
        f32 dz = track->lookTo.z - track->lookFrom.z;

        scrSetResult((s32)(__hardfp_atan2f(dx, dz) * (180.0f / 3.14f)));
        break;
    }
    case 4:
        scrSetResult(500);
        break;
    case 5:
        scrSetResult((s32)g_gameState.cameraFov);
        break;
    }
    return 1;
}

} /* extern "C" */
