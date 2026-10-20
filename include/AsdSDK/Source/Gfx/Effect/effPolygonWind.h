/* AsdSDK/Source/Gfx/Effect/effPolygonWind.c: wind polygon effects. Uses PolyObject and the
 * its own kind table. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONWIND_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONWIND_H

#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

/* Callback table entry of effPolygonWind.c (stride 0x1c, indexed by PolyObject.kind). */
typedef struct PolyWindKind {
    /* 0x00 */ void (*start)(PolyObject *obj);
    /* 0x04 */ void *(*create)(void *params, s32 arg);
    /* 0x08 */ void (*release)(PolyObject *obj);      /* frees what create made */
    /* 0x0C */ void *(*clone)(PolyObject *obj);
    /* 0x10 */ void (*update)(PolyObject *obj);
    /* 0x14 */ void (*lateUpdate)(PolyObject *obj);
    /* 0x18 */ s32 workSize;
} PolyWindKind;

/* Parameter block of a wind polygon effect (a PolyObject's work area). */
typedef struct PolyWindParams {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 segments;     /* segments along the effect */
    /* 0x3C */ u8 unk3c[0x50];
    /* 0x8C */ u32 sides;        /* polygon sides, at least 3 */
} PolyWindParams;

/* Description of a wind effect to spawn (from effect data). */
typedef struct PolyWindDesc {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 kind;         /* index into the kind table */
    /* 0x0E */ u8 unk0e[0xE];
    /* 0x1C */ u16 type;         /* 4 = no creation flags */
} PolyWindDesc;

/* A geometry block with a 0xC-byte header (the flash/ring one has 0x10). */
typedef struct PolyWindBlock {
    /* 0x00 */ void *data;       /* points at payload */
    /* 0x04 */ PolyGeom *geom;
    /* 0x08 */ struct PolyWindBlock *self;
    /* 0x0C */ u8 payload[1];
} PolyWindBlock;

#endif
