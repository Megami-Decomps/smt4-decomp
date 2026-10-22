/* NON_MATCHING: retail forms the last-key address as keys + (count * 8 - 8) and divides into s2; armcc here uses a writeback load (keys + count * 8, #-8). */
#include "common.h"

namespace {
struct CurveKey {
    /* 0x00 */ u32 frame : 12;
    /* 0x00 */ u32 unk00 : 20;
    /* 0x04 */ u32 value;
};

struct KeyCurve {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0E */ u16 keyCount;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ f32 frameLength;
    /* 0x1C */ f32 inverseDuration;
    /* 0x20 */ CurveKey *keys;
};
}

extern "C" {

/* Find the key at or before `time`: clamp to the first and last keys, otherwise start from an
 * estimate proportional to time and walk to the right key. */
CurveKey *FUN_0051ca30(KeyCurve *curve, f32 time)
{
    CurveKey *keys = curve->keys;
    u32 frame = (u32)(time / curve->frameLength);
    CurveKey *key;

    if (keys[0].frame > frame) {
        return keys;
    }
    key = &keys[curve->keyCount - 1];
    if (frame >= key->frame) {
        return key;
    }
    key = &keys[(u32)(curve->inverseDuration * ((f32)(curve->keyCount - 1) * time))];
    if (frame < key->frame) {
        do {
            --key;
        } while (key->frame > frame);
        return key;
    }
    do {
        ++key;
    } while (key->frame <= frame);
    return key - 1;
}

} /* extern "C" */
