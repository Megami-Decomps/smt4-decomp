/* NON_MATCHING: retail adds the indexed record to the pointer, then uses ldrsh #10; armcc folds the field offset into the index and emits one extra instruction. */
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
