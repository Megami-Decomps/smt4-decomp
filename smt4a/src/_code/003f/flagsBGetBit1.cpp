#include "shard/Shard003F.h"

extern "C" {

extern u8 *flagsBGetPtr(s32 index);

u32 flagsBGetBit1(s32 index)
{
    u8 *flags = flagsBGetPtr(index);

    return (*flags & 2) >> 1;
}

} /* extern "C" */
