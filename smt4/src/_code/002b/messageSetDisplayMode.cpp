#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

void messageSetDisplayMode(u8 value)
{
    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = value;
    }
}

} /* extern "C" */
