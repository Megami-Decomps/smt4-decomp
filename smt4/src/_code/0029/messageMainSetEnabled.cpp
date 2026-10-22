#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

void messageMainSetEnabled(u8 value)
{
    g_messageMain.enabled = value;
}

} /* extern "C" */
