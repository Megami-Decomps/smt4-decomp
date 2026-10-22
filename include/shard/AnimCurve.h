/* A keyframed animation curve: keys sorted by frame, 32 frames per normalized time unit. */
#ifndef SHARD_ANIMCURVE_H
#define SHARD_ANIMCURVE_H

#include "common.h"
#include <stddef.h>

struct AnimKey {
    /* 0x00 */ u16 frame;
    /* 0x02 */ u16 unk02[2];
};

struct AnimCurve {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0E */ u16 keyCount;
    /* 0x10 */ u8 unk10[0x8];
    /* 0x18 */ f32 duration;
    /* 0x1C */ f32 keyRate;    /* estimated key index per (time * (keyCount - 1)) */
    /* 0x20 */ AnimKey *keys;
};

typedef char AnimKeySizeCheck[sizeof(AnimKey) == 6 ? 1 : -1];
typedef char AnimCurveKeysOffsetCheck[offsetof(AnimCurve, keys) == 0x20 ? 1 : -1];

#endif
