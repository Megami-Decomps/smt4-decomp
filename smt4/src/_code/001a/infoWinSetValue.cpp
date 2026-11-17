#include "font/InfoWin.h"


extern "C" {


/* Updates the information work area's current value. */
void infoWinSetValue(u32 value)
{
    g_infoWin->frame = value;
}

} /* extern "C" */
