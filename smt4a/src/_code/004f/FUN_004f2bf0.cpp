/* NON_MATCHING: compiler schedules progress-vector clears before the target stores. */
#include "shard/W5_W5Match8_CameraTransition.h"
/* Starts the target vector transition. */
extern "C" void FUN_004f2bf0(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode) {
    camera->target.x = x;
    camera->target.y = y;
    camera->target.z = z;
    camera->targetProgress.z = 0.0f;
    camera->targetProgress.y = 0.0f;
    camera->targetProgress.x = 0.0f;
    camera->targetDuration = duration;
    camera->positionFrame = 0;
    camera->targetMode = mode;
    camera->flags |= 4096;
}
