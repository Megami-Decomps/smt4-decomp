/* NON_MATCHING: the debug trace (g_effBlurFilterSourcePath line 1330) now matches; remaining difference is register allocation. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Effect/effBlurFilter.h"

extern "C" {

void *memAlloc(int, int, int, s32 size, int align, int);
extern const char g_effBlurFilterSourcePath[]; /* the source file path (__FILE__) */

/* Allocates the blur samples and lays them out: sample i sits at -(step * i) with zero weight and
 * takes the two extra values from the parameters. Returns the samples. */
BlurSample *effBlurFilterLayoutSamples(BlurParams *params)
{
    s32 count = params->sampleCount;
    s32 size = count * 0x34;
    asdDebugTrace(g_effBlurFilterSourcePath, 1330);
    BlurSample *samples = (BlurSample *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    s32 i;

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
