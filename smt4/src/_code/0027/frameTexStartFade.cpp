#include "ui/FrameTex.h"
extern "C" FrameWork *g_frameTex;

extern "C" {

void frameTexStartFade(u32 value)
{
    FrameWork *block = g_frameTex;

    g_frameTex->fadeActive = 1;
    block->fadeEnabled = 0;
    block->unkF9D = 0;
    block->unkF9E = 0;
    block->elapsed = 0;
    block->duration = value;
}

} /* extern "C" */
