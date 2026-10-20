#include "shard/Shard003F.h"

extern "C" {

extern u8 *FUN_002840e0(s32 index);

u32 flagsBGetBit1(s32 index)
{
    u8 *flags = FUN_002840e0(index);

    return (*flags & 2) >> 1;
}

} /* extern "C" */
