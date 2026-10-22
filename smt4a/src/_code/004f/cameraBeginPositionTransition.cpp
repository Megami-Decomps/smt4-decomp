/* NON_MATCHING: vector copies and camera-offset arithmetic lower to different VFP load/store and scheduling sequences. */
#include "shard/W5_W5Match8_CameraTransition.h"

extern "C" CameraTransitionGlobals g_btlCamera;
extern "C" W5Match8Vec3 g_cameraAlternateProgressStart;
extern "C" W5Match8Vec3 g_cameraAlternateProgressPrevious;
extern "C" W5Match8Vec3 g_cameraUnoffsetStartPosition;

/* Begin a position transition, retaining the mode-dependent camera offsets. */
extern "C" void cameraBeginPositionTransition(W5Match8CameraTransition *camera,
                            f32 x, f32 y, f32 z, u32 duration, u32)
{
    CameraPositionTransitionView *state = reinterpret_cast<CameraPositionTransitionView *>(camera);
    if (g_btlCamera.mode == 2) {
        g_cameraUnoffsetStartPosition.x = state->position.x;
        g_cameraUnoffsetStartPosition.y = state->position.y;
        g_cameraUnoffsetStartPosition.z = state->position.z;
        g_cameraUnoffsetStartPosition.x -= state->offset.x;
        g_cameraUnoffsetStartPosition.y -= state->offset.y;
        g_cameraUnoffsetStartPosition.z -= state->offset.z;
        state->target.x = x;
        state->target.y = y;
        state->target.z = z;
        g_cameraAlternateProgressStart = state->alternateProgress;
        state->targetStart = state->primaryProgress;
    } else if (g_btlCamera.mode == 1) {
        state->alternateProgress.x = state->alternateProgress.y = state->alternateProgress.z = 0.0f;
        g_cameraAlternateProgressStart = state->alternateProgress;
        g_cameraUnoffsetStartPosition.x -= state->offset.x;
        g_cameraUnoffsetStartPosition.y -= state->offset.y;
        g_cameraUnoffsetStartPosition.z -= state->offset.z;
        state->target.x = x;
        state->target.y = y;
        state->target.z = z;
        g_cameraAlternateProgressPrevious = g_cameraAlternateProgressStart;
        state->targetStart = state->primaryProgress;
    }
    state->duration = duration;
    state->frame = 0;
    state->mode = 1;
    state->flags |= 0x20000;
}
