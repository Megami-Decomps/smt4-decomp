/* NON_MATCHING: compiler uses VFP stores rather than retail integer moves. */
#include "shard/W5_W5Match8_CameraTransition.h"
/* Starts the rotation vector transition. */
extern "C" void FUN_004f2a10(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode) {
    camera->rotation.x = x;
    camera->rotation.y = y;
    camera->rotation.z = z;
    camera->rotationProgress.z = 0.0f;
    camera->rotationProgress.y = 0.0f;
    camera->rotationProgress.x = 0.0f;
    camera->rotationDuration = duration;
    camera->rotationFrame = 0;
    camera->rotationMode = mode;
    camera->flags |= 8388608;
}
