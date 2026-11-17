#include "ui/MessageMainA.h"
extern "C" {

/* Updates the message target's current value. */
void messageMainSetTargetValue(u32 value)
{
    g_messageMain.banner->value = value;
}
}
