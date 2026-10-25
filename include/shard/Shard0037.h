/* Structs shared by the helper functions in code shard 0037. */
#ifndef SHARD_SHARD0037_H
#define SHARD_SHARD0037_H

#include "common.h"
#include <stddef.h>

#include "shard/Shard0036.h"

typedef struct Obj25C {
    union {
        /* 0x00 */ u8 unk00[0x2C4];
        struct {
            u8 prefix[8];
            /* 0x08 */ s32 state;
        } transition;
        struct {
            u8 prefix[0x260];
            /* 0x260 */ u8 cursor[0x64];
        } selection;
    };
    /* 0x2C4 */ u32 ids[12];
    union {
        /* 0x2F4 */ u8 unk2F4[0x40];
        struct {
            u8 prefix[0x38];
            /* 0x32C */ s32 selected;
        } selectionIndex;
    };
    /* 0x334 */ u32 unk334;
    /* 0x338 */ u8 flags[12];
} Obj25C;
typedef char Obj25CSelectionOffsetsCheck[offsetof(Obj25C, transition.state) == 8 &&
    offsetof(Obj25C, selection.cursor) == 0x260 && offsetof(Obj25C, selectionIndex.selected) == 0x32C &&
    sizeof(Obj25C) == 0x344 ? 1 : -1];

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

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00376fb8(u8 value);

#ifdef __cplusplus
}
#endif

#endif
