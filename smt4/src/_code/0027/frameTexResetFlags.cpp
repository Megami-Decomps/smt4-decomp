#include "frame_tex/FrameTex.h"

extern "C" {

void frameTexResetFlags(void)
{
    FrameTexWork *block = g_frameTex;

    g_frameTex->captureBlocked = 1;
    block->hdr.capturedRight = 0;
    block->hdr.capturedLeft = 0;
}

} /* extern "C" */
