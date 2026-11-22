#include "frame_tex/FrameTex.h"
#include "code/Code0024.h"

extern "C" {


void frameTexSetHdrEnabled(u8 value)
{
    g_frameTex->hdr.enabled = value;
}

} /* extern "C" */
