/* NON_MATCHING: instructions match, but the global-pointer and float literal pools differ in order. */
#include "shard/GameGlobals.h"
#include "status/StatusCamera.h"

extern "C" {
void statusCameraSetEye(f32 x, f32 y, f32 z);

// Position the status camera's eye using the selected height scaling mode.
void FUN_00294d6c(void)
{
    Vec3 eye;
    eye.x = 0.0f;
    eye.y = 6.3f;
    eye.z = 4.5f;
    s32 height = g_gameGlobals.data->statusCameraHeightOffset;
    if (height > 0) {
        switch (g_gameGlobals.data->statusCameraHeightMode) {
        case 0:
            eye.y += static_cast<f32>(height) * 0.08f;
            break;
        case 1:
            eye.y += static_cast<f32>(height) * 0.105f;
            break;
        case 2:
            eye.y += static_cast<f32>(height) * 0.01f;
            break;
        }
    }
    statusCameraSetEye(eye.x, eye.y, eye.z);
}
}
