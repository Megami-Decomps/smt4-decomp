#ifndef GFX_COMPACT_HERMITE_TRACK_H
#define GFX_COMPACT_HERMITE_TRACK_H
#include "common.h"
#include <stddef.h>

/* A float Hermite track whose keys share one tangent on both sides. */
struct CompactHermiteKey {
    /* 0x00 */ f32 frame;
    /* 0x04 */ f32 value;
    /* 0x08 */ f32 tangent;
};
struct CompactHermiteTrack {
    /* 0x00 */ u16 count;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ f32 inverseDuration;
    /* 0x08 */ CompactHermiteKey keys[1];
};
typedef char CompactHermiteTrackLayout[
    sizeof(CompactHermiteKey) == 12 &&
    offsetof(CompactHermiteTrack, count) == 0 &&
    offsetof(CompactHermiteTrack, inverseDuration) == 4 &&
    offsetof(CompactHermiteTrack, keys) == 8 ? 1 : -1];
#endif
