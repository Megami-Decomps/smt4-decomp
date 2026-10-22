/* NON_MATCHING: retail forms the last key address as keys + (count * 6 - 6) without writeback, and allocates s1/s3 for the frame scale. */
#include "shard/AnimCurve.h"

extern "C" {

/* Returns the last key at or before `time`, starting the search from an estimated key. */
AnimKey *FUN_0051b830(AnimCurve *curve, f32 time)
{
    u32 frame = (s32)(time / curve->duration * 32.0f);
    AnimKey *keys = curve->keys;

    if (frame < keys[0].frame) {
        return keys;
    }
    AnimKey *last = keys + curve->keyCount - 1;
    if (frame >= last->frame) {
        return last;
    }
    AnimKey *key = &keys[(u32)(curve->keyRate * ((s32)(curve->keyCount - 1) * time))];
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
