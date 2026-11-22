#include "frame_tex/FrameTexA.h"

extern "C" {



void frameTexSetHdrEnabled(u8 value)
{
    g_frameTex->hdr.enabled = value;
}

} /* extern "C" */
