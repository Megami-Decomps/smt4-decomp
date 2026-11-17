#include "ui/MessageMain.h"

extern "C" {

void messageSetConfirmDisplayMode(void)
{
    if (g_messageMain.window != NULL) {
        g_messageMain.window->displayMode = 0x14;
    }
}

} /* extern "C" */
