/* NON_MATCHING: packed-key search uses different VFP constant registers and bounds-test scheduling. */
/* Locates the unsigned animation key preceding a normalized sample time. */
#include "shard/AnimCurve.h"
extern "C" f32 hardfp_floorf(f32 value);

extern "C" AnimKey *FUN_0051d7e0(QuantizedAnimCurve *curve, f32 time)
{
    /* keyRate sits in the byte-aligned unk02 prefix, which cannot gain float alignment. */
    struct QuantizedCurveView {
        u16 count;
        u16 unk02;
        f32 keyRate;
        u8 unk08[8];
        f32 timeScale;
        AnimKey keys[1];
    };
    QuantizedCurveView *track = (QuantizedCurveView *)curve;
    u32 frame = (u32)hardfp_floorf(time / track->timeScale * 32.0f + 0.5f);
    AnimKey *key = track->keys;
    if (frame >= key->frame) {
        key = &track->keys[track->count - 1];
        if (frame < key->frame) {
            u32 estimate = (u32)(track->keyRate * (f32)(track->count - 1) * time);
            key = &track->keys[estimate];
            if (key->frame <= frame) {
                do {
                    ++key;
                } while (key->frame <= frame);
                return key - 1;
            }
            do {
                --key;
            } while (frame < key->frame);
        }
    }
    return key;
}
