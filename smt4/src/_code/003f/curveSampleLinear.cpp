#include "common.h"

struct CurveKey {
    /* 0x00 */ f32 time;
    /* 0x04 */ f32 value;
    /* 0x08 */ f32 unk08;
};

struct Curve {
    /* 0x00 */ u16 count;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ f32 scale;       /* spreads the first guess over the keys */
    /* 0x08 */ CurveKey keys[1];
};

/* Finds the last key not after `time`, searching from an interpolated guess (the same search as curveSampleLinear16's). */
static const CurveKey *curveFindKey(const Curve *curve, f32 time)
{
    const CurveKey *key = curve->keys;
    if (key->time > time) {
        return key;
    }
    key = &curve->keys[curve->count - 1];
    if (key->time <= time) {
        return key;
    }
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

/* Samples the curve at `time`, blending linearly with the next key. */
extern "C" f32 curveSampleLinear(const Curve *curve, f32 time)
{
    const CurveKey *key = curveFindKey(curve, time);
    const CurveKey *last = &curve->keys[curve->count - 1];
    f32 keyTime = key->time;
    if (keyTime == time || key == last) {
        return key->value;
    }
    const CurveKey *next = key + 1;
    f32 nextTime = next->time;
    f32 fraction = (time - keyTime) / (nextTime - keyTime);
    return key->value * (1.0f - fraction) + next->value * fraction;
}
