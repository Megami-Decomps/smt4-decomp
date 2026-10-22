/* NON_MATCHING: retail divides the incoming s0 by the frame length (`vdiv s1, s0, s3`) after loading 0.5f into s2; this source divides the saved copy in s16. */
#include "common.h"

/* One key of a frame-indexed curve; its data follows the frame number. */
struct CurveKey {
    /* 0x00 */ u8 frame;
    /* 0x01 */ u8 unk01[3];
};

/* A curve of keys sorted by frame. */
struct FrameCurve {
    /* 0x00 */ u16 keyCount;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 keysPerUnit;     /* scales time * (keyCount - 1) to an estimated key index */
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ f32 frameLength;
    /* 0x14 */ CurveKey keys[1];
};

extern "C" {
f32 hardfp_floorf(f32 value);

/* Returns the last key of the curve at or before `time` (the first key before the start), starting
 * the search at an estimated key. */
CurveKey *FUN_003f87cc(FrameCurve *curve, f32 time)
{
    u32 frame = (u32)hardfp_floorf(time / curve->frameLength + 0.5f);
    CurveKey *key = &curve->keys[0];

    if (frame < key->frame) {
        return key;
    }
    key = &curve->keys[curve->keyCount - 1];
    if (frame >= key->frame) {
        return key;
    }
    key = &curve->keys[(u32)(curve->keysPerUnit * ((f32)(curve->keyCount - 1) * time))];
    if (frame < key->frame) {
        do {
            key--;
        } while (key->frame > frame);
        return key;
    }
    do {
        key++;
    } while (key->frame <= frame);
    return key - 1;
}

} /* extern "C" */
