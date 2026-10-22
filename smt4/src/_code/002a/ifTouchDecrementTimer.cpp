#include "ui/IfTouch.h"

extern "C" {

/* Counts timer down towards 0. */
void ifTouchDecrementTimer(void)
{
    if (0 < g_ifTouch.state->timer) {
        g_ifTouch.state->timer = g_ifTouch.state->timer - 1;
    }
}

} /* extern "C" */
