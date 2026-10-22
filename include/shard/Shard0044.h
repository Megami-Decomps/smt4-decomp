/* Structs shared by the helper functions in code shard 0044. */
#ifndef SHARD_SHARD0044_H
#define SHARD_SHARD0044_H

#include "common.h"

#include "shard/Shard0043.h"

typedef struct VIface VIface;

typedef struct VIfaceVtbl {
    /* 0x00 */ void *unk00[3];
    /* 0x0C */ void (*slot3)(VIface *self, u32 arg);
} VIfaceVtbl;

struct VIface {
    /* 0x00 */ const VIfaceVtbl *vtbl;
};

typedef struct IfaceOwner8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ VIface *iface;
} IfaceOwner8;

typedef struct RangeOwner {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ u32 *begin;
    /* 0x168 */ u32 *end;
} RangeOwner;

struct MaterialFlagRange {
    /* 0x00 */ u32 *begin;
    /* 0x04 */ u32 *end;
};

struct MaterialFlagArrays {
    /* 0x00 */ u8 unk00[0x6c];
    /* 0x6C */ MaterialFlagRange first;
    /* 0x74 */ u8 unk74[0xc];
    /* 0x80 */ MaterialFlagRange second;
    /* 0x88 */ u8 unk88[8];
    /* 0x90 */ MaterialFlagRange third;
};

typedef char MaterialFlagArraysSizeCheck[sizeof(MaterialFlagArrays) == 0x98 ? 1 : -1];

#endif
