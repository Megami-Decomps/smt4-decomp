/* NON_MATCHING: instruction order matches; retail allocates r4/r5 (pushed) for the progress base, saved source and zero where armcc here uses r3/ip/r2. */
#include "shard/W5_W5Match8_CameraTransition.h"

/* Restarts a transition: sets its duration and rewinds its frame. */
static __inline void cameraTransitionRestart(u32 *duration, u32 value)
{
    duration[0] = value;
    duration[1] = 0;
}

/* Starts the secondary transition, preserving the current source. */
extern "C" void FUN_004f1888(W5Match8CameraTransition *camera, f32 value, u32 duration, u32 mode)
{
    camera->distance = value;
    camera->secondaryProgress = 0.0f;
    camera->savedSource = camera->source;
    camera->secondaryMode = mode;
    cameraTransitionRestart(&camera->secondaryDuration, duration);
    camera->flags |= 0x800;
}
