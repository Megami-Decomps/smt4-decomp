#include "shard/Sys43e188.h"

extern "C" {

void FUN_002bff38(u8 value)
{
    if (DAT_0043e188.state != NULL) {
        DAT_0043e188.state->unkA11 = value;
    }
}

} /* extern "C" */
