/* NON_MATCHING: retail was built --apcs=/interwork/ropi (table reached by `ldr r4, [pc, #n]; add r4, pc, r4`, a REL32 literal the target object holds without a symbol) and sums the three 32x32 products with umull + adds/adcs/adc; this build has no ropi flag and fuses the sums into umlal. */
#include "common.h"

extern "C" {

/* 2/pi as a bit string, one word of zero padding in front. */
extern const u32 g_twoOverPiBits[8];

/* Reduces the large single-precision `value` (raw bits `bits`, also passed as `value`) modulo pi/2 with
 * the 2/pi bit string (Payne-Hanek): returns the remainder and stores the quadrant in *quadrant
 * (-1 for infinity and NaN, which return `value` unchanged). The fraction of value * 2/pi is carried in
 * three floats and multiplied by pi/2 split into two parts. */
f32 FUN_003eb2c8(s32 *quadrant, u32 bits, f32 value)
{
    if ((bits << 1) >= 0xFF000000) {
        *quadrant = -1;
        return value;
    }
    u32 mantissa = 0x80000000 | (bits << 8);
    s32 position = static_cast<s32>((bits << 1) >> 24) - 120;
    u32 shift = position & 31;
    const u32 *window = &g_twoOverPiBits[position >> 5];
    u32 w0 = (window[0] << shift) | (window[1] >> (32 - shift));
    u32 w1 = (window[1] << shift) | (window[2] >> (32 - shift));
    u32 w2 = (window[2] << shift) | (window[3] >> (32 - shift));
    u64 p0 = static_cast<u64>(w0) * mantissa;
    u64 p1 = static_cast<u64>(w1) * mantissa;
    u64 p2 = static_cast<u64>(w2) * mantissa;
    // 96-bit product (hi:mid:lo) of the mantissa and the bits of 2/pi that matter.
    u64 sum = p1 + (p2 >> 32);
    u64 top = p0 + (sum >> 32);
    u32 lo = static_cast<u32>(sum);
    u32 mid = static_cast<u32>(top);
    u32 hi = static_cast<u32>(top >> 32);
    f32 loPart = static_cast<f32>(lo);
    f32 topPart = static_cast<f32>(static_cast<s32>((hi << 26) | ((mid >> 19) << 13)));
    f32 midPart = static_cast<f32>(mid << 13);
    *quadrant = (hi + 32) >> 6;
    midPart *= 1.9073486328125e-06f;
    loPart *= 3.637978807091713e-12f;
    f32 fraction = topPart + midPart + loPart;
    union {
        f32 value;
        u32 bits;
    } split;
    split.value = fraction;
    split.bits = (split.bits + 0x800) & 0xFFFFF000;
    f32 fractionHigh = split.value;
    f32 fractionLow = loPart - (fractionHigh - topPart - midPart);
    f32 result = fractionHigh * 1.12649703e-13f + fractionLow * 3.6572953e-10f + fractionHigh * 3.6561687e-10f;
    if (bits & 0x80000000) {
        *quadrant = 0x10000000 - *quadrant;
        return -result;
    }
    return result;
}

} /* extern "C" */
