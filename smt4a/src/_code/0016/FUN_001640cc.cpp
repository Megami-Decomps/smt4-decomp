/* NON_MATCHING: The fourth integer argument is saved before the VFP argument copies instead of after them. */
#include "common.h"

extern "C" {
extern u32 DAT_005b3ce8;
void FUN_0019ea00(void);
void FUN_00186244(u32 first, u32 second, u32 third, u32 fourth, f32 value0, f32 value1, f32 value2, f32 value3, f32 value4, f32 value5, f32 value6, f32 value7, f32 value8);
void effectSubmitDefaultParameters(void);

/* Substitutes shared defaults for the integer parameters and forwards the complete scalar block. */
void FUN_001640cc(u32 first, u32 second, u32 third, u32 fourth, f32 value0, f32 value1, f32 value2, f32 value3, f32 value4, f32 value5, f32 value6, f32 value7, f32 value8)
{
    if (first == 0) first = DAT_005b3ce8;
    if (second == 0) second = DAT_005b3ce8;
    if (third == 0) third = DAT_005b3ce8;
    if (fourth == 0) fourth = DAT_005b3ce8;
    FUN_0019ea00();
    FUN_00186244(first, second, third, fourth, value0, value1, value2, value3, value4, value5, value6, value7, value8);
    effectSubmitDefaultParameters();
}
}
