/* NON_MATCHING: VFP clear order and register allocation differ. */
#include "shard/W5_W5Match8_CameraTransition.h"
/* Starts the position vector transition. */
extern "C" void FUN_004f1548(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode) {
    camera->positionProgress.x = 0.0f;
    camera->positionProgress.y = 0.0f;
    camera->positionProgress.z = 0.0f;
    camera->target.x = x;
    camera->target.y = y;
    camera->target.z = z;
    camera->positionDuration = duration;
    camera->positionFrame = 0;
    camera->positionMode = mode;
    camera->flags |= 4096;
}
