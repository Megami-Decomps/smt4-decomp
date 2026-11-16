/* NON_MATCHING: only the zero for positionFrame differs: built materialises it in r1 and stores it at once, retail uses r2 and computes the flags address first (smt4 FUN_003d73b4 has the same difference). */
#include "shard/W5_W5Match8_CameraTransition.h"

static __inline void cameraVectorClear(W5Match8Vec3 *vector)
{
    vector->x = vector->y = vector->z = 0.0f;
}

static __inline void cameraVectorSet(W5Match8Vec3 *vector, f32 x, f32 y, f32 z)
{
    vector->x = x;
    vector->y = y;
    vector->z = z;
}

/* Starts the target vector transition and resets its progress. */
extern "C" void FUN_004f2bf0(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode)
{
    cameraVectorSet(&camera->target, x, y, z);
    camera->targetDuration = duration;
    camera->targetMode = mode;
    cameraVectorClear(&camera->targetProgress);
    camera->positionFrame = 0;
    camera->flags |= 0x1000;
}
