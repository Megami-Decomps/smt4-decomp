#include "shard/Shard003F.h"

extern "C" {

extern u8 *flagsAtGetPtr(s32 index);

u8 flagsAtGetBit0(s32 index)
{
    u8 *flags = flagsAtGetPtr(index);

    return *flags & 1;
}

} /* extern "C" */
