#include "shard/GameGlobals.h"
#include "gfx/CameraVector3.h"

extern "C" {
void statusCameraSetEye(f32 x, f32 y, f32 z);

// Raises the status camera's eye according to the selected model's size category.
void FUN_00294d6c(void)
{
    f32 baseHeight = 6.3f; /* eye height before the size adjustment */
    CameraPosition eye(0.0f, baseHeight, 4.5f);
    s32 size = g_gameGlobals.data->statusCameraHeightOffset;
    if (size > 0) {
        switch (g_gameGlobals.data->statusCameraHeightMode) {
        case 0:
            eye.y += (f32)size * 0.08f;
            break;
        case 1:
            eye.y += (f32)size * 0.105f;
            break;
        case 2:
            eye.y += (f32)size * 0.01f;
            break;
        }
    }
    statusCameraSetEye(eye.x, eye.y, eye.z);
}
}
