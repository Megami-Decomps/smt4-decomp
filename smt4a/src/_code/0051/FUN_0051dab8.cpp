/* NON_MATCHING: the lookup is an inlined helper as in its byte-key sibling FUN_0051da34 (retail's writeback load); IDENTICAL under -O2 -Otime (as FUN_0051da34 and the smt4 twins; not applied: the neighbouring curve units match at the default flags (animCurveFindPackedKey, resourceGetPackedSampleFloat) or get worse with it (frameCurveFindKeyAtTime)), at -O3 armcc numbers the curve copy and the tick r1/r2 where retail uses r2/r1. */
#include "common.h"

struct CurveKey {
    /* 0x00 */ u16 time;
    /* 0x02 */ s16 value;
};

struct Curve {
    /* 0x00 */ u16 count;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ f32 scale;       /* spreads the first guess over the keys */
    /* 0x08 */ CurveKey keys[1];
};

/* Value of the last key whose time is not after `time`, searched from an interpolated guess. */
static __inline s32 curveLookup(const Curve *curve, f32 time)
{
    u32 tick = (u32)time;
    const CurveKey *key = curve->keys;

    if (key->time <= tick) {
        key = &curve->keys[curve->count - 1];
        if (tick < key->time) {
            key = &curve->keys[(u32)(curve->scale * ((f32)(s32)(curve->count - 1) * time))];
            if (tick < key->time) {
                do {
                    key--;
                } while (key->time > tick);
            } else {
                do {
                    key++;
                } while (tick >= key->time);
                key--;
            }
        }
    }
    return key->value;
}

extern "C" s32 FUN_0051dab8(const Curve *curve, f32 time)
{
    return curveLookup(curve, time);
}
