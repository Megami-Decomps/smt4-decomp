/* NON_MATCHING: same sample; retail branches directly on `first key > time` and keeps copies of the time for the later compares and the guess multiply, this build inverts the first test and computes the last-key pointer later. */
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

/* Samples the curve at `time`: finds the last key not after it (searching from an interpolated
 * guess) and blends linearly with the next key. */
extern "C" f32 FUN_003f946c(const Curve *curve, f32 time)
{
    const CurveKey *last = &curve->keys[curve->count - 1];
    const CurveKey *key = curve->keys;
    f32 fraction;

    if (key->time <= time) {
        key = last;
        if (key->time > time) {
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
        }
    }
    if (key->time == time || key == last) {
        return key->value;
    }
    fraction = (time - key->time) / (key[1].time - key->time);
    return key->value * (1.0f - fraction) + key[1].value * fraction;
}
