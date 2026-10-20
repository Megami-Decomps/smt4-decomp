#include "shard/Shard004C.h"

extern "C" {

extern u32 padButtonRepeat(u32 id);

u32 getMaskType3(s32 includeExtra)
{
    u32 mask = padButtonRepeat(0x3);

    if (includeExtra != 0) {
        mask = mask | padButtonRepeat(0xc);
    }
    return mask;
}

} /* extern "C" */
