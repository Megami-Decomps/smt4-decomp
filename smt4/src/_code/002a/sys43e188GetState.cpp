#include "shard/Sys43e188.h"

extern "C" {

u8 sys43e188GetState(void)
{
    u8 value = 0;

    if (g_messageMain.state != NULL) {
        value = g_messageMain.state->state;
    }
    return g_messageMain.state == NULL || value == 0;
}

} /* extern "C" */
