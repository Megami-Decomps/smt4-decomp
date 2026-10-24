/* NON_MATCHING: needs `--apcs=/interwork/ropi` (the three 4-entry tables are addressed `ldr rN, [pc, #n]; add rN, pc, rN`) and the tables as symbols (DAT_0054f00c/44/54 are not mapped); the unscaled path also reuses the `vcvt.u32.f32` result directly as the bits of 2^m, which armcc only produces from integer-in-VFP-register code; retail also squares 0x70000000 at run time for the overflow result where this build folds it to +inf. */
#include "common.h"

extern "C" {

extern const f32 DAT_0054f00c[4]; // added last
extern const f32 DAT_0054f01c[4]; // the constant term
extern const f32 DAT_0054f02c[4]; // scales the polynomial
s32 __set_errno(s32 value);
f32 FUN_001c4360(void); // signals underflow
s32 ARM_fpclassifyf(f32 value);

union ExpFloatBits {
    f32 f;
    u32 u;
};

static const s32 kRangeError = 2;

// e^x in single precision. x is split as x = n * ln(2) / 4 + r; the quarter-octave factor comes from three
// 4-entry tables and 2^(n >> 2) is built directly from its exponent bits. Inputs near the limits scale
// in two steps so the intermediate does not overflow; overflow and underflow set errno.
f32 FUN_001a9464(f32 x)
{
    ExpFloatBits input;
    input.f = x;
    const u32 bits = input.u;
    bool twoStep = false;
    if (bits * 2 + 0x99000000 > 0x1e500000) {
        if ((((~bits) << 1) >> 24) == 0) {
            // infinity or NaN: exp(-inf) is 0, exp(+inf) is +inf, NaN stays NaN
            if (bits == 0xff800000) {
                return 0.0f;
            }
            return x + x;
        }
        if (bits * 2 < 0x67000000) {
            return 1.0f; // |x| < 2^-24
        }
        if (bits * 2 <= 0x85a00000) {
            twoStep = true;
        } else {
            __set_errno(kRangeError);
            if ((bits & 0x80000000) == 0) {
                const f32 huge = 1.58456325e29f;
                return huge * huge; // overflow to +inf
            }
            return FUN_001c4360(); // underflow
        }
    }
    const f32 half = (bits & 0x80000000) == 0 ? 0.5f : -0.5f;
    const s32 n = (s32)(half + x * 5.77078f); // x * 4 / ln(2), rounded to nearest
    const u32 quarter = n & 3;
    const f32 count = (f32)n;
    const f32 r = (x - count * 0.17327881f) - count * 7.986546e-06f;
    const f32 polynomial =
        (0.99999994f + r * (0.49999997f + r * (0.16672924f + r * 0.04168231f))) * r;
    const f32 mantissa = (DAT_0054f01c[quarter] + DAT_0054f02c[quarter] * polynomial) + DAT_0054f00c[quarter];
    const s32 exponent = n >> 2;
    if (!twoStep) {
        ExpFloatBits scale;
        scale.u = (u32)((f32)exponent * 8388608.0f + 1.0653532e9f);
        return scale.f * mantissa;
    }
    const s32 firstHalf = exponent / 2;
    const s32 secondHalf = exponent - firstHalf;
    ExpFloatBits first;
    ExpFloatBits second;
    first.u = 0x3f800000 + (firstHalf << 23);
    second.u = 0x3f800000 + (secondHalf << 23);
    const f32 result = second.f * (first.f * mantissa);
    ExpFloatBits resultBits;
    resultBits.f = result;
    if (resultBits.u == 0) {
        __set_errno(kRangeError);
        return FUN_001c4360();
    }
    if (resultBits.u == 0x7f800000) {
        __set_errno(kRangeError);
        const f32 huge = 1.58456325e29f;
        return huge * huge;
    }
    if (ARM_fpclassifyf(result) == 4) {
        FUN_001c4360(); // subnormal: signal underflow, keep the value
    }
    return result;
}

} /* extern "C" */
