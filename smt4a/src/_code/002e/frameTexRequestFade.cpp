/* NON_MATCHING: retail loads g_frameTex a second time after taking the pending-flag address; armcc reuses the first load. */
#include "frame_tex/FrameTexA.h"

extern "C" {

/* ENCEFF fade request: 0 resets, 1 and 4 start a fade-in, 2 starts the fade-out, 3 enables without fading. */
void frameTexRequestFade(s32 request)
{
    s8 *pending = &g_frameTex->unk144C;

    if (request == 0) {
        g_frameTex->encEffFadeActive = 0;
        g_frameTex->encEffFadeInFrames = 0;
        g_frameTex->encEffFadeOutFrames = 0;
        g_frameTex->encEffFrame = 0;
        g_frameTex->encEffEnabled = 0;
        g_frameTex->encEffCapturedLeft = 0;
        g_frameTex->encEffCapturedRight = 0;
        g_frameTex->encEffPendingRight = 0;
        *pending = 0;
    } else if (request == 1) {
        g_frameTex->encEffFadeActive = 1;
        g_frameTex->encEffFadeInFrames = 1;
        *pending = 0;
    } else if (request == 2) {
        if (g_frameTex->encEffFadeActive == 0) {
            g_frameTex->encEffFadeInFrames = 0;
            g_frameTex->encEffFadeOutFrames = 0;
            g_frameTex->encEffFrame = 0;
        } else {
            g_frameTex->encEffFadeOutFrames = 1;
        }
    } else if (request == 3) {
        g_frameTex->encEffFadeActive = 1;
        g_frameTex->encEffFadeInFrames = 0;
        g_frameTex->encEffFadeOutFrames = 0;
        g_frameTex->encEffFrame = 0;
    } else if (request == 4) {
        g_frameTex->encEffFadeActive = 1;
        g_frameTex->encEffFadeInFrames = 1;
        *pending = 1;
    }
}

} /* extern "C" */
