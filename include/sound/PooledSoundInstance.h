#ifndef SOUND_POOLED_SOUND_INSTANCE_H
#define SOUND_POOLED_SOUND_INSTANCE_H

#include "common.h"
#include <stddef.h>

/* Prefix of the owner; the allocator is called through the second interface. */
struct PooledSoundOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 secondaryInterface;
    /* 0x08 */ void *freeList;
};

struct PooledSoundInstance {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ f32 scale;
    /* 0x28 */ u8 enabled;
    /* 0x29 */ u8 unk29;
};

typedef char PooledSoundInstanceLayoutCheck[sizeof(PooledSoundInstance) == 0x2c &&
    offsetof(PooledSoundOwner, secondaryInterface) == 4 && offsetof(PooledSoundOwner, freeList) == 8 &&
    offsetof(PooledSoundInstance, scale) == 0x24 && offsetof(PooledSoundInstance, enabled) == 0x28 ? 1 : -1];

#endif
