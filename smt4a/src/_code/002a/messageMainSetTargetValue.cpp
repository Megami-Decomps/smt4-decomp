#include "ui/MessageMain.h"
extern "C" {
extern MessageGlobalsA g_messageMain;

/* Updates the message target's current value. */
void messageMainSetTargetValue(u32 value)
{
    g_messageMain.panel->value = value;
}
}
