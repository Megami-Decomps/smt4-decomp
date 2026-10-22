#include "ui/IfTouch.h"

extern "C" {

/* Returns whether the touch interface state exists and is enabled. */
u8 ifTouchIsActive(void)
{
    IfTouchState *state = g_ifTouch.state;

    if (state == NULL)
        return 0;

    u8 active = state->enabled;
    if (active != 0)
        active = 1;
    return active;
}

} /* extern "C" */
