/* NON_MATCHING: retail loads the packed colour into r1 with the next shiftRandomNextFraction argument (mov r0,#0) hoisted before the REV colour bytes, so one more register (r10) is saved and the VFP temps s16/s17 swap; source shape for that schedule not found. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "gfx/QuaternionWorkspace.h"
#include "gfx/PackedColorBytes.h"
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
    PackedColorBytes color;
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
f32 shiftRandomNextFraction(u32 stream);

BlurSample *FUN_00313590(const BlurScatterParameters *parameters)
{
    s32 count = parameters->count;
    s32 bytes = count * sizeof(BlurScatterSample);
    asdDebugTrace(DAT_00410244, 0x3f7);
    BlurScatterSample *samples = (BlurScatterSample *)memAlloc(0x10000, 0x100, 0, bytes, 16, 1);
    for (s32 index = 0; index < count; ++index) {
        BlurScatterSample *sample = &samples[index];
        sample->scatter.frame = randomAdvanceShiftRegister(NULL) % (parameters->maximumFrame + 1);
        sample->shared.weight = -3.1415927f;
        BlurScatterQuad *quad = &sample->scatter.quad;
        quad->extra08 = parameters->extra10;
        quad->extra0c = parameters->extra14;
        u32 color = parameters->color;
        packedColorBytesSet(&quad->color, parameters->color);
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
