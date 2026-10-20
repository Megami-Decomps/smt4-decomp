#include "shard/Sys43e188.h"

extern "C" {

void FUN_002bff38(u8 value)
{
    if (g_messageMain.state != NULL) {
        g_messageMain.state->unkA11 = value;
    }
}

} /* extern "C" */
