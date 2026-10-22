/* The value types the model transform builder works with. */
#ifndef SHARD_X14_MODELTRANSFORM_H
#define SHARD_X14_MODELTRANSFORM_H

#include "common.h"

typedef struct TransformVec3 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
} TransformVec3;

typedef struct TransformMtx44 {
    /* 0x00 */ f32 m[4][4];
} TransformMtx44;

/* A rotation built from a rotation source: 0x4C bytes. */
typedef struct TransformRotation {
    /* 0x00 */ f32 m[19];
} TransformRotation;

/* The object whose transform is set; the transform lives at 0x18. */
typedef struct TransformOwner {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 transform[4];
} TransformOwner;

typedef char TransformTypeSizes[sizeof(TransformMtx44) == 0x40 && sizeof(TransformRotation) == 0x4C ? 1 : -1];

#endif
