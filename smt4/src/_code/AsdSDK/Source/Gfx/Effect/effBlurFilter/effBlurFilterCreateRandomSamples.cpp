#include "AsdSDK/Source/Gfx/Effect/effBlurFilter.h"

struct BlurScatterParameters;
struct BlurSample;
extern "C" BlurSample *effBlurFilterCreateScatterSamples(BlurScatterParameters *parameters);

/* Forward the filter's scatter-parameter subobject to the sample allocator. */
extern "C" BlurSample *effBlurFilterCreateRandomSamples(BlurParams *filter)
{
    return effBlurFilterCreateScatterSamples(reinterpret_cast<BlurScatterParameters *>(&filter->sampleCount));
}
