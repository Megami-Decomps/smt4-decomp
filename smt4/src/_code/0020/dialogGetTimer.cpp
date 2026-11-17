#include "font/InfoWin.h"

extern "C" {



u32 dialogGetTimer(void)
{
    return g_infoWin->timer;
}

} /* extern "C" */
