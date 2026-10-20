#include "shard/Shard003F.h"

extern "C" {

extern u8 *FUN_002840c4(s32 index);

void flagsAtSetBits01(s32 index)
{
    u8 *flags = FUN_002840c4(index);

    *flags |= 3;
}

} /* extern "C" */
