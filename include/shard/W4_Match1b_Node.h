/* The transform block of a scene node: a 3x4 matrix, a scale vector and change flags. */
#ifndef SHARD_W4_MATCH1B_NODE_H
#define SHARD_W4_MATCH1B_NODE_H

#include "common.h"

#define NODE_FLAG_TRANSFORM_DIRTY 0x800

typedef struct NodeVec3 {
    f32 x;
    f32 y;
    f32 z;
} NodeVec3;

typedef struct NodeTransform {
    /* 0x00 */ f32 m[3][4];     /* column 3 is the translation */
    /* 0x30 */ NodeVec3 scale;
    /* 0x3C */ u32 flags;
} NodeTransform;

/* The object a node owner points at: the transform sits at 0x4c. */
typedef struct NodeObject {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ NodeTransform transform;
} NodeObject;

typedef struct NodeOwner {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ NodeObject *object;
} NodeOwner;

/* Intrusive tree links used by the release traversal. */
typedef struct ReleaseTreeNode {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ struct ReleaseTreeNode *parent;
    /* 0x28 */ struct ReleaseTreeNode *child;
    /* 0x2C */ struct ReleaseTreeNode *previous;
    /* 0x30 */ struct ReleaseTreeNode *next;
} ReleaseTreeNode;

#endif
