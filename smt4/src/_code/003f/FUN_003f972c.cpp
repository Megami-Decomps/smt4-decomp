/* NON_MATCHING: retail copies the time into a second register before each key comparison and derives the last key from base + count * 16 late; scheduling and register allocation differ. */
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

extern "C" {

/* Samples the keyframe curve at the given time, interpolating linearly between neighbouring keys. */
f32 FUN_003f972c(const Curve *curve, f32 time)
{
    const CurveKey *first = &curve->keys[0];
    const CurveKey *last = &curve->keys[curve->count - 1];
    const CurveKey *key;
    if (first->time > time) {
        key = first;
    } else if (last->time <= time) {
        key = last;
    } else {
        key = &curve->keys[static_cast<u32>(curve->scale * static_cast<f32>(curve->count - 1) * time)];
        if (key->time <= time) {
            do {
                key++;
            } while (key->time <= time);
            key--;
        } else {
            do {
                key--;
            } while (key->time > time);
        }
    }
    if (key->time == time || key == last) {
        return key->value;
    }
    f32 ratio = (time - key->time) / (key[1].time - key->time);
    return key->value * (1.0f - ratio) + key[1].value * ratio;
}

} /* extern "C" */
