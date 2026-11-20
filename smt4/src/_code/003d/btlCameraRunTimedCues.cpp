/* NON_MATCHING: the alternate timeline's flag set is scheduled before the transition's argument moves (retail loads
 * and stores the flags between `mov r2, #1` and `mov r1, #50`); a single-use inline wrapper around the store gives
 * retail's order but has no evidence (the Apocalypse twin FUN_004e81bc matches with the store written directly). */
#include "battle/CameraScalarTransition.h"
#include "battle/BtlGlobals.h"

extern "C" {
void transitionConfigureAndReset(BtlCamera *main, u32 duration, s32 enabled, f32 value);
void FUN_003d86a0(BtlCamera *main, s32 first, s32 second);

static __inline void cameraTransitionStart(BtlCamera *main, u32 duration, f32 first, s32 mode, f32 second)
{
    transitionConfigureAndReset(main, duration, 1, first);
    btlCameraStartFovShift(g_btlMain, second, duration, 1, mode);
}

/* Runs the scripted camera cues and returns 1 once the timeline is complete. */
u32 btlCameraRunTimedCues(u32, BtlCameraCueWork *progress, s32 alternate)
{
    u32 frame = progress->frame;
    BtlCamera *main = g_btlMain;
    if (alternate) {
        if (frame == 15) {
            main->flags |= 0x100000;
            cameraTransitionStart(main, 50, 6.0f, 0, 8.0f);
        }
        if (progress->frame <= 65) {
            return 0;
        }
    } else {
        f32 cameraValue = main->eyeDip;
        switch (frame) {
        case 15:
            cameraTransitionStart(main, 50, 6.0f, 0, 8.0f);
            break;
        case 35:
            cameraTransitionStart(main, 6, -cameraValue - 0.5f, 1, 0.0f);
            break;
        case 41:
            FUN_003d86a0(main, 0, 2);
            break;
        }
        if (progress->frame <= 43) {
            return 0;
        }
    }
    return 1;
}
} /* extern "C" */
