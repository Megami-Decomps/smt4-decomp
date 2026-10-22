#include "ui/IfTouch.h"

extern "C" {

/* Returns 1 when the record's id equals `id`, its mode is 1 or 2, and its counter is below 1 or at 0xF plus a multiple of 4. */
u32 ifTouchIsRepeatingSelection(s32 id)
{
    s32 counter;

    if (((g_ifTouch.state->selectedRegion == id) &&
         (g_ifTouch.state->selectionMode == 1 || g_ifTouch.state->selectionMode == 2)) &&
        ((counter = g_ifTouch.state->repeatCounter, counter < 1) ||
         ((counter >= 0xF && (((counter - 0xFU) & 3) == 0))))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
