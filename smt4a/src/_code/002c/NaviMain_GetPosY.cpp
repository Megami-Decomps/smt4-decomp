#include "font/InfoWinA.h"

extern "C" {


/* Returns the navigator's Y position. */
u32 NaviMain_GetPosY(void)
{
    return g_infoWin->timer;
}

} /* extern "C" */
