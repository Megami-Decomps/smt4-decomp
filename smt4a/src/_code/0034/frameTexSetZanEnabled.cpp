#include "frame_tex/FrameTexA.h"

extern "C" {



void frameTexSetZanEnabled(u8 value)
{
    g_frameTex->zan.enabled = value;
}

} /* extern "C" */
