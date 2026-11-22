#include "frame_tex/FrameTex.h"
#include "code/Code0024.h"

extern "C" {


void frameTexSetZanEnabled(u8 value)
{
    g_frameTex->zan.enabled = value;
}

} /* extern "C" */
