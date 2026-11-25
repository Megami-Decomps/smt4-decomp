/* NON_MATCHING: retail stores duration and frame together with STM and uses different
 * registers for the progress base and literal zero. */
#include "shard/W5_W5Match8_CameraTransition.h"

enum { CAMERA_SECONDARY_TRANSITION_ACTIVE = 0x800 };

/* Starts the secondary transition, preserving the current source. */
extern "C" void FUN_004f1888(W5Match8CameraTransition *camera, f32 value, u32 duration, u32 mode)
{
    CameraSecondaryTransition *channel = &camera->secondary;
    camera->distance = value;
    channel->progress = 0.0f;
    camera->savedSource = camera->source;
    channel->mode = mode;
    channel->duration = duration;
    channel->frame = 0;
    camera->flags |= CAMERA_SECONDARY_TRANSITION_ACTIVE;
}
