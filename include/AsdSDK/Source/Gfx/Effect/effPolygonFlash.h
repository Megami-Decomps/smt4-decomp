/* AsdSDK/Source/Gfx/Effect/effPolygonFlash.c: polygon effects (flash, ring, ...).
 *
 * A PolyObject is one running polygon effect. Its `kind` indexes a table of PolyKind callbacks
 * (one table per effect source file: effPolygonFlash.c has its own, effPolygonRing.c a smaller
 * one). The kind callbacks work on a per-object work area that follows the object header. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONFLASH_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONFLASH_H

#include "common.h"

typedef struct PolyVec4 {
    f32 x, y, z, w;
} PolyVec4;

typedef struct PolyObject PolyObject;

/* Callback table entry of effPolygonFlash.c (stride 0x1c, indexed by PolyObject.kind). */
typedef struct PolyFlashKind {
    /* 0x00 */ void (*start)(PolyObject *obj);        /* (re)starts the effect */
    /* 0x04 */ void *(*create)(void *params, s32 arg); /* builds the effect's state from a parameter block */
    /* 0x08 */ void (*release)(void *state);          /* frees what create made */
    /* 0x0C */ void *(*clone)(PolyObject *obj);       /* optional: builds the state for a copy of obj */
    /* 0x10 */ void (*update)(PolyObject *obj);       /* per frame */
    /* 0x14 */ void (*lateUpdate)(PolyObject *obj);   /* per frame while frame > 0 */
    /* 0x18 */ s32 workSize;                          /* bytes of work area copied for a clone */
} PolyFlashKind;

/* Callback table entry of effPolygonRing.c (stride 0x18, indexed by PolyObject.kind). */
typedef struct PolyRingKind {
    /* 0x00 */ void (*start)(PolyObject *obj);
    /* 0x04 */ void *(*create)(void *params);
    /* 0x08 */ void (*release)(void *state);
    /* 0x0C */ void (*update)(PolyObject *obj);
    /* 0x10 */ void (*lateUpdate)(PolyObject *obj);   /* per frame while frame > 0 */
    /* 0x14 */ s32 workSize;
} PolyRingKind;

/* Texture coordinates of one segment: a quad's four corners. */
typedef struct PolyQuadUV {
    /* 0x00 */ f32 u0, v0;
    /* 0x08 */ f32 u1, v1;
    /* 0x10 */ f32 u2, v2;
    /* 0x18 */ f32 u3, v3;
} PolyQuadUV;

/* The vertex buffer of a polygon geometry. */
typedef struct PolyGeomBuf {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 *colors;      /* 4 bytes per vertex */
    /* 0x3C */ PolyQuadUV *uv;  /* one quad per segment */
} PolyGeomBuf;

/* A polygon geometry as built by the geometry factories (0x58 bytes). */
typedef struct PolyGeom {
    /* 0x00 */ u16 drawFlags;   /* bit 0x100: see PolyRingWork.flag */
    /* 0x02 */ s16 size;
    /* 0x04 */ u32 unk04;       /* resource handle */
    /* 0x08 */ PolyGeomBuf *buf;
    /* 0x0C */ u8 unk0c[0x44];
    /* 0x50 */ u32 color;       /* packed, alpha in the top byte */
    /* 0x54 */ u32 flags;
} PolyGeom;

/* One allocation holding a geometry and the per-segment data that goes with it. */
typedef struct PolyGeomBlock {
    /* 0x00 */ void *data;      /* points at payload */
    /* 0x04 */ PolyGeom *geom;
    /* 0x08 */ struct PolyGeomBlock *self;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u8 payload[1];   /* segment count * per-segment size bytes */
} PolyGeomBlock;

/* Parameter block of a polygon effect (the start of a PolyObject's work area). */
typedef struct PolyParams {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 segments;    /* number of segments */
    /* 0x3C */ u32 unk3c;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 colorA;
    /* 0x48 */ u32 colorB;
    /* 0x4C */ u32 colorC;
    /* 0x50 */ u8 unk50[0x20];
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u8 unk74[0x54];
    /* 0xC8 */ f32 scale;       /* ring: scale of the per-segment values */
    /* 0xCC */ f32 randomness;  /* ring: how much of each value is random */
} PolyParams;

/* Source of a geometry clone: an existing block and the parameters of the effect owning it. */
typedef struct PolyCloneSrc {
    /* 0x00 */ PolyGeomBlock *block;
    /* 0x04 */ PolyParams *params;
} PolyCloneSrc;

struct PolyObject {
    /* 0x00 */ PolyVec4 rotation0; /* identity quaternion (0, 0, 0, 1) when created */
    /* 0x10 */ PolyVec4 rotation1; /* identity quaternion (0, 0, 0, 1) when created */
    /* 0x20 */ PolyVec4 color;     /* copied from a default vector in .data */
    /* 0x30 */ s32 unk30;        /* -1 when created */
    /* 0x34 */ s32 frame;        /* frames since start */
    /* 0x38 */ u32 kind;         /* index into the kind table */
    /* 0x3C */ void *state;      /* result of the kind's create */
    /* 0x40 */ u8 *work;         /* points at workData */
    /* 0x44 */ u8 unk44[0xC];
    /* 0x50 */ u8 workData[1];   /* kind's workSize bytes follow */
};

#endif
