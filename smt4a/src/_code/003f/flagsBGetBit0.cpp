#include "shard/Shard003F.h"

extern "C" {

extern u8 *flagsBGetPtr(s32 index);

u8 flagsBGetBit0(s32 index)
{
    u8 *flags = flagsBGetPtr(index);

    return *flags & 1;
}

} /* extern "C" */
