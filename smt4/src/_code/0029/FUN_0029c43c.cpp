#include "shard/Sys43e188.h"

extern "C" {

u32 FUN_0029c43c(u32 value, u8 flag)
{
    Target43e188 *target = DAT_0043e188.target;

    DAT_0043e188.target->unk7C = 3;
    target->unk70 = value;
    target->unk74 = value;
    target->unk81 = flag;
    target->unk64 = 0;
    return 1;
}

} /* extern "C" */
