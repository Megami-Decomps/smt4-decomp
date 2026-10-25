/* NON_MATCHING: packed-color extraction lacks retail's four REV getters; bound-store batching and saved registers also differ, with -O2 a candidate for the latter. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Effect/effBlurFilter.h"

struct BlurScatterParameters {
    s32 count;
    u32 maximumFrame;
    u8 unk08[4];
    u32 color;
    f32 extra10;
    f32 extra14;
    u8 unk18[4];
    f32 centerX;
    f32 centerY;
    f32 spread;
    s32 size;
};
struct BlurScatterQuad {
    u8 unk00[4];
    u8 color[4];
    f32 extra08;
    f32 extra0c;
    u8 unk10[4];
    f32 x;
    f32 y;
    f32 left;
    f32 top;
    f32 right;
    f32 bottom;
};
struct BlurScatterSample {
    union {
        BlurSample shared;
        struct {
            u32 frame;
            f32 weight;
            BlurScatterQuad quad;
        } scatter;
    };
};
extern "C" {
extern const char DAT_00410244[];
void *memAlloc(s32 heap, s32 category, s32 flags, s32 bytes, s32 alignment, s32 clear);
u32 randomAdvanceShiftRegister(u32 stream);
f32 shiftRandomNextFraction(u32 stream);

BlurSample *effBlurFilterCreateRandomSamples(const BlurScatterParameters *parameters)
{
    s32 count = parameters->count;
    s32 bytes = count * sizeof(BlurScatterSample);
    asdDebugTrace(DAT_00410244, 0x3f7);
    BlurScatterSample *samples = (BlurScatterSample *)memAlloc(0x10000, 0x100, 0, bytes, 16, 1);
    for (s32 index = 0; index < count; ++index) {
        BlurScatterSample *sample = &samples[index];
        sample->scatter.frame = randomAdvanceShiftRegister(0) % (parameters->maximumFrame + 1);
        sample->shared.weight = -3.1415927f;
        BlurScatterQuad *quad = &sample->scatter.quad;
        quad->extra08 = parameters->extra10;
        quad->extra0c = parameters->extra14;
        u32 color = parameters->color;
        quad->color[0] = (u8)color;
        quad->color[1] = (u8)(color >> 8);
        quad->color[2] = (u8)(color >> 16);
        quad->color[3] = (u8)(color >> 24);
        f32 spread = parameters->spread;
        f32 halfSize = (f32)parameters->size * 0.5f;
        f32 randomX = (shiftRandomNextFraction(0) - 0.5f) * 2.0f;
        f32 x = parameters->centerX + spread * randomX;
        f32 randomY = (shiftRandomNextFraction(0) - 0.5f) * 2.0f;
        f32 y = parameters->centerY + spread * randomY;
        quad->x = x;
        quad->y = y;
        quad->left = x - halfSize;
        quad->top = y - halfSize;
        quad->right = x + halfSize;
        quad->bottom = y + halfSize;
        sample->shared.weight = 4.141593f;
    }
    return (BlurSample *)samples;
}
}
