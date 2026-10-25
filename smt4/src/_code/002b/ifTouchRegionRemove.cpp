#include "ui/IfTouch.h"
#include "util/CalleeContracts.h"

extern "C" {

/* Counts regionCount down towards 10. */
void ifTouchRegionRemove(void)
{
    if (g_ifTouch.state->regionCount > 10) {
        g_ifTouch.state->regionCount = g_ifTouch.state->regionCount - 1;
    }
}

} /* extern "C" */
