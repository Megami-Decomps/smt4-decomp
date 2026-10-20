#include "shard/Shard004C.h"

extern "C" {

extern u32 padButtonRepeat(u32 id);

u32 getMaskType6(s32 includeExtra)
{
    u32 mask = padButtonRepeat(0x6);

    if (includeExtra != 0) {
        mask = mask | padButtonRepeat(0xf);
    }
    return mask;
}

} /* extern "C" */
