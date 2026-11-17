#include "font/InfoWinA.h"

extern "C" {


/* Returns the navigator's X position. */
u32 NaviMain_GetPosX(void)
{
    return g_infoWin->frame;
}

} /* extern "C" */
