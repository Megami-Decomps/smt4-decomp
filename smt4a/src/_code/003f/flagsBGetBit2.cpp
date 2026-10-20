#include "shard/Shard003F.h"

extern "C" {

extern u8 *flagsBGetPtr(s32 index);

u32 flagsBGetBit2(s32 index)
{
    u8 *flags = flagsBGetPtr(index);

    return (*flags & 4) >> 2;
}

} /* extern "C" */
