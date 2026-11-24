#ifndef GFX_LINEARCURVE_H
#define GFX_LINEARCURVE_H

#include "common.h"
#include <stddef.h>

/* The scalar key stores time and value; the wider format adds a third word. */
struct LinearCurveKey {
    /* 0x00 */ f32 time;
    /* 0x04 */ f32 value;
};

struct WideLinearCurveKey {
    /* 0x00 */ f32 time;
    /* 0x04 */ f32 value;
    /* 0x08 */ f32 unk08;
};

/* A curve header followed in memory by `count` sorted keys. */
template<class Key>
struct LinearCurve {
    /* 0x00 */ u16 count;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ f32 scale; /* spreads the first guess over the keys */
    /* 0x08 */ Key keys[1];
};

typedef char LinearCurveLayoutCheck[sizeof(LinearCurveKey) == 8 && sizeof(WideLinearCurveKey) == 12 &&
    offsetof(LinearCurve<LinearCurveKey>, keys) == 8 && offsetof(LinearCurve<WideLinearCurveKey>, keys) == 8 ? 1 : -1];

/* Finds the last key not after `time`, starting the search from an interpolated guess. */
template<class Key>
static __inline const Key *linearCurveFindKey(const LinearCurve<Key> *curve, f32 time)
{
    const Key *key = curve->keys;
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

#endif
