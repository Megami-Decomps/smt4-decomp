#include "shard/Sys43e188.h"

extern "C" {

u32 FUN_0029e620(u32 value, u8 flag)
{
    Target43e188 *target = DAT_0043e188.target;

    target->unk81 = flag;
    target->unk70 = value;
    target->unk74 = value;
    target->unk80 = 1;
    return 1;
}

} /* extern "C" */
