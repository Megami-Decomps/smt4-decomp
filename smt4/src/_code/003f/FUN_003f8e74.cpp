/* NON_MATCHING: same search, but retail shares one exit for the early returns (bgt/bls to a common load) and keeps a copy of x in s1 for the later compares; built exits with different condition codes. */
#include "common.h"

struct CurveKey195 {
    f32 key;
    f32 value;
    f32 unk08;
};

/* A piecewise table: `count` keys in ascending order, and a scale that turns a position in 0..1 into a first guess. */
struct Curve195 {
    u16 count;
    u8 unk02[2];
    f32 scale;
    CurveKey195 keys[1];
};

/* Looks up the value of the key interval containing x, starting from an estimated index and walking to it. */
extern "C" f32 FUN_003f8e74(const Curve195 *curve, f32 x)
{
    const CurveKey195 *key = curve->keys;
    if (!(key->key > x)) {
        key = &curve->keys[curve->count - 1];
        if (!(key->key <= x)) {
            key = &curve->keys[(u32)(curve->scale * ((f32)(curve->count - 1) * x))];
            if (key->key > x) {
                do {
                    key--;
                } while (key->key > x);
            } else {
                do {
                    key++;
                } while (key->key <= x);
                key--;
            }
        }
    }
    return key->value;
}
