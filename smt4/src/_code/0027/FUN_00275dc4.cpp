#include "ui/FrameTex.h"
extern "C" FrameWork *g_frameTex;

extern "C" {

void FUN_00275dc4(void)
{
    FrameWork *block = g_frameTex;

    g_frameTex->unkF28 = 1;
    block->unkF2B = 0;
    block->unkF2C = 0;
    block->unkF2D = 0;
}

} /* extern "C" */
