#include "shard/Shard003F.h"

extern "C" {

extern u8 *FUN_002840e0(s32 index);

u8 flagsBGetBit0(s32 index)
{
    u8 *flags = FUN_002840e0(index);

    return *flags & 1;
}

} /* extern "C" */
