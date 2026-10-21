extern "C" {
#include "shard/Sys43e188.h"

/* Updates the message target's current value. */
void messageMainSetTargetValue(u32 value)
{
    g_messageMain.target->unk18 = value;
}
}
