/* NON_MATCHING: the zero-progress stores are scheduled before the target-vector store, and the duration/frame pair uses r3/ip instead of ip/r3. */
#include "shard/W5_W5Match8_CameraTransition.h"

extern "C" {
extern CameraTransitionGlobals g_btlCamera;
void cameraBeginPositionTransition(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode);
}

/* Begin the alternate target transition, delegating to the active camera mode. */
extern "C" void FUN_004f4348(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode)
{
    if (g_btlCamera.mode >= 1) {
        cameraBeginPositionTransition(g_btlCamera.camera, x, y, z, duration, mode);
        return;
    }
    camera->alternateTarget.x = x;
    camera->alternateTarget.y = y;
    camera->alternateTarget.z = z;
    camera->alternateProgress.z = 0.0f;
    camera->alternateProgress.y = 0.0f;
    camera->alternateProgress.x = 0.0f;
    camera->alternateMode = mode;
    camera->alternateDuration = duration;
    camera->alternateFrame = 0;
    camera->flags |= 0x2000;
}
