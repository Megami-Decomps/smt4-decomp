#ifndef GFX_CAMERA_MOTION_H
#define GFX_CAMERA_MOTION_H

#include "shard/W5_W5Match7_AnimatedObject.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "status/StatusCamera.h"

/* The animation target follows the ordinary look-at camera prefix. */
struct CameraMotionOutput {
    CameraLookAt camera;
    Vec3 animationTarget;
};
typedef char CameraMotionOutputLayoutCheck[
    offsetof(CameraMotionOutput, animationTarget) == 0x38 &&
    sizeof(CameraMotionOutput) == 0x44 ? 1 : -1];

extern "C" {
bool FUN_003f9ac4(AnimatedObject *object, CameraMotionOutput *output, s32 index, f32 delta);
void controllerRefreshAtUnitScale(AnimatedObject *object, CameraMotionOutput *output, s32 index);
}

#endif
