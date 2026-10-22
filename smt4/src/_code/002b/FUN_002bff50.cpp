#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

void FUN_002bff50(void)
{
    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = 0x14;
    }
}

} /* extern "C" */
