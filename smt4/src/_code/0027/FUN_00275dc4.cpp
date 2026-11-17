#include "frame_tex/FrameTex.h"

extern "C" {

void FUN_00275dc4(void)
{
    FrameTexWork *block = g_frameTex;

    g_frameTex->campEnabled = 1;
    block->campCapturedLeft = 0;
    block->campCapturedRight = 0;
    block->campPendingRight = 0;
}

} /* extern "C" */
