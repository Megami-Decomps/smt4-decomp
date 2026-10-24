/* A collision plane as the map collision queries read it (0xA8 bytes, a CollisionQuad). */
#ifndef GFX_COLLISIONPLANEVIEW_H
#define GFX_COLLISIONPLANEVIEW_H

#include "shard/W6_W6Match6_CollisionQuad.h"

struct CollisionPlaneView {
    /* 0x00 */ u32 flags;      /* bit 0: the plane takes part in sweeps */
    /* 0x04 */ s8 kind;        /* 1: floor-like plane */
    /* 0x05 */ s8 sub;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ CollisionVector normal;
    /* 0x18 */ f32 distance;
    /* 0x1C */ u8 unk1C[0x8C];
};

typedef char CollisionPlaneViewSizeCheck[sizeof(CollisionPlaneView) == 0xA8 ? 1 : -1];

#endif
