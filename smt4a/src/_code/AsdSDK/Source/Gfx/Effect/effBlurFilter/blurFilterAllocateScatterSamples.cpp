#include "AsdSDK/Source/Gfx/Effect/effBlurFilter.h"

struct ScatterParams;
struct ScatterSample;
extern "C" ScatterSample *effBlurFilterCreateScatterSamples(ScatterParams *params);

/* Forward the filter's scatter-parameter subobject to the sample allocator. */
extern "C" ScatterSample *blurFilterAllocateScatterSamples(BlurParams *filter)
{
    return effBlurFilterCreateScatterSamples(reinterpret_cast<ScatterParams *>(&filter->sampleCount));
}
