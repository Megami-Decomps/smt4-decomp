#include "shard/Shard003F.h"

extern "C" {

extern u8 *FUN_002840c4(s32 index);

u32 flagsAtGetBit1(s32 index)
{
    u8 *flags = FUN_002840c4(index);

    return (*flags & 2) >> 1;
}

} /* extern "C" */
