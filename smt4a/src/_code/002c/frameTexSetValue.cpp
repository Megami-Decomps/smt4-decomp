#include "frame_tex/FrameTexA.h"

extern "C" {

/* Set the frame texture work's byte at 0x25. */
void frameTexSetValue(u8 value)
{
    g_frameTex->value = value;
}

} /* extern "C" */
