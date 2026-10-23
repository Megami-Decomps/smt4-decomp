/* NON_MATCHING: scalarized vector differences, fused interpolation and snapshot global-address grouping differ. */
#include "shard/W5_W5Match8_CameraTransition.h"

extern "C" {
f32 FUN_003d4dd4(u32, u32, u32);
extern CameraTransitionGlobals g_btlCamera;
extern W5Match8Vec3 g_cameraAlternateProgressStart;
extern W5Match8Vec3 g_cameraAlternateProgressPrevious;
extern W5Match8Vec3 g_cameraUnoffsetStartPosition;

void FUN_004f2548(W5Match8CameraTransition *camera)
{
    if (g_btlCamera.mode == 1) {
        camera->alternateProgress = g_cameraAlternateProgressPrevious;
        f32 progress = FUN_003d4dd4(camera->targetMode, camera->targetDuration, camera->targetFrame);
        camera->alternateProgress.z = (camera->alternateTarget.z -
            (camera->reference.position.z - camera->alternateProgress.z)) * progress;
        camera->alternateProgress.x = (camera->alternateTarget.x -
            (camera->reference.position.x - camera->alternateProgress.x)) * progress;
        camera->alternateProgress.y = (camera->alternateTarget.y -
            (camera->reference.position.y - camera->alternateProgress.y)) * progress;
        g_cameraAlternateProgressPrevious = camera->alternateProgress;
        camera->alternateProgress = g_cameraAlternateProgressStart;
        camera->targetProgress.x = g_cameraAlternateProgressPrevious.x + camera->targetStart.x;
        camera->targetProgress.y = g_cameraAlternateProgressPrevious.y + camera->targetStart.y;
        camera->targetProgress.z = g_cameraAlternateProgressPrevious.z + camera->targetStart.z;
    } else if (g_btlCamera.mode == 2) {
        W5Match8Vec3 delta;
        delta.x = camera->alternateTarget.x - g_cameraUnoffsetStartPosition.x;
        delta.y = camera->alternateTarget.y - g_cameraUnoffsetStartPosition.y;
        delta.z = camera->alternateTarget.z - g_cameraUnoffsetStartPosition.z;
        f32 progress = FUN_003d4dd4(camera->targetMode, camera->targetDuration, camera->targetFrame);
        camera->targetProgress.x = camera->targetStart.x + delta.x * progress;
        camera->targetProgress.y = camera->targetStart.y + delta.y * progress;
        camera->targetProgress.z = camera->targetStart.z + delta.z * progress;
    }
}
}
