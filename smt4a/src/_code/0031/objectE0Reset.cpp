#include "frame_tex/FrameTexA.h"

extern "C" {

/* Starts the XFADE cross-fade over `frames` frames: enables it and clears its captures. */
void objectE0Reset(u32 frames)
{
    FrameTexWorkA *obj = g_frameTex;
    obj->fadeEnabled = 1;
    obj->fadeCapturedLeft = 0;
    obj->fadeCapturedRight = 0;
    obj->fadePendingRight = 0;
    obj->fadeElapsed = 0;
    obj->fadeDuration = frames;
}

} /* extern "C" */
