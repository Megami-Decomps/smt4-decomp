#include "common.h"
#include "status/StatusCamera.h"
#include "shard/TextureDrawCall.h"

extern "C" {


/* 1 when bit `index` of the bitset at +0x51 of FUN_002a0d0c's block is clear. */
u8 FUN_00200574(u32 index)
{
    u8 *block = FUN_002a0d0c();

    if (((u32)block[(index >> 3) + 0x51] & (1 << (index & 7))) != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
