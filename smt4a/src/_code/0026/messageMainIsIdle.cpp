#include "ui/MessageMainA.h"

extern "C" {

/* Returns whether there is no dialogue window or it is closed (state 0). */
u8 messageMainIsIdle(void)
{
    u8 state;

    state = 0;
    if (g_messageMain.window != NULL) {
        state = g_messageMain.window->state;
    }
    return g_messageMain.window == NULL || state == 0;
}

} /* extern "C" */
