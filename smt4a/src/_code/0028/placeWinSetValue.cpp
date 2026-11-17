#include "font/PlaceWin.h"

extern "C" {

extern PlaceWindow *g_placeWin;

/* Stores the place window's visible flag. */
void placeWinSetValue(u8 value)
{
    g_placeWin->visible = value;
}

} /* extern "C" */
