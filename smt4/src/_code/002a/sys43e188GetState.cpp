#include "ui/MessageMain.h"

extern "C" {

u8 sys43e188GetState(void)
{
    u8 value = 0;

    if (g_messageMain.window != NULL) {
        value = g_messageMain.window->state;
    }
    return g_messageMain.window == NULL || value == 0;
}

} /* extern "C" */
