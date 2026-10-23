/* NON_MATCHING: snapshot copies use different global grouping and registers; retail repeats mode-one tail stores. */
#include "shard/W5_W5Match8_CameraTransition.h"

extern "C" {
extern CameraTransitionGlobals g_btlCamera;
extern W5Match8Vec3 g_cameraAlternateProgressStart;
extern W5Match8Vec3 g_cameraAlternateProgressPrevious;
extern W5Match8Vec3 g_cameraUnoffsetStartPosition;

// Start the camera's alternate position transition, preserving progress in alternate modes.
void FUN_004f1b2c(W5Match8CameraTransition *camera, u32 duration, u32 mode,
                  f32 x, f32 y, f32 z)
{
    // These fields lie beyond the shared camera's documented 0x884-byte prefix.
    struct PositionTail {
        W5Match8CameraTransition base;
        W5Match8Vec3 progress;
        u8 unk890[0x18];
        u32 duration;
        u32 frame;
        u32 mode;
    };
    PositionTail *transition = reinterpret_cast<PositionTail *>(camera);
    if (g_btlCamera.mode == 2) {
        g_cameraUnoffsetStartPosition = reinterpret_cast<CameraPositionTransitionView *>(camera)->position;
        g_cameraAlternateProgressStart = transition->progress;
        camera->alternateTarget.x = x;
        camera->alternateTarget.y = y;
        camera->alternateTarget.z = z;
        camera->targetStart = camera->positionProgress;
    } else if (g_btlCamera.mode == 1) {
        g_cameraAlternateProgressStart = transition->progress;
        camera->alternateTarget.x = x;
        camera->alternateTarget.y = y;
        camera->alternateTarget.z = z;
        g_cameraAlternateProgressPrevious = g_cameraAlternateProgressStart;
        transition->progress.z = 0.0f;
        transition->progress.y = 0.0f;
        transition->progress.x = 0.0f;
        camera->targetStart = camera->positionProgress;
    } else {
        camera->alternateTarget.x = x;
        camera->alternateTarget.y = y;
        camera->alternateTarget.z = z;
        transition->progress.z = 0.0f;
        transition->progress.y = 0.0f;
        transition->progress.x = 0.0f;
    }
    transition->mode = mode;
    transition->duration = duration;
    transition->frame = 0;
    camera->flags |= 0x2000;
}
}
