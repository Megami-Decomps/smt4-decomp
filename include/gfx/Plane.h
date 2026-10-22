#ifndef GFX_PLANE_H
#define GFX_PLANE_H
#include "common.h"

// Test a small IEEE-754 magnitude without a floating-point comparison.
static __inline bool planeComponentIsNegligible(f32 value)
{
    union {
        f32 value;
        u32 bits;
        s32 signedBits;
    } component;
    component.value = value;
    const u32 negativeEpsilonBits = 0xB8D1B717;
    const s32 positiveEpsilonBits = 0x38D1B717;
    return component.bits < negativeEpsilonBits && component.signedBits < positiveEpsilonBits;
}

#endif
