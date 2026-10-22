#include "ui/IfTouch.h"

extern "C" {

/* Decrements the counter at 0x64C of the record at 0x57F248 while it is positive. */
void ifTouchDecrementTimer(void)
{
    if (0 < g_ifTouch.state->timer) {
        g_ifTouch.state->timer = g_ifTouch.state->timer - 1;
    }
}

} /* extern "C" */
