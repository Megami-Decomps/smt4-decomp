#include "shard/W5_W5Match8_CameraTransition.h"

/* Starts a distance transition, preserving the current source. */
extern "C" void FUN_004f3f70(W5Match8CameraTransition *camera, f32 distance, u32 duration, u32 mode)
{
    const f32 start = 0.0f; /* elapsed time at the start */
    camera->distance = distance;
    camera->distanceDuration = duration;
    camera->distanceMode = mode;
    camera->distanceProgress = start;
    camera->savedSource = camera->source;
    camera->distanceFrame = 0;
    camera->flags |= 0x800;
}
