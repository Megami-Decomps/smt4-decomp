#include "font/InfoWin.h"
#include "battle/btlHelp.h"

extern "C" {



void infoWinSetShown(u8 value)
{
    g_infoWin->shown = value;
}

} /* extern "C" */
