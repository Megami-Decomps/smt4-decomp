#include "frame_tex/FrameTexA.h"

extern "C" {

/* Blocks frame capture and clears the HDR layer's captured flags. */
void FUN_002c2610(void)
{
    FrameTexWorkA *record;

    record = g_frameTex;
    g_frameTex->captureBlocked = 1;
    record->hdr.capturedRight = 0;
    record->hdr.capturedLeft = 0;
}

} /* extern "C" */
