/* Structs shared by the helper functions in code shard 0036. */
#ifndef SHARD_SHARD0036_H
#define SHARD_SHARD0036_H

#include "common.h"
#include "map/mapIf.h"

#include "shard/Shard0035.h"





typedef struct Rgba {
    /* 0x00 */ u8 r;
    /* 0x01 */ u8 g;
    /* 0x02 */ u8 b;
    /* 0x03 */ u8 a;
} Rgba;

typedef union RgbaWord {
    Rgba rgba;
    u32 word;
} RgbaWord;

typedef struct ColorSlot {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ RgbaWord color;
    /* 0x08 */ u32 copy;
} ColorSlot;

typedef struct HandleArray10 {
    /* 0x00 */ u32 handles[10];
} HandleArray10;

typedef struct Work0C {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08[0x4];
    /* 0x0C */ u32 handleA;
    /* 0x10 */ u32 handleB;
} Work0C;

typedef struct Ref208 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Work0C *work;
} Ref208;


/* The shared model object's visibility state. */
typedef struct VisibilityState1C {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 visible;
} VisibilityState1C;

#endif
