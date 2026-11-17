/* Returns the visible flag of the place window (a signed byte), or 0 when its state is idle. */
#include "font/PlaceWin.h"

extern "C" {

extern PlaceWindow *g_placeWin;

s32 placeWinGetValue(void)
{
    s32 value;

    if (g_placeWin->state != 0) {
        value = g_placeWin->visible;
    } else {
        value = 0;
    }
    return value;
}

}
