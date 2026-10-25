/* NON_MATCHING: native CameraPosition restores all coordinate lifetimes and VFP arithmetic; only initial X/Y constant-load and pool order differ. */
#include "shard/Shard0033.h"
#include "gfx/CameraVector3.h"
extern "C" {
extern ObjBRef g_gameGlobals;
void statusCameraSetEye(f32, f32, f32);

// Raises the status camera according to the selected model's size category.
void FUN_00240170(void)
{
    CameraPosition eye(0.0f, 6.3f, 4.5f);
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
