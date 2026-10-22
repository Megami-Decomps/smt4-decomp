/* NON_MATCHING: retail loads 0.5f before the divide and multiplies in s1/s0; the single-expression form fuses into vmla under --fpmode=fast. */
#include "common.h"

extern "C" {

/* One key of a sampled curve. */
typedef struct CurveKey {
    /* 0x00 */ u16 frame;
    /* 0x02 */ u8 unk02[4];
} CurveKey;

typedef struct Curve {
    /* 0x00 */ u16 keyCount;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 keysPerSecond;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ f32 duration;
    /* 0x14 */ CurveKey keys[1];
} Curve;

f32 hardfp_floorf(f32 value);

/* Returns the last key at or before `time`, starting the search from the key the time is expected at. */
CurveKey *FUN_003f887c(Curve *curve, f32 time)
{
    f32 position = time / curve->duration * 32.0f;
    u32 frame = (s32)hardfp_floorf(position + 0.5f);
    CurveKey *key = &curve->keys[0];
    if (frame < key->frame) {
        return key;
    }
    key = &curve->keys[curve->keyCount - 1];
    if (frame >= key->frame) {
        return key;
    }
    key = &curve->keys[(u32)(curve->keysPerSecond * ((f32)(curve->keyCount - 1) * time))];
    if (frame < key->frame) {
        do {
            key--;
        } while (key->frame > frame);
        return key;
    }
    do {
        key++;
    } while (frame >= key->frame);
    return key - 1;
}

} /* extern "C" */
