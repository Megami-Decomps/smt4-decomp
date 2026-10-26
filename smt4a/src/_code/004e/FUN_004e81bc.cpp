/* NON_MATCHING: the 0.0f pool load before the case-35 FUN_004f3f1c call is scheduled before mov r2 where retail places it after mov r1; everything else matches. */
#include "battle/btlCamera.h"

namespace {
struct CameraCueWork {
    u8 prefix[0x56C];
    u32 frame;
};
}
extern "C" {
extern BtlCameraA *g_btlCamera;
void cameraBeginScalarTransition(BtlCameraA *camera, f32 value, u32 duration, u32 mode);
void FUN_004f3f1c(BtlCameraA *camera, u32 target, u32 parameter, s32 preservePending, f32 duration);
void FUN_004f41b0(BtlCameraA *camera, u32 first, u32 second);

// Run the scripted camera cues and signal when their timeline has completed.
u32 FUN_004e81bc(u32 unused, CameraCueWork *work, s32 extended)
{
    if (extended != 0) {
        if (work->frame == 15) {
            BtlCameraA *camera = g_btlCamera;
            camera->flags |= 0x100000;
            cameraBeginScalarTransition(camera, 6.0f, 50, 1);
            FUN_004f3f1c(g_btlCamera, 50, 1, 0, 8.0f);
        }
        if (work->frame <= 65)
            return 0;
    } else {
        // A float overlay on the unaligned byte padding would change the shared layout.
        struct CameraProgressView {
            u8 prefix[0x704];
            f32 progress;
        };
        f32 progress = reinterpret_cast<CameraProgressView *>(g_btlCamera)->progress;
        switch (work->frame) {
        case 15:
            cameraBeginScalarTransition(g_btlCamera, 6.0f, 50, 1);
            FUN_004f3f1c(g_btlCamera, 50, 1, 0, 8.0f);
            break;
        case 35:
            cameraBeginScalarTransition(g_btlCamera, -progress - 0.5f, 6, 1);
            FUN_004f3f1c(g_btlCamera, 6, 1, 1, 0.0f);
            break;
        case 41:
            FUN_004f41b0(g_btlCamera, 0, 2);
            break;
        }
        if (work->frame <= 43)
            return 0;
    }
    return 1;
}
}
