#include "frame_tex/FrameTexA.h"

extern "C" {

/* Enables the CAMP effect and clears its captures. */
void objectE0ResetFlags1040(void)
{
    FrameTexWorkA *obj = g_frameTex;
    obj->campEnabled = 1;
    obj->campCapturedLeft = 0;
    obj->campCapturedRight = 0;
    obj->campPendingRight = 0;
}

} /* extern "C" */
