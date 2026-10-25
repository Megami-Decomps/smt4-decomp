/* AsdSDK/Source/Gfx/Effect/effPolygonRing.c: ring polygon effects. See effPolygonFlash.h for
 * PolyObject. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONRING_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONRING_H

#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

/* State of one ring effect, stored right after its f32 buffer in a single allocation. */
typedef struct PolyRingState {
    /* 0x00 */ f32 *valuesStart;  /* same as values */
    /* 0x04 */ PolyObject *obj;   /* the ring's polygon object */
    /* 0x08 */ PolyGeom *geom;    /* its geometry */
    /* 0x0C */ f32 *values;       /* per-segment float buffer, start of the allocation */
} PolyRingState;

/* Work area of a ring effect's own polygon object (see FUN_002f9c30). */
typedef struct PolyRingWork {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 colorRamp[4];   /* second argument of the color lookup */
    /* 0x28 */ u32 unk28;         /* low 16 bits go to the geometry setup */
    /* 0x2C */ u8 unk2c[8];
    /* 0x34 */ u32 duration;      /* frames the effect draws for, 0 = forever */
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u8 flag;           /* sets bit 0x100 of the geometry's draw flags */
} PolyRingWork;

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u32 effGetFrameCounter(void);
#ifdef __cplusplus
}
#endif

#endif
