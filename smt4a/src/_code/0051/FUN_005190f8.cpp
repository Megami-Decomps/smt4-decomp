/* NON_MATCHING: VFP register allocation and the order of the frame-scale and key loads differ;
 * control flow and arithmetic match. */
#include "common.h"

/* One curve key (6 bytes): a frame and a little-endian 16-bit value. */
struct CurveKey {
    /* 0x00 */ u8 frame;
    /* 0x01 */ u8 valueLow;
    /* 0x02 */ u8 valueHigh;
    /* 0x03 */ u8 unk03[3];
};

struct KeyCurve {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0e */ u16 keyCount;
    /* 0x10 */ f32 valueScale;
    /* 0x14 */ f32 valueOffset;
    /* 0x18 */ f32 frameScale;
    /* 0x1c */ u8 unk1c[4];
    /* 0x20 */ CurveKey *keys;
};

extern "C" {
CurveKey *FUN_0051c338(KeyCurve *curve, f32 time);

/* Evaluates the curve at `time`, interpolating linearly between the surrounding keys. */
f32 FUN_005190f8(KeyCurve *curve, f32 time)
{
    CurveKey *key = FUN_0051c338(curve, time);
    CurveKey *last = &curve->keys[curve->keyCount - 1];
    f32 keyTime = key->frame * curve->frameScale;
    if (keyTime == time || key == last) {
        return (key->valueLow + (key->valueHigh << 8)) * curve->valueScale + curve->valueOffset;
    }
    CurveKey *next = key + 1;
    f32 t = (time - keyTime) / (next->frame * curve->frameScale - keyTime);
    f32 from = (key->valueLow + (key->valueHigh << 8)) * curve->valueScale + curve->valueOffset;
    f32 to = (next->valueLow + (next->valueHigh << 8)) * curve->valueScale + curve->valueOffset;
    return from * (1.0f - t) + to * t;
}
}
