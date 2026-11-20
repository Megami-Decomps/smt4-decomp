/* NON_MATCHING: retail uses writeback when loading and then updating the camera flags. */
#include "battle/CameraScalarTransition.h"

enum {
    BTL_CAMERA_FOV_SHIFT = 0x400,
    BTL_CAMERA_FOV_PRESERVE_START = 0x200000
};

/* Starts a field-of-view transition, optionally starting from the previous shift. */
extern "C" void btlCameraStartFovShift(BtlCameraA *camera, f32 targetFov, u32 frames, s32 mode, s32 preserve)
{
    camera->lensPose.endFov = targetFov;
    camera->fovShiftDuration = frames;
    camera->fovShiftFrame = 0;
    camera->fovShiftMode = mode;
    u32 flags = camera->flags | BTL_CAMERA_FOV_SHIFT;
    if (preserve == 0) {
        camera->flags = flags;
    } else {
        camera->lensPose.startFov = camera->fovShift;
        camera->flags = flags | BTL_CAMERA_FOV_PRESERVE_START;
    }
    camera->fovShift = 0.0f;
}
