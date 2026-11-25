#include "frame_tex/FrameTexA.h"

extern "C" {

enum {
    ENCEFF_FADE_RESET,
    ENCEFF_FADE_IN,
    ENCEFF_FADE_OUT,
    ENCEFF_FADE_ENABLE,
    ENCEFF_FADE_IN_SPECIAL
};

/* Applies an ENCEFF fade request to the frame-texture work. */
void frameTexApplyMode(s32 request)
{
    FrameTexWorkA *work = g_frameTex;

    if (request == ENCEFF_FADE_RESET) {
        work->encEffFadeActive = 0;
        work->encEffFadeInFrames = 0;
        work->encEffFadeOutFrames = 0;
        work->encEffFrame = 0;
        work->encEffEnabled = 0;
        work->encEffCapturedLeft = 0;
        work->encEffCapturedRight = 0;
        work->encEffPendingRight = 0;
        work->unk144C = 0;
    } else if (request == ENCEFF_FADE_IN) {
        work->encEffFadeActive = 1;
        work->encEffFadeInFrames = 1;
        work->unk144C = 0;
    } else if (request == ENCEFF_FADE_OUT) {
        if (work->encEffFadeActive == 0) {
            work->encEffFadeInFrames = 0;
            work->encEffFadeOutFrames = 0;
            work->encEffFrame = 0;
        } else {
            work->encEffFadeOutFrames = 1;
        }
    } else if (request == ENCEFF_FADE_ENABLE) {
        work->encEffFadeActive = 1;
        work->encEffFadeInFrames = 0;
        work->encEffFadeOutFrames = 0;
        work->encEffFrame = 0;
    } else if (request == ENCEFF_FADE_IN_SPECIAL) {
        work->encEffFadeActive = 1;
        work->encEffFadeInFrames = 1;
        work->unk144C = 1;
    }
}

} /* extern "C" */
