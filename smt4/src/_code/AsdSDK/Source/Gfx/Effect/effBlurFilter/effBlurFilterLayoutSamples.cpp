/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 42 vs built 38 rows, 59 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effBlurFilter.h"

extern "C" {

void *memAlloc(int, int, int, s32 size, int align, int);

/* Allocates the blur samples and lays them out: sample i sits at -(step * i) with zero weight and
 * takes the two extra values from the parameters. Returns the samples. */
BlurSample *effBlurFilterLayoutSamples(BlurParams *params)
{
    s32 count = params->sampleCount;
    BlurSample *samples = (BlurSample *)memAlloc(0x10000, 0x100, 0, count * 0x34, 0x10, 1);
    s32 i;

    for (i = 0; i < count; i++) {
        BlurSample *sample = &samples[i];

        sample->weight = 0.0f;
        sample->unk10 = params->unkd0;
        sample->unk14 = params->unkd4;
        sample->offset = -(params->step * (f32)i);
    }
    return samples;
}

} /* extern "C" */
