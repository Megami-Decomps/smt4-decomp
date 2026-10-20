#include "shard/Sys43e188.h"

extern "C" {

u8 sys43e188GetStateB(void)
{
    return g_messageMain.state->state == 4;
}

} /* extern "C" */
