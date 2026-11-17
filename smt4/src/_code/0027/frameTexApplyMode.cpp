#include "frame_tex/FrameTex.h"

extern "C" {

/* Applies one of the frame-texture transition modes to the shared frame work. */
void frameTexApplyMode(s32 mode)
{
    FrameTexWork *work = g_frameTex;

    if (mode == 0) {
        work->encEffFadeActive = 0;
        work->encEffFadeInFrames = 0;
        work->encEffFadeOutFrames = 0;
        work->encEffFrame = 0;
        work->encEffEnabled = 0;
        work->encEffCapturedLeft = 0;
        work->encEffCapturedRight = 0;
        work->encEffPendingRight = 0;
        work->unkF98 = 0;
    } else if (mode == 1) {
        work->encEffFadeActive = 1;
        work->unkF98 = 0;
        work->encEffFadeInFrames = 1;
    } else if (mode == 2) {
        if (work->encEffFadeActive != 0) {
            work->encEffFadeOutFrames = 1;
        } else {
            work->encEffFadeInFrames = 0;
            work->encEffFadeOutFrames = 0;
            work->encEffFrame = 0;
        }
    } else if (mode == 3) {
        work->encEffFadeActive = 1;
        work->encEffFadeInFrames = 0;
        work->encEffFadeOutFrames = 0;
        work->encEffFrame = 0;
    } else if (mode == 4) {
        work->encEffFadeActive = 1;
        work->encEffFadeInFrames = 1;
        work->unkF98 = 1;
    }
}

} /* extern "C" */
