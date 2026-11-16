#include "shard/W5_W5Match8_CameraTransition.h"

extern "C" W5Match8Vec3 g_cameraAlternateProgressStart;

static __inline void cameraVectorCopy(W5Match8Vec3 *destination, const W5Match8Vec3 *source)
{
    *destination = *source;
}

/* Restarts a transition: sets its duration and rewinds its frame. */
static __inline void cameraTransitionRestart(u32 *duration, u32 value)
{
    duration[0] = value;
    duration[1] = 0;
}

/* Starts the alternate vector transition, remembering where its progress started. */
extern "C" void FUN_004f2a68(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode)
{
    cameraVectorCopy(&g_cameraAlternateProgressStart, &camera->alternateProgress);
    camera->alternateTarget.x = x;
    camera->alternateTarget.y = y;
    camera->alternateTarget.z = z;
    cameraTransitionRestart(&camera->alternateDuration, duration);
    camera->alternateMode = mode;
    camera->flags |= 0x8000;
}
