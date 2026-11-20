#include "battle/CameraScalarTransition.h"
#include "battle/BtlGlobals.h"

extern "C" {
void transitionConfigureAndReset(BtlCamera *main, u32 duration, s32 enabled, f32 value);
void FUN_003d86a0(BtlCamera *main, s32 first, s32 second);

/* Runs the scripted camera cues and returns 1 once the timeline is complete. */
u32 btlCameraRunTimedCues(u32, BtlCameraCueWork *progress, s32 alternate)
{
    if (alternate) {
        if (progress->frame == 15) {
            BtlCamera *main = g_btlMain;
            main->flags |= 0x100000;
            transitionConfigureAndReset(main, 50, 1, 6.0f);
            btlCameraStartFovShift(g_btlMain, 8.0f, 50, 1, 0);
        }
        if (progress->frame <= 65) {
            return 0;
        }
    } else {
        f32 cameraValue = g_btlMain->eyeDip;
        switch (progress->frame) {
        case 15:
            transitionConfigureAndReset(g_btlMain, 50, 1, 6.0f);
            btlCameraStartFovShift(g_btlMain, 8.0f, 50, 1, 0);
            break;
        case 35:
            transitionConfigureAndReset(g_btlMain, 6, 1, -cameraValue - 0.5f);
            btlCameraStartFovShift(g_btlMain, 0.0f, 6, 1, 1);
            break;
        case 41:
            FUN_003d86a0(g_btlMain, 0, 2);
            break;
        }
        if (progress->frame <= 43) {
            return 0;
        }
    }
    return 1;
}
} /* extern "C" */
