/* NON_MATCHING: retail computes the last-key address before the time compare and merges both tests (vcmp; cmpne; bne), and schedules the Hermite arguments differently. */
#include "common.h"

extern "C" {

/* A Hermite key: 12-bit frame and 20-bit value packed in one word, then the two tangents (8.8 fixed point). */
typedef struct PackedHermiteKey {
    /* 0x00 */ u32 packed;
    /* 0x04 */ s16 inSlope;
    /* 0x06 */ s16 outSlope;
} PackedHermiteKey;

typedef struct PackedHermiteCurve {
    /* 0x00 */ u16 keyCount;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ f32 valueScale;
    /* 0x0C */ f32 valueOffset;
    /* 0x10 */ f32 frameScale;
    /* 0x14 */ PackedHermiteKey keys[1];
} PackedHermiteCurve;

PackedHermiteKey *FUN_003f89f8(PackedHermiteCurve *curve, f32 time);
f32 nn_math_ARMv6_HermiteC_FAST(f32 v0, f32 t0, f32 v1, f32 t1, f32 s, f32 d);

/* Evaluates the curve at `time`, interpolating between the key at or before it and the next one. */
f32 FUN_003f9c48(PackedHermiteCurve *curve, f32 time)
{
    PackedHermiteKey *key = FUN_003f89f8(curve, time);
    f32 keyTime = curve->frameScale * (f32)(key->packed & 0xfff);
    if (keyTime != time && key != &curve->keys[curve->keyCount - 1]) {
        PackedHermiteKey *next = key + 1;
        f32 interval = curve->frameScale * (f32)(next->packed & 0xfff) - keyTime;
        return nn_math_ARMv6_HermiteC_FAST(curve->valueOffset + (f32)(key->packed >> 12) * curve->valueScale,
                                           (f32)key->outSlope * (1.0f / 256.0f),
                                           curve->valueOffset + (f32)(next->packed >> 12) * curve->valueScale,
                                           (f32)next->inSlope * (1.0f / 256.0f), time - keyTime, interval);
    }
    return curve->valueOffset + (f32)(key->packed >> 12) * curve->valueScale;
}

} /* extern "C" */
