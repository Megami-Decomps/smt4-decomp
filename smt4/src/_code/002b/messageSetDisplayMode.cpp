#include "ui/MessageMain.h"

extern "C" {

void messageSetDisplayMode(u8 value)
{
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = value;
    }
}

} /* extern "C" */
