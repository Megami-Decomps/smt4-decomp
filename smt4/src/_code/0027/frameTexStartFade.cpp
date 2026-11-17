#include "frame_tex/FrameTex.h"

extern "C" {

void frameTexStartFade(u32 value)
{
    FrameTexWork *block = g_frameTex;

    g_frameTex->fadeEnabled = 1;
    block->fadeCapturedLeft = 0;
    block->fadeCapturedRight = 0;
    block->fadePendingRight = 0;
    block->fadeElapsed = 0;
    block->fadeDuration = value;
}

} /* extern "C" */
