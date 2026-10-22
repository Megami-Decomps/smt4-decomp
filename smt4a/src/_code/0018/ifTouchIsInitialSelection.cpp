#include "ui/IfTouch.h"

extern "C" {

/* Returns 1 when the record's id equals `id`, its mode is 1 and its counter has not gone positive. */
u32 ifTouchIsInitialSelection(u32 id)
{
    u8 match;
    u32 result;

    match = (s32)g_ifTouch.state->selectedRegion == id;
    if (match) {
        id = (u32)g_ifTouch.state->selectionMode;
    }
    if ((match && id == 1) && (g_ifTouch.state->repeatCounter < 1)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
