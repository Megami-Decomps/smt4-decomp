#include "ui/IfTouch.h"

extern "C" {

u32 ifTouchIsRepeatingSelection(int id)
{
    int value;

    if (((g_ifTouch.state->selectedRegion == id) &&
         (g_ifTouch.state->selectionMode == 1 || g_ifTouch.state->selectionMode == 2)) &&
        ((value = g_ifTouch.state->repeatCounter, value < 1 ||
          ((value >= 0xf && (((value - 0xfU) & 3) == 0)))))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
