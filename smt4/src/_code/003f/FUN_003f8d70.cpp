/* NON_MATCHING: same search; retail branches directly on `first key > time` and keeps a copy of the time in s1 for the later compares, this build inverts the first test and compares against s0. */
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

/* Value of the last key whose time is not after `time`, searched from an interpolated guess. */
extern "C" f32 FUN_003f8d70(const Curve *curve, f32 time)
{
    const CurveKey *key = curve->keys;

    if (key->time <= time) {
        key = &curve->keys[curve->count - 1];
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
    return key->value;
}
