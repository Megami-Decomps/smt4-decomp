#include "ui/IfTouch.h"

extern "C" {

u32 ifTouchIsInitialSelection(u32 id)
{
    u32 result;
    u8 matches;

    matches = (int)g_ifTouch.state->selectedRegion == id;
    if (matches) {
        id = g_ifTouch.state->selectionMode;
    }
    if ((matches && id == 1) && (g_ifTouch.state->repeatCounter < 1)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
