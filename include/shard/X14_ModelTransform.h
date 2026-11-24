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

typedef char TransformMtx44Size[sizeof(TransformMtx44) == 0x40 ? 1 : -1];

#endif
