#include "shard/Sys43e188.h"

extern "C" {

u8 sys43e188GetState(void)
{
    u8 value = 0;

    if (DAT_0043e188.state != NULL) {
        value = DAT_0043e188.state->state;
    }
    return DAT_0043e188.state == NULL || value == 0;
}

} /* extern "C" */
