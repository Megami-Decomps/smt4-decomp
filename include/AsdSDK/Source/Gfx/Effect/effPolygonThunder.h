/* AsdSDK/Source/Gfx/Effect/effPolygonThunder.c: thunder polygon effects.
 *
 * Same idea as effPolygonFlash.h (an object whose kind indexes a callback table, a work area
 * after the header) with a smaller header. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONTHUNDER_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONTHUNDER_H

#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

typedef struct PolyThunderObject PolyThunderObject;

/* Callback table entry (stride 0x18, indexed by PolyThunderObject.kind). */
typedef struct PolyThunderKind {
    /* 0x00 */ void (*start)(PolyThunderObject *obj);
    /* 0x04 */ void *(*create)(void *params);
    /* 0x08 */ void (*release)(PolyThunderObject *obj);
    /* 0x0C */ void (*update)(PolyThunderObject *obj);
    /* 0x10 */ void (*lateUpdate)(PolyThunderObject *obj);
    /* 0x14 */ s32 workSize;
} PolyThunderKind;

struct PolyThunderObject {
    /* 0x00 */ PolyVec4 rotation0; /* identity quaternion when created */
    /* 0x10 */ PolyVec4 rotation1;
    /* 0x20 */ f32 scale;          /* 1.0 when created */
    /* 0x24 */ s32 unk24;          /* -1 when created */
    /* 0x28 */ s32 frame;
    /* 0x2C */ u32 kind;
    /* 0x30 */ void *state;
    /* 0x34 */ u8 *work;           /* points at workData */
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ u8 workData[1];
};

#endif
