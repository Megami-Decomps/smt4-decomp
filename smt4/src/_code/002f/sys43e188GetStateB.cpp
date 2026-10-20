#include "shard/Sys43e188.h"

extern "C" {

u8 sys43e188GetStateB(void)
{
    return DAT_0043e188.state->state == 4;
}

} /* extern "C" */
