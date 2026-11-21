/* NON_MATCHING: the search and the interpolation now match; retail derives the last key from base + count * 16 at each use and keeps the first key's address in r3 for the early return, where this build holds the last key in r2 from the start. */
#include "common.h"

struct CurveKey {
    /* 0x00 */ f32 time;
    /* 0x04 */ f32 value;
    /* 0x08 */ f32 unk08;
    /* 0x0c */ f32 unk0c;
};

struct Curve {
    /* 0x00 */ u16 count;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 scale;
    /* 0x08 */ CurveKey keys[1];
};

/* Finds the last key not after `time`, searching from an interpolated guess (the same search as curveSampleLinear's). */
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

extern "C" {

/* Samples the keyframe curve at the given time, interpolating linearly between neighbouring keys. */
f32 FUN_003f972c(const Curve *curve, f32 time)
{
    const CurveKey *last = &curve->keys[curve->count - 1];
    const CurveKey *key = curveFindKey(curve, time);
    f32 keyTime = key->time;
    if (keyTime == time || key == last) {
        return key->value;
    }
    const CurveKey *next = key + 1;
    f32 nextTime = next->time;
    f32 fraction = (time - keyTime) / (nextTime - keyTime);
    return key->value * (1.0f - fraction) + next->value * fraction;
}

} /* extern "C" */
