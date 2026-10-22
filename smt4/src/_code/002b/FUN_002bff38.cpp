#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

void FUN_002bff38(u8 value)
{
    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = value;
    }
}

} /* extern "C" */
