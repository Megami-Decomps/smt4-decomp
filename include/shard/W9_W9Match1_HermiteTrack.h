#ifndef SHARD_W9_W9MATCH1_HERMITE_TRACK_H
#define SHARD_W9_W9MATCH1_HERMITE_TRACK_H

#include "common.h"
#include <stddef.h>

struct HermiteAnimationKey {
    f32 frame;
    f32 value;
    f32 incomingTangent;
    f32 outgoingTangent;
};

struct HermiteAnimationTrack {
    u16 count;
    u16 unk02;
    f32 inverseDuration;
    HermiteAnimationKey keys[1]; // variable-length array at 0x08
};

typedef char HermiteAnimationTrackLayoutCheck[sizeof(HermiteAnimationKey) == 0x10 && offsetof(HermiteAnimationTrack, keys) == 8 && offsetof(HermiteAnimationTrack, inverseDuration) == 4 ? 1 : -1];

#endif
