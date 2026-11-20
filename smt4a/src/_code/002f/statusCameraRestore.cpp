#include "shard/Shard0033.h"
#include "gfx/CameraVector3.h"
#include "game/GameGlobalsRef.h"

extern "C" {
void FUN_00240170(void);
void statusCameraSetEye(f32 x, f32 y, f32 z);
void statusCameraApply(void);

/* Restores the status camera, from the size preset or the default eye, in the two screen modes that show it. */
void statusCameraRestore(s32 usePreset)
{
    u8 mode = g_gameGlobals.instance->unk2018;
    if (mode != 3 && mode != 10) {
        return;
    }
    if (usePreset == 0) {
        f32 depth = 4.5f;   /* default eye distance */
        f32 height = 6.3f;  /* default eye height */
        CameraPosition eye(mode == 10 ? 125.0f : 100.0f, height, depth);
        statusCameraSetEye(eye.x, eye.y, eye.z);
    } else {
        FUN_00240170();
    }
    statusCameraApply();
}
}
