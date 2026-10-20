/* An object that moves a part and a node along stored velocities for a fixed number of frames. */
#ifndef SHARD_S1MOVER_H
#define SHARD_S1MOVER_H

#include "common.h"

typedef struct Vec3f {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
} Vec3f;

/* The part being moved: its translation is the fourth column of a 3x4 matrix at +0x48. */
typedef struct MovedPart {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ f32 x;
    /* 0x5C */ u8 unk5C[0xC];
    /* 0x68 */ f32 y;
    /* 0x6C */ u8 unk6C[0xC];
    /* 0x78 */ f32 z;
    /* 0x7C */ u8 unk7C[0xC];
    /* 0x88 */ u32 flags;      /* 0x800: transform dirty */
} MovedPart;

enum {
    MOVED_PART_DIRTY = 0x800
};

typedef struct MoverNodeHandle {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;
} MoverNodeHandle;

typedef struct Mover {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ s32 slot;
    /* 0x0008 */ u8 unk0008[8];
    /* 0x0010 */ u32 frame;                  /* frames elapsed since the move started */
    /* 0x0014 */ u8 active;
    /* 0x0015 */ u8 moveNode;                /* also move the node */
    /* 0x0016 */ u8 unk0016[0xA];
    /* 0x0020 */ MoverNodeHandle *node;
    /* 0x0024 */ u8 unk0024[0x510];
    /* 0x0534 */ Vec3f cameraEye;
    /* 0x0540 */ Vec3f cameraTarget;
    /* 0x054C */ u8 unk054C[0x10];
    /* 0x055C */ Vec3f cameraUp;
    /* 0x0568 */ u8 unk0568[4];
    /* 0x056C */ MovedPart *parts[2]; /* the part of each slot, indexed by Mover::slot */
    /* 0x0574 */ u8 unk0574[0x1078];
    /* 0x15EC */ Vec3f velocity;
    /* 0x15F8 */ Vec3f velocityB;
    /* 0x1604 */ Vec3f position;
    /* 0x1610 */ Vec3f positionB;
    /* 0x161C */ Vec3f finalPosition;
    /* 0x1628 */ Vec3f finalPositionB;
    /* 0x1634 */ u8 unk1634[0x18];
    /* 0x164C */ Vec3f nodeVelocity;
    /* 0x1658 */ Vec3f nodePosition;
    /* 0x1664 */ Vec3f nodeFinalPosition;
} Mover;

/* A 3x4 matrix (nn::math::MTX34); the default constructor makes the identity. */
struct Mtx34 {
    f32 m[3][4];

    Mtx34()
    {
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 4; c++) {
                m[r][c] = r == c ? 1.0f : 0.0f;
            }
        }
    }
};

/* The camera parameters the mover derives from the moved part's pose. */
typedef struct MoverCamera {
    /* 0x00 */ Vec3f eye;
    /* 0x0C */ Vec3f target;
    /* 0x18 */ Vec3f up;
} MoverCamera;

#endif
