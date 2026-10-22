/* NON_MATCHING: float narrowing keeps fewer saved registers and schedules exponent tests differently. */
/* Narrows a parsed double to float, reporting underflow and saturation overflow. */
#include "common.h"
#include <math.h>

extern "C" {
void FUN_00101598(s32 error, s32 detail);
void __set_errno(s32 error);
__softfp f64 FUN_001d2978(f64 value, s32 *exponent);

void FUN_002e5550(f32 *output, const f64 *input)
{
    f64 inputValue = *input;
    s32 exponent;
    FUN_001d2978(inputValue, &exponent);
    exponent += 0x7E;
    f32 value;
    if (exponent <= 0 && inputValue != 0.0) {
        value = (f32)inputValue;
        if (value == 0.0f) {
            FUN_00101598(2, 0);
        }
    } else if (exponent < 0xFF) {
        value = (f32)inputValue;
    } else {
        __set_errno(2);
        value = inputValue >= 0.0 ? (f32)HUGE_VAL : -(f32)HUGE_VAL;
    }
    *output = value;
}
}
