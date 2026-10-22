/* NON_MATCHING: vector copy allocates extra preserved registers. */
#include "shard/W5_W5Match8_CameraTransition.h"
extern "C" W5Match8Vec3 g_cameraAlternateProgressStart;
/* Starts the alternate vector transition. */
extern "C" void FUN_004f2a68(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode) {
    g_cameraAlternateProgressStart = camera->alternateProgress;
    camera->alternateTarget.x = x;
    camera->alternateTarget.y = y;
    camera->alternateTarget.z = z;
    camera->alternateDuration = duration;
    camera->alternateFrame = 0;
    camera->alternateMode = mode;
    camera->flags |= 32768;
}
