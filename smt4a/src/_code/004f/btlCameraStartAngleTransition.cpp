#include "shard/W5_W5Match8_CameraTransition.h"
/* Starts the angle transition. */
extern "C" void btlCameraStartAngleTransition(W5Match8CameraTransition *camera, f32 value, u32 duration, u32 mode) {
    camera->angle = value;
    camera->angleProgress = 0.0f;
    camera->angleDuration = duration;
    camera->angleFrame = 0;
    camera->angleMode = mode;
    camera->flags |= 1024;
}
