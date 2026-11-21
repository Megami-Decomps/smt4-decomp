#include "common.h"
#include "gfx/ColoredQuad.h"

extern "C" {
extern const EffectColor *g_defaultDrawColor;
void gpuSubmitDefaultPacket();
void gpuSubmitFloatColoredQuad(const EffectColor *first, const EffectColor *second, const EffectColor *third,
                  const EffectColor *fourth, f32 value0, f32 value1, f32 value2, f32 value3,
                  f32 value4, f32 value5, f32 value6, f32 value7, f32 value8);
void effectSubmitDefaultParameters();

/* Draws a quad with one colour per corner, substituting the default colour for missing corners, then
 * restores the default float parameters. */
void gfxDrawQuadFourColors(f32 x, f32 y, f32 width, f32 height, const EffectColor *first, const EffectColor *second,
                           const EffectColor *third, const EffectColor *fourth, f32 depth)
{
    if (first == NULL) {
        first = g_defaultDrawColor;
    }
    if (second == NULL) {
        second = g_defaultDrawColor;
    }
    if (third == NULL) {
        third = g_defaultDrawColor;
    }
    if (fourth == NULL) {
        fourth = g_defaultDrawColor;
    }
    gpuSubmitDefaultPacket();
    gpuSubmitFloatColoredQuad(first, second, third, fourth, x, y, width, height, 0.0f, 0.0f, 0.0f, 0.0f, depth);
    effectSubmitDefaultParameters();
}
}
