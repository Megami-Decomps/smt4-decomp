/* NON_MATCHING: retail forms the last-key address as keys + (count * 6 - 6) and divides into s2; built folds the -6 into the load */
#include "common.h"

extern "C" {

typedef struct {
    u8 frame;    /* 0x0 */
    u8 data[5];  /* 0x1 */
} TrackKey; /* size 0x6 */

typedef struct {
    u8 unk0[0xe];
    u16 keyCount;    /* 0x0e */
    u8 unk10[0x18 - 0x10];
    f32 frameStep;   /* 0x18: time per frame unit */
    f32 indexScale;  /* 0x1c: estimated key index per (keyCount - 1) * time */
    TrackKey *keys;  /* 0x20 */
} KeyTrack;

/* Finds the last key at or before `time`, starting from an estimated index and walking from there. */
TrackKey *FUN_0051c338(KeyTrack *track, f32 time)
{
    TrackKey *keys = track->keys;
    u32 frame = (u32)(time / track->frameStep);
    TrackKey *key;
    s32 last;

    if (frame < keys[0].frame) {
        return keys;
    }
    last = track->keyCount - 1;
    key = &keys[last];
    if (frame >= key->frame) {
        return key;
    }
    key = &keys[(u32)(track->indexScale * ((f32)last * time))];
    if (frame < key->frame) {
        while ((--key)->frame > frame) {
        }
        return key;
    }
    while ((++key)->frame <= frame) {
    }
    return key - 1;
}

} /* extern "C" */
