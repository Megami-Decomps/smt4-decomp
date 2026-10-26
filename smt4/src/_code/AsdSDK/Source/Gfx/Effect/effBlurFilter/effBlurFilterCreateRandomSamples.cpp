#include "AsdSDK/Source/Gfx/Effect/effBlurFilter.h"

struct BlurScatterParameters;
struct BlurSample;
extern "C" BlurSample *FUN_00313590(BlurScatterParameters *parameters);

/* Forward the filter's scatter-parameter subobject to the sample allocator. */
extern "C" BlurSample *effBlurFilterCreateRandomSamples(BlurParams *filter)
{
    return FUN_00313590(reinterpret_cast<BlurScatterParameters *>(&filter->sampleCount));
}
