/* Structs shared by the helper functions in code shard 0040. */
#ifndef SHARD_SHARD0040_H
#define SHARD_SHARD0040_H

#include "common.h"

#include "shard/Shard003F.h"
#include <stddef.h>
struct CameraMatrixCache;

typedef struct Counters {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ u32 a[0x40];
    /* 0x200 */ u32 b[0x40];
} Counters;

typedef struct Flag10Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 unk10;
} Flag10Obj;

typedef struct LockedObj {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ s32 locked;
    union {
        /* 0x08 */ u8 unk08[0x8];
        struct {
            u32 unk08;
            /* 0x0C */ CameraMatrixCache *camera;
        } fountain;
    };
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u8 unk20[0x18];
    /* 0x38 */ s32 unk38;
} LockedObj;
typedef char LockedObjFountainCameraOffsetCheck[
    offsetof(LockedObj, fountain.camera) == 0x0C &&
    sizeof(LockedObj) == 0x3C ? 1 : -1];

typedef struct FilterObj {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 buffer;
    /* 0x08 */ u32 handle;
    /* 0x0C */ u8 unk0C[0x8];
    /* 0x14 */ Object *child;
    /* 0x18 */ u8 unk18[0x4C];
    /* 0x64 */ u32 extra;
} FilterObj;

typedef struct TargetInner {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
} TargetInner;

typedef struct Target {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ TargetInner *inner;
} Target;

typedef struct TargetOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Target *target;
} TargetOwner;

typedef struct VtblHolder {
    /* 0x00 */ const void *vtbl;
} VtblHolder;

#endif
