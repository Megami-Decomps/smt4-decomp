#include "ui/MessageMain.h"

extern "C" {

void messageMainSetEnabled(u8 value)
{
    g_messageMain.enabled = value;
}

} /* extern "C" */
