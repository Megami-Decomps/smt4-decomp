#include "frame_tex/FrameTexA.h"

extern "C" {

/* Enables the first ENCEFF capture set and clears its captures. */
void frameTexInitActive(void)
{
    FrameTexWorkA *tex = g_frameTex;
    tex->encEffEnabled = 1;
    tex->encEffCapturedLeft = 0;
    tex->encEffCapturedRight = 0;
    tex->encEffPendingRight = 0;
    tex->encEffAlternate = 0;
}

} /* extern "C" */
