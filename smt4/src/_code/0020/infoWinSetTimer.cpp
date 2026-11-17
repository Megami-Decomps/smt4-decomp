#include "font/InfoWin.h"

extern "C" {



void infoWinSetTimer(u32 value)
{
    g_infoWin->timer = value;
}

} /* extern "C" */
