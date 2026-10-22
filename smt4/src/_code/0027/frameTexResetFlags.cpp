#include "ui/FrameTex.h"
extern "C" FrameWork *g_frameTex;

extern "C" {

void frameTexResetFlags(void)
{
    FrameWork *block = g_frameTex;

    g_frameTex->unkFD8 = 1;
    block->unkE96 = 0;
    block->unkE95 = 0;
}

} /* extern "C" */
