/* NON_MATCHING: VFP scheduling differs and infinity's runtime invalid division folds to a NaN constant. */
#include "common.h"

extern "C" {
void __set_errno(s32);
f32 FUN_003eb2c8(s32 *, f32);

// Reduce to a quadrant and evaluate the short sine or cosine polynomial.
f32 FUN_00282390(f32 value)
{
    union FloatEncoding { f32 value; u32 bits; } encoding;
    encoding.value = value;
    s32 quadrant;
    if ((encoding.bits << 1) < 0x7E921FB6) {
        quadrant = (encoding.bits << 1) < 0x73000000 ? -1 : 0;
    } else if ((encoding.bits & 0x7FFFFFFF) < 0x46490E49) {
        f32 halfPiUnits = value * 0.63661974668502808f;
        f32 multiple;
        if (encoding.bits & 0x80000000)
            multiple = (halfPiUnits - 8388608.0f) + 8388608.0f;
        else
            multiple = (halfPiUnits + 8388608.0f) - 8388608.0f;
        quadrant = static_cast<s32>(multiple) & 3;
        value = (((value - multiple * 1.5703125f) - multiple * 0.00048375129699707031f) -
                 multiple * 7.5495336204767227e-8f) - multiple * 2.5633440682570896e-12f;
    } else {
        value = FUN_003eb2c8(&quadrant, value);
    }

    if (quadrant < 0) {
        encoding.value = value;
        if ((encoding.bits << 1) < 0xFF000000)
            return 1.0f;
        if ((encoding.bits << 1) > 0xFF000000)
            return value + value;
        __set_errno(1);
        return 0.0f / 0.0f;
    }

    f32 squared = value * value;
    if (quadrant & 1) {
        f32 polynomial = 0.0083319786936044693f - squared * 0.000194956359337084f;
        polynomial = -0.16666650772094727f + squared * polynomial;
        f32 sine = value + value * (squared * polynomial);
        return (quadrant & 2) ? sine : -sine;
    }
    f32 polynomial = 0.041656292974948883f + squared * -0.0013597822980955243f;
    polynomial = -0.49999895691871643f + squared * polynomial;
    f32 cosine = 1.0f + squared * polynomial;
    return (quadrant & 2) ? -cosine : cosine;
}
}
