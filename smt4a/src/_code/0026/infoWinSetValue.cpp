#include "font/InfoWinA.h"

extern "C" {


/* Stores `value` in the byte at 0x30 of the scene. */
void infoWinSetValue(u8 value)
{
    g_infoWin->shown = value;
}

} /* extern "C" */
