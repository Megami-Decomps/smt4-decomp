/* NON_MATCHING: key/value-load scheduling, saved registers, VFP ordering and final tail call differ. */
#include "common.h"

extern "C" {
const u8 *FUN_0051c338(const void *curve, f32 frame);
f32 nn_math_ARMv6_HermiteC_FAST(f32 first, f32 firstSlope, f32 second, f32 secondSlope, f32 elapsed, f32 duration);

f32 FUN_00519740(const void *data, f32 frame)
{
    struct CurveView {
        u8 prefix[0xE];
        u16 keyCount;
        f32 valueScale, valueOffset, timeScale;
        u32 reserved1C;
        const u8 *keys;
    };
    const CurveView *curve = static_cast<const CurveView *>(data);
    const u8 *key = FUN_0051c338(data, frame);
    f32 time = (f32)(u32)key[0] * curve->timeScale;
    u32 first = key[1] + ((u32)key[2] << 8);
    if (time == frame || key == curve->keys + curve->keyCount * 6 - 6)
        return curve->valueOffset + (f32)first * curve->valueScale;
    const u8 *next = key + 6;
    u32 second = next[1] + ((u32)next[2] << 8);
    s32 firstSlope = (s8)key[5] * 16 + (key[4] >> 4);
    s32 secondSlope = next[3] + (s8)(next[4] << 4) * 16;
    return nn_math_ARMv6_HermiteC_FAST(
        curve->valueOffset + (f32)first * curve->valueScale, (f32)firstSlope * 0.03125f,
        curve->valueOffset + (f32)second * curve->valueScale, (f32)secondSlope * 0.03125f,
        frame - time, (f32)(u32)next[0] * curve->timeScale - time);
}
}
