#include "common.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {
extern u32 g_defaultDrawColor;
void gpuSubmitDefaultPacket();
void gpuSubmitFloatColoredQuad(u32 first, u32 second, u32 third, u32 fourth,
                  f32 value0, f32 value1, f32 value2, f32 value3,
                  f32 value4, f32 value5, f32 value6, f32 value7, f32 value8);
void effectSubmitDefaultParameters();

/* The fourth colour is declared after the first four floats: ABI-equal (r3), and it is the order retail copies the arguments in. */
void gfxDrawQuadFourColors(u32 first, u32 second, u32 third,
                  f32 firstValue, f32 secondValue, f32 thirdValue, f32 fourthValue,
                  u32 fourth, f32 lastValue)
{
    if (first == 0) {
        first = g_defaultDrawColor;
    }
    if (second == 0) {
        second = g_defaultDrawColor;
    }
    if (third == 0) {
        third = g_defaultDrawColor;
    }
    if (fourth == 0) {
        fourth = g_defaultDrawColor;
    }
    gpuSubmitDefaultPacket();
    gpuSubmitFloatColoredQuad(first, second, third, fourth, firstValue, secondValue,
                  thirdValue, fourthValue, 0.0f, 0.0f, 0.0f, 0.0f, lastValue);
    effectSubmitDefaultParameters();
}
}
