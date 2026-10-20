/* Structs shared by the helper functions in code shard 0037. */
#ifndef SHARD_SHARD0037_H
#define SHARD_SHARD0037_H

#include "common.h"

#include "shard/Shard0036.h"

typedef struct Obj25C {
    /* 0x00 */ u8 unk00[0x2C4];
    /* 0x2C4 */ u32 ids[12];
    /* 0x2F4 */ u8 unk2F4[0x40];
    /* 0x334 */ u32 unk334;
    /* 0x338 */ u8 flags[12];
} Obj25C;

typedef struct Obj25CRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj25C *instance;
} Obj25CRef;

typedef struct Obj7870 {
    /* 0x00 */ u8 unk00[0x7870];
    /* 0x7870 */ s32 unk7870;
} Obj7870;

typedef struct Obj7870Ref {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj7870 *instance;
} Obj7870Ref;

typedef struct Holder33B4 {
    /* 0x00 */ u8 unk00[0x33B4];
    /* 0x33B4 */ u8 state;
} Holder33B4;

typedef struct Holder33B4Ref {
    /* 0x00 */ Holder33B4 *obj;
} Holder33B4Ref;

typedef struct Unit3FC {
    /* 0x00 */ u8 unk00[0x3FC];
    /* 0x3FC */ u32 unit;
} Unit3FC;

#endif
