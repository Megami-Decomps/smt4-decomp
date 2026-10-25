/* NON_MATCHING: The fourth integer argument is saved before the VFP argument copies instead of after them. */
#include "common.h"

extern "C" {
extern const u32 *DAT_00464c40;
void gpuSubmitDefaultPacket(void);
void FUN_002b13d8(const u32 *first, const u32 *second, const u32 *third, const u32 *fourth, f32 value0, f32 value1, f32 value2, f32 value3, f32 value4, f32 value5, f32 value6, f32 value7, f32 value8);
void submitDefaultFloatParameters(void);

/* Substitutes shared defaults for the integer parameters and forwards the complete scalar block. */
void FUN_002c1ac8(const u32 *first, const u32 *second, const u32 *third, const u32 *fourth, f32 value0, f32 value1, f32 value2, f32 value3, f32 value4, f32 value5, f32 value6, f32 value7, f32 value8)
{
    if (first == 0) first = DAT_00464c40;
    if (second == 0) second = DAT_00464c40;
    if (third == 0) third = DAT_00464c40;
    if (fourth == 0) fourth = DAT_00464c40;
    gpuSubmitDefaultPacket();
    FUN_002b13d8(first, second, third, fourth, value0, value1, value2, value3, value4, value5, value6, value7, value8);
    submitDefaultFloatParameters();
}
}
