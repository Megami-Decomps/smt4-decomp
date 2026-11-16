#include "shard/GameGlobals.h"
#include "gfx/CameraVector3.h"

extern "C" {
void FUN_00294d6c(void);
void statusCameraSetEye(f32 x, f32 y, f32 z);
void statusCameraApply(void);

/* Restores the status camera, from the size preset or the default eye, in the two screen modes that show it. */
void FUN_002996d8(s32 usePreset)
{
    u32 mode = g_gameGlobals.data->unk1E67;
    if (mode != 3 && mode != 9) {
        return;
    }
    if (usePreset == 0) {
        f32 depth = 4.5f;   /* default eye distance */
        f32 height = 6.3f;  /* default eye height */
        CameraPosition eye(mode == 9 ? 125.0f : 100.0f, height, depth);
        statusCameraSetEye(eye.x, eye.y, eye.z);
    } else {
        FUN_00294d6c();
    }
    statusCameraApply();
}
}
