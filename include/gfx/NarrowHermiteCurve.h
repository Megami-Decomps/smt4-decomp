#ifndef GFX_NARROW_HERMITE_CURVE_H
#define GFX_NARROW_HERMITE_CURVE_H
#include "shard/AnimCurve.h"

struct NarrowHermiteCurve {
    /* 0x00 */ u16 keyCount;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 keysPerUnit;
    /* 0x08 */ f32 valueScale;
    /* 0x0C */ f32 valueBase;
    /* 0x10 */ f32 frameLength;
    /* 0x14 */ PackedAnimKeyNarrow keys[1];
};
typedef char NarrowHermiteCurveLayoutCheck[
    offsetof(NarrowHermiteCurve, valueScale) == 8 &&
    offsetof(NarrowHermiteCurve, valueBase) == 12 &&
    offsetof(NarrowHermiteCurve, frameLength) == 16 &&
    offsetof(NarrowHermiteCurve, keys) == 20 &&
    sizeof(NarrowHermiteCurve) == 24 ? 1 : -1];
#endif
