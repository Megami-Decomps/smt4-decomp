#include "ui/FrameTex.h"
extern "C" FrameWork *g_frameTex;

extern "C" {

void FUN_00275dec(void)
{
    FrameWork *block = g_frameTex;

    g_frameTex->unkF60 = 1;
    block->unkF63 = 0;
    block->unkF64 = 0;
    block->unkF65 = 0;
    block->unkF99 = 0;
}

} /* extern "C" */
