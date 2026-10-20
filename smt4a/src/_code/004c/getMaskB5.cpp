#include "shard/Shard004C.h"

extern "C" {

extern u32 FUN_001656a0(u32 id);

u32 getMaskB5(s32 includeExtra)
{
    u32 mask = FUN_001656a0(0x5);

    if (includeExtra != 0) {
        mask = mask | FUN_001656a0(0xe);
    }
    return mask;
}

} /* extern "C" */
