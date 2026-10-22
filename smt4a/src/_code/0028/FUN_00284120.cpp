#include "shard/Shard0042.h"

extern "C" TouchRegionValuesOwner g_ifTouch;

/* Return the indexed touch-region value when touch input exists. */
extern "C" s32 FUN_00284120(u32 index)
{
    if (g_ifTouch.values != NULL) {
        return g_ifTouch.values->regions[index].value;
    }
    return 0;
}
