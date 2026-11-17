/* NON_MATCHING: VFP scheduling differs: retail unpacks both palette colors into s-registers before blending and keeps the 1/255 constant in s16; the build interleaves the byte unpack with the blend (shorter, fewer rows). */
#include "common.h"
#include "gfx/VectorScratch.h"

struct EffectVec4 {
    f32 x, y, z, w;
};

/* Scratch values shared by the effect drawing code (see FUN_00281bb0). */

/* An effect with a cycling color palette (accessed fields). */
struct ColorCycleEffect {
    u8 unk00[0x38];
    s32 length;             // 0x38: frames for a whole cycle
    u32 colors[6];          // 0x3C: packed colors
};

struct ColorCycleState {
    u8 unk00[0x18];
    s8 startIndex;          // 0x18
};

extern "C" s32 __aeabi_idivmod(s32 numerator, s32 denominator);

static __inline f32 colorChannel(u32 color, s32 shift)
{
    return static_cast<f32>((color >> shift) & 0xFF);
}

/* Blend the effect's palette colors by the frame and scale the shared color values by the result. */
extern "C" void FUN_003bcff8(ColorCycleEffect *effect, ColorCycleState *state, u32 frame)
{
    const f32 unit = 0.003921569f;
    s32 perColor = effect->length / 6;
    if (perColor > 0) {
        g_vectorScratch.third.vector = g_vectorScratch.first.vector;
        s32 cycle = frame / perColor;
        s32 within = frame % perColor;
        f32 blend = static_cast<f32>(within) / static_cast<f32>(perColor);
        s32 index = (cycle + state->startIndex) % 6;
        u32 next = effect->colors[(index + 1) % 6];
        u32 current = effect->colors[index];
        f32 inverse = 1.0f - blend;
        g_vectorScratch.second.vector = g_vectorScratch.third.vector;
        g_vectorScratch.first.vector.x = (colorChannel(current, 24) * unit * inverse + colorChannel(next, 24) * unit * blend) *
                                  g_vectorScratch.third.vector.x;
        g_vectorScratch.first.vector.y = (colorChannel(current, 16) * unit * inverse + colorChannel(next, 16) * unit * blend) *
                                  g_vectorScratch.third.vector.y;
        g_vectorScratch.first.vector.z = (colorChannel(current, 8) * unit * inverse + colorChannel(next, 8) * unit * blend) *
                                  g_vectorScratch.third.vector.z;
        g_vectorScratch.first.vector.w = (colorChannel(current, 0) * unit * inverse + colorChannel(next, 0) * unit * blend) *
                                  g_vectorScratch.third.vector.w;
        return;
    }
    u32 color = effect->colors[state->startIndex];
    g_vectorScratch.second.vector.x = colorChannel(color, 24) * unit;
    g_vectorScratch.second.vector.y = colorChannel(color, 16) * unit;
    g_vectorScratch.second.vector.z = colorChannel(color, 8) * unit;
    g_vectorScratch.second.vector.w = colorChannel(color, 0) * unit;
    g_vectorScratch.first.vector.x = g_vectorScratch.first.vector.x * colorChannel(color, 24) * unit;
    g_vectorScratch.first.vector.y = g_vectorScratch.first.vector.y * colorChannel(color, 16) * unit;
    g_vectorScratch.first.vector.z = g_vectorScratch.first.vector.z * colorChannel(color, 8) * unit;
    g_vectorScratch.first.vector.w = g_vectorScratch.first.vector.w * colorChannel(color, 0) * unit;
}
