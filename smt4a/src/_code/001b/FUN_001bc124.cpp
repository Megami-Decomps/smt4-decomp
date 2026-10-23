/* NON_MATCHING: sine polynomial and reduction restored; fast FP mode folds the invalid infinity division and VFP scheduling differs. */
#include "common.h"

extern "C" {
s32 ARM_fpclassifyf(u32 bits);
void FUN_001c4360();
s32 __set_errno(s32 error);
f32 FUN_001c4370(s32 *quadrant, f32 value);

// Evaluate sine with quadrant reduction, short polynomials, and IEEE exceptional cases.
f32 FUN_001bc124(f32 value)
{
    union FloatWord { f32 value; u32 bits; } word;
    word.value = value;
    s32 quadrant;
    if ((word.bits << 1) < 0x7E921FB6) {
        quadrant = (word.bits << 1) < 0x73000000 ? -1 : 0;
    } else if ((word.bits & 0x7FFFFFFF) < 0x46490E49) {
        f32 quotient = value * 0.6366197467f;
        f32 multiple;
        if ((word.bits & 0x80000000) != 0)
            multiple = (quotient - 8388608.0f) + 8388608.0f;
        else
            multiple = (quotient + 8388608.0f) - 8388608.0f;
        quadrant = (s32)multiple & 3;
        value = (((value - multiple * 1.5703125f) - multiple * 0.000483751297f)
                    - multiple * 7.54953362e-08f) - multiple * 2.563344068e-12f;
    } else {
        value = FUN_001c4370(&quadrant, value);
    }
    if (quadrant < 0) {
        word.value = value;
        u32 magnitude = word.bits << 1;
        if (magnitude < 0xFF000000) {
            if (ARM_fpclassifyf(word.bits) == 4)
                FUN_001c4360();
            return value;
        }
        if (magnitude == 0xFF000000) {
            __set_errno(1);
            return 0.0f / 0.0f;
        }
        return value + value;
    }
    f32 squared = value * value;
    f32 result;
    if ((quadrant & 1) != 0) {
        result = ((squared * -0.001359782298f + 0.04165629297f) * squared
                    - 0.4999989569f) * squared + 1.0f;
    } else {
        f32 correction = (-0.1666665077f + squared * (0.008331978694f - squared * 0.0001949563593f)) * squared;
        result = value + value * correction;
    }
    return (quadrant & 2) != 0 ? -result : result;
}
}
