/* NON_MATCHING: source load and zero-store scheduling differs. */
#include "shard/W5_W5Match8_CameraTransition.h"
/* Starts a distance transition and preserves its source. */
extern "C" void FUN_004f3f70(W5Match8CameraTransition *camera, f32 distance, u32 duration, u32 mode) {
    camera->distance = distance;
    camera->distanceDuration = duration;
    camera->distanceMode = mode;
    camera->distanceProgress = 0.0f;
    camera->distanceFrame = 0;
    camera->savedSource = camera->source;
    camera->flags |= 0x800;
}
