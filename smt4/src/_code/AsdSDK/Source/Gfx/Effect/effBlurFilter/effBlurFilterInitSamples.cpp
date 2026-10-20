/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 32 vs built 26 rows, 31 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effBlurFilter.h"

extern "C" {

void *memAlloc(int, int, int, s32 size, int align, int);

/* Allocates the blur samples (one per sample in the parameters) and sets every sample's weight. */
void effBlurFilterInitSamples(BlurParams *params)
{
    s32 count = params->sampleCount;
    BlurSample *samples = (BlurSample *)memAlloc(0x10000, 0x100, 0, count * 0x34, 0x10, 1);
    s32 i = 0;

    if (0 < count) {
        do {
            BlurSample *sample = &samples[i];

            i++;
            sample->weight = 4.141593f;
        } while (i < count);
    }

}

} /* extern "C" */
