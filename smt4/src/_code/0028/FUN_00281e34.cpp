/* NON_MATCHING: the ARM libm atan2f, written out: retail's special-case ladder works on the raw bit patterns with conditional execution and keeps the polynomial constants in VFP registers loaded in a fixed order, which armcc does not reproduce from this source. */
#include "common.h"

extern "C" {
s32 ARM_fpclassifyf(f32 value);
void FUN_002a438c(void); /* sets errno for an underflowed result */

static inline u32 bitsOf(f32 value)
{
    union { f32 f; u32 u; } v;
    v.f = value;
    return v.u;
}
static inline f32 floatOf(u32 bits)
{
    union { f32 f; u32 u; } v;
    v.u = bits;
    return v.f;
}

/* atan2f(y, x). */
f32 FUN_00281e34(f32 y, f32 x)
{
    u32 yBits = bitsOf(y);
    u32 xBits = bitsOf(x);

    /* Both operands in the ordinary exponent range go straight to the core. */
    if (!((yBits << 1) + 0xE8000000u < 0xE5000000u && (xBits << 1) + 0xE8000000u < 0xE5000000u)) {
        /* A NaN operand propagates. */
        if ((yBits << 1) > 0xFF000000u || (xBits << 1) > 0xFF000000u)
            return y + x;
        if (((yBits | xBits) << 1) == 0) {
            /* atan2(+-0, +-0): treat x as an infinity of its sign. */
            xBits |= 0x7F800000u;
            x = floatOf(xBits);
        } else if ((yBits << 1) == 0xFF000000u && (xBits << 1) == 0xFF000000u) {
            /* Both infinite: use unit operands of the same signs. */
            y = floatOf(yBits & ~0x40000000u);
            x = floatOf(xBits & ~0x40000000u);
        } else if ((yBits << 1) == 0xFF000000u || (xBits << 1) == 0) {
            /* y infinite or x zero: the angle is +-pi/2. */
            y = floatOf(yBits | 0x7F800000u);
            x = floatOf(xBits & 0x80000000u);
        } else if (!(((xBits << 1) ^ (yBits << 1)) & 0x80000000u)) {
            /* Subnormal or huge operands: rescale both. */
            f32 scale = (s32)(xBits << 1) >= 0 ? 4294967296.0f : 2.3283064e-10f;
            y *= scale;
            x *= scale;
        }
        yBits = bitsOf(y);
        xBits = bitsOf(x);
    }

    s32 exponentGap = (s32)((yBits << 1) >> 24) - (s32)((xBits << 1) >> 24);
    if (exponentGap > 27)
        return (yBits & 0x80000000u) ? -1.5707963f : 1.5707963f;
    if (exponentGap < -26) {
        if (!(xBits & 0x80000000u)) {
            f32 quotient = y / x;
            if (ARM_fpclassifyf(quotient) == 4)
                FUN_002a438c();
            return quotient;
        }
        return (yBits & 0x80000000u) ? -3.1415927f : 3.1415927f;
    }

    /* Reduce to a ratio of magnitude at most one; `hi` + `lo` is the angle offset of the quadrant. */
    f32 numerator;
    f32 denominator;
    f32 hi;
    f32 lo;
    u32 numeratorBits;
    u32 denominatorBits;
    if ((yBits << 1) > (xBits << 1)) {
        /* |y| > |x|: atan2(y, x) = +-pi/2 - atan(x / y). */
        numerator = x;
        denominator = -y;
        numeratorBits = xBits;
        denominatorBits = yBits ^ 0x80000000u;
        hi = floatOf((yBits & 0x80000000u) ? 0xBFC90000u : 0x3FC90000u);
        lo = floatOf((yBits & 0x80000000u) ? 0xB9FDAA22u : 0x39FDAA22u);
    } else {
        numerator = y;
        denominator = x;
        numeratorBits = yBits;
        denominatorBits = xBits;
        if (!(xBits & 0x80000000u)) {
            hi = 0.0f;
            lo = 0.0f;
        } else {
            /* x < 0: the angle is offset by +-pi. */
            hi = floatOf((yBits & 0x80000000u) ? 0xC0490000u : 0x40490000u);
            lo = floatOf((yBits & 0x80000000u) ? 0xBA7DAA22u : 0x3A7DAA22u);
        }
    }

    /* A ratio close to one: split off atan(1/2) (hi + lo = 0x3EED6000 + 0x37CE0AC3). */
    f32 ratio;
    if (((denominatorBits - numeratorBits) << 1) < 0x01000000u) {
        f32 half;
        if ((numeratorBits ^ denominatorBits) & 0x80000000u) {
            half = -0.5f;
            hi -= floatOf(0x3EED6000u);
            lo -= floatOf(0x37CE0AC3u);
        } else {
            half = 0.5f;
            hi += floatOf(0x3EED6000u);
            lo += floatOf(0x37CE0AC3u);
        }
        f32 reducedNumerator = numerator - half * denominator;
        denominator = denominator + numerator * half;
        ratio = reducedNumerator / denominator;
    } else {
        ratio = numerator / denominator;
    }

    /* atan(r) = r + r^3 * P(r^2) with the minimax coefficients of retail's literal pool. */
    f32 square = ratio * ratio;
    f32 poly = floatOf(0xBD65AD2Du);
    poly = floatOf(0x3DD5B88Fu) + square * poly;
    poly = floatOf(0xBE11B50Fu) + square * poly;
    poly = floatOf(0x3E4CC861u) + square * poly;
    poly = floatOf(0xBEAAAAA8u) + square * poly;
    return (lo + (ratio * square) * poly + ratio) + hi;
}

} /* extern "C" */
