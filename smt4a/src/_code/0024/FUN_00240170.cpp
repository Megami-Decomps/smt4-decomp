/* NON_MATCHING: Camera coordinate constants are loaded later and use different VFP registers. */
#include "shard/Shard0033.h"
extern "C" {
extern ObjBRef g_gameGlobals;
void statusCameraSetEye(f32, f32, f32);

// Raises the status camera according to the selected model's size category.
void FUN_00240170(void)
{
    f32 eyeY = 6.3f;
    s32 size = g_gameGlobals.instance->statusCameraHeightOffset;
    if (size > 0) {
        switch (g_gameGlobals.instance->statusCameraHeightMode) {
        case 0:
            eyeY += (f32)size * 0.068f;
            break;
        case 1:
            eyeY += (f32)size * 0.091f;
            break;
        case 2:
            eyeY += (f32)size * 0.01f;
            break;
        }
    }
    statusCameraSetEye(0.0f, eyeY, 4.5f);
}
}
