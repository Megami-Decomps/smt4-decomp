/* The lightning effect (smt4 FUN_003041a0, smt4a FUN_00392070): a set of bolts, each a strip of
 * polygon segments that zigzags away from a point on a sphere around the effect's origin. Every
 * segment is five vertices across the bolt (outer edge, inner edge, centre, inner, outer). */
#ifndef GFX_LIGHTNINGEFFECT_H
#define GFX_LIGHTNINGEFFECT_H

#include "common.h"
#include <stddef.h>
#include "shard/S1Mover.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

/* One bolt (0x30 bytes). */
struct LightningBolt {
    /* 0x00 */ PolyGeom *geom;      /* size = segments * 5 vertices */
    /* 0x04 */ Vec3f position;      /* where the bolt started last frame */
    /* 0x10 */ u32 unk10;
    /* 0x14 */ s32 timer;           /* frames alive; -1: respawn now, below -1: waiting */
    /* 0x18 */ u32 color;           /* ARGB; the alpha fades by 0x40 per frame */
    /* 0x1C */ f32 pitch;           /* orientation of its circle on the sphere */
    /* 0x20 */ f32 yaw;
    /* 0x24 */ f32 speed;           /* angular speed of the start point along the circle */
    /* 0x28 */ f32 elevation;       /* start angle on the circle */
    /* 0x2C */ f32 height;          /* vertical offset of the bolt */
};

struct LightningWork {
    /* 0x00 */ LightningBolt *bolts;
    /* 0x04 */ f32 radius;          /* radius of the sphere the bolts start on */
    /* 0x08 */ f32 radiusSpeed;     /* added to the radius every frame */
};

/* Parameter block of a lightning effect. */
struct LightningParams {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 lifetime;        /* frames the effect updates for, 0 = forever */
    /* 0x38 */ s32 boltCount;
    /* 0x3C */ u32 segmentCount;    /* segments per bolt length */
    /* 0x40 */ s32 respawnDelay;    /* random wait, in frames, before a faded bolt respawns */
    /* 0x44 */ u8 unk44[0x8];
    /* 0x4C */ u32 waveCount;       /* half sine waves along the bolt */
    /* 0x50 */ f32 amplitude;       /* of the zigzag wave */
    /* 0x54 */ u8 unk54[0x28];
    /* 0x7C */ f32 innerWidth;
    /* 0x80 */ f32 outerWidth;
    /* 0x84 */ f32 length;
    /* 0x88 */ u8 tilted;           /* random pitch within 45 degrees and a random height */
    /* 0x89 */ u8 unk89[0x13];
    /* 0x9C */ f32 heightRange;
    /* 0xA0 */ f32 speed;
    /* 0xA4 */ f32 speedVariance;   /* fraction of the speed that is random */
    /* 0xA8 */ f32 gravity;         /* angular acceleration of the start point */
};

struct LightningEffect {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s32 frame;           /* frames since start */
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ LightningWork *work;
    /* 0x34 */ LightningParams *params;
};

typedef char LightningEffectOffsets[sizeof(LightningBolt) == 0x30 &&
    offsetof(LightningBolt, timer) == 0x14 && offsetof(LightningBolt, height) == 0x2C &&
    offsetof(LightningParams, tilted) == 0x88 && offsetof(LightningParams, gravity) == 0xA8 &&
    offsetof(LightningEffect, params) == 0x34 && offsetof(PolyGeomBuf, positions) == 0x30 ? 1 : -1];

#endif
