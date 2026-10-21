/* NON_MATCHING: saved-source load and transition stores use different scheduling. */
#include "shard/W5_W5Match8_CameraTransition.h"
/* Starts the secondary transition. */
extern "C" void FUN_004f1888(W5Match8CameraTransition *camera, f32 value, u32 duration, u32 mode) {
    camera->distance = value;
    camera->secondaryProgress = 0.0f;
    camera->secondaryDuration = duration;
    camera->secondaryFrame = 0;
    camera->secondaryMode = mode;
    camera->savedSource = camera->source;
    camera->flags |= 2048;
}
