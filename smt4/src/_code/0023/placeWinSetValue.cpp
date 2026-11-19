#include "font/PlaceWin.h"

extern "C" {

extern PlaceWindow *g_placeWin;

void placeWinSetValue(u8 value)
{
    g_placeWin->visible = value;
}

} /* extern "C" */
