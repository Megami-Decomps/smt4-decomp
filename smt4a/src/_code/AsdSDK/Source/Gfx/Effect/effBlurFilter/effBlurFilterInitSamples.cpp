#include "AsdSDK/Source/Gfx/Effect/effBlurFilter.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_effBlurFilterSourcePath[];

void *memAlloc(int, int, int, s32 size, int align, int);

/* Allocates the blur samples (one per sample in the parameters) and sets every sample's weight. */
void effBlurFilterInitSamples(BlurParams *params)
{
    s32 count = params->sampleCount;
    s32 size = count * 0x34;
    BlurSample *samples;
    s32 i;

    asdDebugTrace(g_effBlurFilterSourcePath, 1208);
    samples = (BlurSample *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    i = 0;

    if (0 < count) {
        do {
            BlurSample *sample = &samples[i];

            i++;
            sample->weight = 4.141593f;
        } while (i < count);
    }
}

} /* extern "C" */
