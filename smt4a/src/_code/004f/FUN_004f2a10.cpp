#include "shard/W5_W5Match8_CameraTransition.h"

static __inline void cameraVectorClear(W5Match8Vec3 *vector)
{
    vector->x = vector->y = vector->z = 0.0f;
}

/* Starts the rotation vector transition and resets its progress. */
extern "C" void FUN_004f2a10(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode)
{
    camera->rotationDuration = duration;
    camera->rotationFrame = 0;
    camera->rotationMode = mode;
    W5Match8Vec3 rotation;
    rotation.y = y;
    rotation.z = z;
    rotation.x = x;
    camera->rotation = rotation;
    camera->flags |= 0x800000;
    cameraVectorClear(&camera->rotationProgress);
}
