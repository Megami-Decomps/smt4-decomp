#include "ui/MessageMainA.h"

extern "C" {

/* Sets the dialogue window's display mode to `value`, if there is a window. */
void messageMainSetMode(u8 value)
{
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = value;
    }
}

} /* extern "C" */
