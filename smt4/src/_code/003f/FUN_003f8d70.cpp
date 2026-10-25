/* NON_MATCHING: pointer-return key lookup and positive float guards match; retail still copies time into s1 before the final-key test and interpolation while this build reuses s0. */
#include "common.h"

struct CurveKey {
    /* 0x00 */ f32 time;
    /* 0x04 */ f32 value;
};

struct Curve {
    /* 0x00 */ u16 count;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ f32 scale;       /* spreads the first guess over the keys */
    /* 0x08 */ CurveKey keys[1];
};

/* Locate the last key not after time, using the scale as an initial guess. */
static inline const CurveKey *findCurveKey(const Curve *curve, f32 time)
{
    const CurveKey *key = curve->keys;
    if (key->time > time)
        return key;
    key = &curve->keys[curve->count - 1];
    if (key->time <= time)
        return key;
    key = &curve->keys[(u32)(curve->scale * ((f32)(s32)(curve->count - 1) * time))];
    if (key->time > time) {
        do {
            key--;
        } while (key->time > time);
    } else {
        do {
            key++;
        } while (key->time <= time);
        key--;
    }
    return key;
}

/* Value of the last key whose time is not after time. */
extern "C" f32 FUN_003f8d70(const Curve *curve, f32 time)
{
    return findCurveKey(curve, time)->value;
}
