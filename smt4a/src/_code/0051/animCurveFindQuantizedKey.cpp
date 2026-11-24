/* NON_MATCHING: retail loads 0.5f before division and keeps it for the final add;
 * this build loads the frame-rate constant first and uses different VFP registers. */
#include "shard/AnimCurve.h"

extern "C" f32 hardfp_floorf(f32 value);

/* Returns the last key at or before the requested time, starting at an estimated index. */
extern "C" const AnimKey *animCurveFindQuantizedKey(const QuantizedAnimCurve *curve, f32 time)
{
    f32 position = time / curve->timeScale * 32.0f;
    u32 frame = (s32)hardfp_floorf(0.5f + position);
    const AnimKey *key = &curve->keys[0];
    if (frame < key->frame) {
        return key;
    }
    key = &curve->keys[curve->keyCount - 1];
    if (frame >= key->frame) {
        return key;
    }
    key = &curve->keys[(u32)(curve->keyRate * ((f32)(curve->keyCount - 1) * time))];
    if (frame < key->frame) {
        do {
            --key;
        } while (key->frame > frame);
        return key;
    }
    do {
        ++key;
    } while (frame >= key->frame);
    return key - 1;
}
