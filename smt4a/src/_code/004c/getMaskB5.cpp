#include "shard/Shard004C.h"
#include "util/GetMaskB5.h"

extern "C" {

extern u32 padButtonIsPressed(u32 id);

u32 getMaskB5(s32 includeExtra)
{
    u32 mask = padButtonIsPressed(0x5);

    if (includeExtra != 0) {
        mask = mask | padButtonIsPressed(0xe);
    }
    return mask;
}

} /* extern "C" */
