#include "font/InfoWinA.h"

extern "C" {


/* Stores `timer` at 0x10 of the navigator. */
void infoWinSetTimer(u32 timer)
{
    g_infoWin->timer = timer;
}

} /* extern "C" */
