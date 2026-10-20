#include "shard/Sys43e188.h"

extern "C" {

u32 FUN_002d8e10(void)
{
    u32 result;

    if ((DAT_0043e188.target->unk7D == 0) || (DAT_0043e188.target->unk7C != 2)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
