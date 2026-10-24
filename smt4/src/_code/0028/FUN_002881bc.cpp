/* NON_MATCHING: early saved FP register, polynomial scheduling and constant-folded invalid result differ; strict FP mode suspected. */
#include "common.h"

extern "C" {
f32 FUN_003eb2c8(s32* quadrant, u32 bits, f32 value);
s32 __softfp ARM_fpclassifyf(f32 value);
void FUN_002a438c(void);
void __set_errno(s32 error);

f32 FUN_002881bc(f32 value)
{
    union { f32 value; u32 bits; } representation;
    representation.value = value;
    s32 quadrant;
    if ((representation.bits << 1) < 0x7E921FB6) {
        quadrant = (representation.bits << 1) < 0x73000000 ? -1 : 0;
    } else if ((representation.bits & 0x7FFFFFFF) < 0x46490E49) {
        f32 multiple = value * 0.6366197466850281f;
        if (representation.bits & 0x80000000) {
            multiple = (multiple - 8388608.0f) + 8388608.0f;
        } else {
            multiple = (multiple + 8388608.0f) - 8388608.0f;
        }
        quadrant = static_cast<s32>(multiple) & 3;
        value -= multiple * 1.5703125f;
        value -= multiple * 0.0004837512969970703f;
        value -= multiple * 7.549533620476723e-8f;
        value -= multiple * 2.5633440682570896e-12f;
    } else {
        value = FUN_003eb2c8(&quadrant, representation.bits, value);
    }
    if (quadrant < 0) {
        representation.value = value;
        u32 magnitude = representation.bits << 1;
        if (magnitude < 0xFF000000) {
            if (ARM_fpclassifyf(value) == 4) {
                FUN_002a438c();
            }
            return value;
        }
        if (magnitude > 0xFF000000) {
            return value + value;
        }
        __set_errno(1);
        return 0.0f / 0.0f;
    }
    f32 square = value * value;
    f32 polynomial = 0.0020511774346232414f + square * 0.009943420998752117f;
    polynomial = 0.025203008204698563f + square * polynomial;
    polynomial = 0.05315177142620087f + square * polynomial;
    polynomial = 0.1334274560213089f + square * polynomial;
    polynomial = 0.3333294689655304f + square * polynomial;
    f32 tangent = value + value * (polynomial * square);
    return (quadrant & 1) ? -1.0f / tangent : tangent;
}
}
