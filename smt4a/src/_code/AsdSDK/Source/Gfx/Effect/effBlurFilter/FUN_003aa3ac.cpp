/* NON_MATCHING: REV-based color extraction and scalar VFP output stores still differ from retail. */
#include "AsdSDK/AsdDebug.h"
#include "gfx/QuaternionWorkspace.h"
#include "code/Code0051_Smt4a.h"

struct ScatterParams {
    /* 0x00 */ s32 count;
    /* 0x04 */ u32 maxFrame;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 color;
    /* 0x10 */ u32 payload10;
    /* 0x14 */ u32 payload14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ f32 centerX;
    /* 0x20 */ f32 centerY;
    /* 0x24 */ f32 spread;
    /* 0x28 */ s32 size;
};
struct ScatterQuad {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 color[4];
    /* 0x08 */ u32 payload08;
    /* 0x0C */ u32 payload0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ f32 centerX;
    /* 0x18 */ f32 centerY;
    /* 0x1C */ f32 left;
    /* 0x20 */ f32 top;
    /* 0x24 */ f32 right;
    /* 0x28 */ f32 bottom;
};
struct ScatterSample {
    /* 0x00 */ u32 frame;
    /* 0x04 */ f32 phase;
    /* 0x08 */ ScatterQuad quad;
};
extern "C" {
extern const char g_effBlurFilterSourcePath[];
void* memAlloc(u32, u32, u32, u32, u32, u32);

/* Allocate the scatter samples and seed their frame, color and square bounds. */
ScatterSample* FUN_003aa3ac(ScatterParams* params)
{
    const s32 count = params->count;
    const u32 bytes = count * sizeof(ScatterSample);
    asdDebugTrace(g_effBlurFilterSourcePath, 0x3F9);
    ScatterSample* samples = static_cast<ScatterSample*>(
        memAlloc(0x10000, 0x100, 0, bytes, 0x10, 1));
    for (s32 i = 0; i < count; ++i) {
        ScatterSample& sample = samples[i];
        const u32 random = randomAdvanceShiftRegister(0);
        sample.frame = random % (params->maxFrame + 1);
        sample.phase = -3.1415927f;
        ScatterQuad& quad = sample.quad;
        quad.payload08 = params->payload10;
        quad.payload0C = params->payload14;
        const u32 color = params->color;
        quad.color[0] = static_cast<u8>(color);
        quad.color[1] = static_cast<u8>(color >> 8);
        quad.color[2] = static_cast<u8>(color >> 16);
        quad.color[3] = static_cast<u8>(color >> 24);

        const f32 spread = params->spread;
        const f32 halfSize = static_cast<f32>(params->size) * 0.5f;
        const f32 randomX = (shiftRandomNextFraction(0) - 0.5f) * 2.0f;
        const f32 x = params->centerX + spread * randomX;
        const f32 randomY = (shiftRandomNextFraction(0) - 0.5f) * 2.0f;
        const f32 y = params->centerY + spread * randomY;
        quad.centerX = x;
        quad.centerY = y;
        quad.left = x - halfSize;
        quad.top = y - halfSize;
        quad.right = x + halfSize;
        quad.bottom = y + halfSize;
        sample.phase = 4.141593f; // pi + 1.
    }
    return samples;
}
} // extern "C"
