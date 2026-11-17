#include "frame_tex/FrameTex.h"

extern "C" {

void frameTexInitActive(void)
{
    FrameTexWork *block = g_frameTex;

    g_frameTex->encEffEnabled = 1;
    block->encEffCapturedLeft = 0;
    block->encEffCapturedRight = 0;
    block->encEffPendingRight = 0;
    block->encEffAlternate = 1;
}

} /* extern "C" */
