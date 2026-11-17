#include "common.h"
#include "map/LmapViewGlobals.h"
#include "game/GameStateA.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
f32 __hardfp_atan2f(f32 x, f32 y);

/* Script command: sets the result to one of the game state's float values, or to the map view's direction in degrees. */
s32 FUN_003a7348(void)
{
    switch (scrGetArg(0)) {
    case 0:
        scrSetResult((s32)g_gameState.scriptCameraTarget.x);
        break;
    case 1:
        scrSetResult((s32)g_gameState.scriptCameraTarget.y);
        break;
    case 2:
        scrSetResult((s32)g_gameState.scriptCameraTarget.z);
        break;
    case 3:
    {
        f32 dx = g_lmapView->lookTo.x - g_lmapView->lookFrom.x;
        f32 dy = g_lmapView->lookTo.z - g_lmapView->lookFrom.z;
        scrSetResult((s32)(__hardfp_atan2f(dx, dy) * (180.0f / 3.14f)));
        break;
    }
    case 4:
        scrSetResult(500);
        break;
    case 5:
        scrSetResult((s32)g_gameState.scriptCameraFov);
        break;
    }
    return 1;
}
}
