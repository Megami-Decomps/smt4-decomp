/* NON_MATCHING: register allocation only: retail keeps the samples pointer in r1, the sample in r2 and uses ip for the copied values; the build uses r2, r1 and r3 */
#include "AsdSDK/Source/Gfx/Effect/effBlurFilter.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00410244[];

void *memAlloc(int, int, int, s32 size, int align, int);

/* Allocates the blur samples and lays them out: sample i sits at -(step * i) with zero weight and
 * takes the two extra values from the parameters. Returns the samples. */
BlurSample *effBlurFilterLayoutSamples(BlurParams *params)
{
    s32 count = params->sampleCount;
    s32 size = count * 0x34;
    BlurSample *samples;
    s32 i;

    asdDebugTrace(DAT_00410244, 1328);
    samples = (BlurSample *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);

    for (i = 0; i < count; i++) {
        BlurSample *sample = &samples[i];

        sample->weight = 0.0f;
        sample->offset = 0.0f;
        sample->unk10 = params->unkd0;
        sample->unk14 = params->unkd4;
        sample->offset = -(params->step * (f32)i);
    }
    return samples;
}

} /* extern "C" */
