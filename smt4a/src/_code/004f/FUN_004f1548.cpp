#include "shard/W5_W5Match8_CameraTransition.h"

static inline void clearTransitionVector(W5Match8Vec3 *vector)
{
    vector->x = vector->y = vector->z = 0.0f;
}

static inline void startPositionTransitionClock(W5Match8CameraTransition *camera, u32 duration, u32 mode)
{
    camera->positionDuration = duration;
    camera->positionFrame = 0;
    camera->positionMode = mode;
}

/* Starts the position vector transition. */
extern "C" void FUN_004f1548(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode) {
    clearTransitionVector(&camera->positionProgress);
    camera->target.x = x;
    camera->target.y = y;
    camera->target.z = z;
    startPositionTransitionClock(camera, duration, mode);
    camera->flags |= 4096;
}
