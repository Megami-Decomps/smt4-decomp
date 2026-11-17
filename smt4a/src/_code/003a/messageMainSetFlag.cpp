#include "ui/MessageMainA.h"
#include "shard/Shard003A.h"

extern "C" {

void messageMainSetFlag(u8 value)
{
    g_messageMain.enabled = value;
}

} /* extern "C" */
