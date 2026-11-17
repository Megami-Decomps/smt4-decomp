#include "shard/Shard0033.h"
#include "gfx/CameraVector3.h"
#include "game/GameGlobalsRef.h"
extern "C" {
void statusCameraSetEye(f32, f32, f32);

// Raises the status camera according to the selected model's size category.
void FUN_00240170(void)
{
    f32 baseHeight = 6.3f; /* eye height before the size adjustment */
    CameraPosition eye(0.0f, baseHeight, 4.5f);
    s32 size = g_gameGlobals.instance->statusCameraHeightOffset;
    if (size > 0) {
        switch (g_gameGlobals.instance->statusCameraHeightMode) {
        case 0:
            eye.y += (f32)size * 0.068f;
            break;
        case 1:
            eye.y += (f32)size * 0.091f;
            break;
        case 2:
            eye.y += (f32)size * 0.01f;
            break;
        }
    }
    statusCameraSetEye(eye.x, eye.y, eye.z);
}
}
