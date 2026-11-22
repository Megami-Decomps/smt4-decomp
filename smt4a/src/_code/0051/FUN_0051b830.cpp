/* NON_MATCHING: retail allocates s1/s3 for the frame scale (this build s3/s2), and swaps r3/ip for the key count and the last-key address. */
#include "shard/AnimCurve.h"

extern "C" {

/* Returns the last key at or before `time`, starting the search from an estimated key. */
AnimKey *FUN_0051b830(AnimCurve *curve, f32 time)
{
    u32 frame = (s32)(time / curve->duration * 32.0f);

    if (frame < curve->keys[0].frame) {
        return curve->keys;
    }
    AnimKey *last = curve->keys + curve->keyCount - 1;
    if (frame >= last->frame) {
        return last;
    }
    AnimKey *key = &curve->keys[(u32)(curve->keyRate * ((s32)(curve->keyCount - 1) * time))];
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
