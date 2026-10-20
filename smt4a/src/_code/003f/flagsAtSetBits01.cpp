#include "shard/Shard003F.h"

extern "C" {

extern u8 *flagsAtGetPtr(s32 index);

void flagsAtSetBits01(s32 index)
{
    u8 *flags = flagsAtGetPtr(index);

    *flags |= 3;
}

} /* extern "C" */
