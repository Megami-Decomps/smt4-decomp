#include "AsdSDK/Source/Gfx/Effect/effBlurFilter.h"

struct ScatterParams;
struct ScatterSample;
extern "C" ScatterSample *FUN_003aa3ac(ScatterParams *params);

/* Forward the filter's scatter-parameter subobject to the sample allocator. */
extern "C" ScatterSample *blurFilterAllocateScatterSamples(BlurParams *filter)
{
    return FUN_003aa3ac(reinterpret_cast<ScatterParams *>(&filter->sampleCount));
}
