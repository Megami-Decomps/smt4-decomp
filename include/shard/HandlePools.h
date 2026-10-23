/* Two pools of id-keyed request handles: 50 large slots and 109 small ones. */
#ifndef SHARD_HANDLEPOOLS_H
#define SHARD_HANDLEPOOLS_H

#include "common.h"
#include <stddef.h>

/* A pending request; `done` turns nonzero once it completes. */
struct PoolRequest {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ s32 done;
};

struct LargePoolSlot {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ s32 id;
    /* 0x20 */ PoolRequest *request;
    /* 0x24 */ u8 unk24[0x4];
};

struct PoolControllerReference {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;
};

struct SmallPoolSlot {
    union {
        /* 0x00 */ u8 unk00[0x4];
        /* 0x00 */ PoolControllerReference *controller;
    };
    /* 0x04 */ s32 id;
    /* 0x08 */ PoolRequest *request;
    /* 0x0C */ u8 unk0c[0x4];
};

struct HandlePools {
    /* 0x000 */ u8 unk000[0x190];
    /* 0x190 */ LargePoolSlot large[50];
    /* 0x960 */ SmallPoolSlot small[109];
};

typedef char LargePoolSlotSizeCheck[sizeof(LargePoolSlot) == 0x28 ? 1 : -1];
typedef char HandlePoolsSmallOffsetCheck[offsetof(HandlePools, small) == 0x960 ? 1 : -1];
typedef char SmallPoolControllerOffsets[
    offsetof(PoolControllerReference, handle) == 4 &&
    offsetof(SmallPoolSlot, controller) == 0 &&
    sizeof(PoolControllerReference) == 8 && sizeof(SmallPoolSlot) == 0x10 &&
    sizeof(HandlePools) == 0x1030 ? 1 : -1];

#endif
