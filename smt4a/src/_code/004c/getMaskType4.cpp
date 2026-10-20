#include "shard/Shard004C.h"

extern "C" {

extern u32 FUN_00164af0(u32 id);

u32 getMaskType4(s32 includeExtra)
{
    u32 mask = FUN_00164af0(0x4);

    if (includeExtra != 0) {
        mask = mask | FUN_00164af0(0xd);
    }
    return mask;
}

} /* extern "C" */
