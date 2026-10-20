#include "shard/Shard004C.h"

extern "C" {

extern u32 FUN_00164af0(u32 id);

u32 getMaskType3(s32 includeExtra)
{
    u32 mask = FUN_00164af0(0x3);

    if (includeExtra != 0) {
        mask = mask | FUN_00164af0(0xc);
    }
    return mask;
}

} /* extern "C" */
