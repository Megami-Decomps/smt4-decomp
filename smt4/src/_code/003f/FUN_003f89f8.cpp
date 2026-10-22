/* NON_MATCHING: the initial half-frame constant load and VFP divide/add registers differ from retail. */
#include "shard/AnimCurve.h"

extern "C" f32 hardfp_floorf(f32 value);

/* Find the packed twelve-bit frame key at or immediately before playback time. */
extern "C" const PackedAnimKeyWide *FUN_003f89f8(const QuantizedAnimCurve *curve, f32 time)
{
    /* Adding this word to the shared header's odd-aligned prefix would shift its fields. */
    struct WideCurveView {
        u16 keyCount;
        u16 unk02;
        f32 keyRate;
        f32 valueScale;
        f32 valueBase;
        f32 timeScale;
        PackedAnimKeyWide keys[1];
    };
    const WideCurveView *view = reinterpret_cast<const WideCurveView *>(curve);
    u32 frame = (u32)hardfp_floorf(time / view->timeScale + 0.5f);
    const PackedAnimKeyWide *key = view->keys;
    if (key->frame <= frame) {
        key = &view->keys[view->keyCount - 1];
        if (frame < key->frame) {
            u32 estimate = (u32)(view->keyRate * ((f32)(view->keyCount - 1) * time));
            key = &view->keys[estimate];
            if (frame < key->frame) {
                do {
                    --key;
                } while (frame < key->frame);
            } else {
                do {
                    ++key;
                } while (key->frame <= frame);
                return key - 1;
            }
        }
    }
    return key;
}
