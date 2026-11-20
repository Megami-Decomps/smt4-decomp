#include "common.h"
#include "code/Code002b.h"

extern "C" {
extern u32 g_defaultDrawColor;
void gpuSubmitDefaultPacket(void);
void gpuSubmitFloatColoredQuad(u32 first, u32 second, u32 third, u32 fourth, f32 value0, f32 value1, f32 value2, f32 value3, f32 value4, f32 value5, f32 value6, f32 value7, f32 value8);
void submitDefaultFloatParameters(void);

/* Substitutes the shared default for empty integer parameters and submits the scalar parameter block. */
/* The four floats are declared before the colours (ABI-equal: r0-r3 and s0-s4): the order its callers schedule the arguments in. */
void FUN_002b7638(f32 value0, f32 value1, f32 value2, f32 value3, u32 first, u32 second, u32 third, u32 fourth, f32 value4)
{
    if (first == 0) first = g_defaultDrawColor;
    if (second == 0) second = g_defaultDrawColor;
    if (third == 0) third = g_defaultDrawColor;
    if (fourth == 0) fourth = g_defaultDrawColor;
    gpuSubmitDefaultPacket();
    gpuSubmitFloatColoredQuad(first, second, third, fourth, value0, value1, value2, value3, 0.0f, 0.0f, 0.0f, 0.0f, value4);
    submitDefaultFloatParameters();
}
}
