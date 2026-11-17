#include "font/PlaceWin.h"

extern "C" {

extern PlaceWindow *g_placeWin;

void FUN_002305e8(u8 value)
{
    g_placeWin->visible = value;
}

} /* extern "C" */
