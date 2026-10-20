#include "shard/Shard0043.h"

extern "C" {

extern u32 DAT_005b47d0[];

/* Entry `index` of DAT_005b47d0, or 0 when out of range. */
u32 lookupTable5B47D0(u32 index)
{
    if (index < 0x7) {
        return DAT_005b47d0[index];
    }
    return 0;
}

} /* extern "C" */
