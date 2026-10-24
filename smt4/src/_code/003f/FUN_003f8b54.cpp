/* NON_MATCHING: same search; retail walks the key pointer in the incoming register with write-back loads, this build allocates the pointer and tick in different registers. */
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
extern "C" s32 FUN_003f8b54(const Curve *curve, f32 time)
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
