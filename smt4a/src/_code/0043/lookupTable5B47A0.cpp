#include "shard/Shard0043.h"

extern "C" {

extern u32 DAT_005b47a0[];

/* Entry `index` of DAT_005b47a0, or 0 when out of range. */
u32 lookupTable5B47A0(u32 index)
{
    if (index < 0xc) {
        return DAT_005b47a0[index];
    }
    return 0;
}

} /* extern "C" */
