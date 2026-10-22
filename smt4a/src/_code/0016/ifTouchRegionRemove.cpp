#include "ui/IfTouch.h"

extern "C" {

/* Decrements the counter at 0x64A of the record at 0x57F248 while it is above 10. */
void ifTouchRegionRemove(void)
{
    if (g_ifTouch.state->regionCount > 10) {
        g_ifTouch.state->regionCount = g_ifTouch.state->regionCount - 1;
    }
}

} /* extern "C" */
