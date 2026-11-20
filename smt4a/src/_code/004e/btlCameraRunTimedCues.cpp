#include "battle/CameraScalarTransition.h"
#include "battle/BtlGlobals.h"

extern "C" {
void cameraBeginScalarTransition(BtlCameraA *camera, f32 value, u32 duration, u32 mode);
void FUN_004f41b0(BtlCameraA *camera, u32 first, u32 second);

/* Runs the scripted camera cues and returns 1 once the timeline is complete. */
u32 btlCameraRunTimedCues(u32 unused, BtlCameraCueWork *work, s32 extended)
{
    if (extended != 0) {
        if (work->frame == 15) {
            BtlCameraA *camera = g_btlCamera;
            camera->flags |= 0x100000;
            cameraBeginScalarTransition(camera, 6.0f, 50, 1);
            btlCameraStartFovShift(g_btlCamera, 8.0f, 50, 1, 0);
        }
        if (work->frame <= 65)
            return 0;
    } else {
        f32 progress = g_btlCamera->eyeDip;
        switch (work->frame) {
        case 15:
            cameraBeginScalarTransition(g_btlCamera, 6.0f, 50, 1);
            btlCameraStartFovShift(g_btlCamera, 8.0f, 50, 1, 0);
            break;
        case 35:
            cameraBeginScalarTransition(g_btlCamera, -progress - 0.5f, 6, 1);
            btlCameraStartFovShift(g_btlCamera, 0.0f, 6, 1, 1);
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
} /* extern "C" */
