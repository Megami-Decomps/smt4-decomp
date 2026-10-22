/* NON_MATCHING: all three ranges are cleared, but armcc uses separate scalar loads and different unrolled-loop pointer updates instead of retail's LDM/post-increment sequence. */
#include "shard/Shard0044.h"

static __inline void clearFlagRange(MaterialFlagRange range)
{
    for (s32 remaining = range.end - range.begin; remaining > 0; --remaining, ++range.begin)
        *range.begin = 0;
}

// Clear all three material flag arrays.
extern "C" void FUN_004492b4(MaterialFlagArrays *arrays)
{
    clearFlagRange(arrays->first);
    clearFlagRange(arrays->second);
    clearFlagRange(arrays->third);
}
