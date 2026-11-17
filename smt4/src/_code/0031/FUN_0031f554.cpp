/* NON_MATCHING: VFP scheduling differs: retail unpacks both palette colors into s-registers before blending and keeps the 1/255 constant in s16; the build interleaves the byte unpack with the blend (shorter, fewer rows). */
#include "common.h"

struct EffectVec4 {
    f32 x, y, z, w;
};

/* Scratch values shared by the effect drawing code (see effectNodeUpdateTransform). */
extern struct EffectScratch {
    u8 unk00[0x100];
    EffectVec4 modulate;    // 0x100: current color scale
    EffectVec4 tint;        // 0x110
    EffectVec4 saved;       // 0x120
} g_vectorScratch;

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
extern "C" void FUN_0031f554(ColorCycleEffect *effect, ColorCycleState *state, u32 frame)
{
    const f32 unit = 0.003921569f;
    s32 perColor = effect->length / 6;
    if (perColor > 0) {
        g_vectorScratch.saved = g_vectorScratch.modulate;
        s32 cycle = frame / perColor;
        s32 within = frame % perColor;
        f32 blend = static_cast<f32>(within) / static_cast<f32>(perColor);
        s32 index = (cycle + state->startIndex) % 6;
        u32 next = effect->colors[(index + 1) % 6];
        u32 current = effect->colors[index];
        f32 inverse = 1.0f - blend;
        g_vectorScratch.tint = g_vectorScratch.saved;
        g_vectorScratch.modulate.x = (colorChannel(current, 24) * unit * inverse + colorChannel(next, 24) * unit * blend) *
                                  g_vectorScratch.saved.x;
        g_vectorScratch.modulate.y = (colorChannel(current, 16) * unit * inverse + colorChannel(next, 16) * unit * blend) *
                                  g_vectorScratch.saved.y;
        g_vectorScratch.modulate.z = (colorChannel(current, 8) * unit * inverse + colorChannel(next, 8) * unit * blend) *
                                  g_vectorScratch.saved.z;
        g_vectorScratch.modulate.w = (colorChannel(current, 0) * unit * inverse + colorChannel(next, 0) * unit * blend) *
                                  g_vectorScratch.saved.w;
        return;
    }
    u32 color = effect->colors[state->startIndex];
    g_vectorScratch.tint.x = colorChannel(color, 24) * unit;
    g_vectorScratch.tint.y = colorChannel(color, 16) * unit;
    g_vectorScratch.tint.z = colorChannel(color, 8) * unit;
    g_vectorScratch.tint.w = colorChannel(color, 0) * unit;
    g_vectorScratch.modulate.x = g_vectorScratch.modulate.x * colorChannel(color, 24) * unit;
    g_vectorScratch.modulate.y = g_vectorScratch.modulate.y * colorChannel(color, 16) * unit;
    g_vectorScratch.modulate.z = g_vectorScratch.modulate.z * colorChannel(color, 8) * unit;
    g_vectorScratch.modulate.w = g_vectorScratch.modulate.w * colorChannel(color, 0) * unit;
}
