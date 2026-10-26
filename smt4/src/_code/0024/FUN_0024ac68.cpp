#include "ui/FrameTex.h"
#include "code/Code0024.h"

extern "C" {

extern FrameWork *g_frameTex;

void FUN_0024ac68(u8 value)
{
    g_frameTex->unkEDC = value;
}

} /* extern "C" */
