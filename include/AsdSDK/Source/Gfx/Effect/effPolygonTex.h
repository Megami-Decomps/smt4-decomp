/* AsdSDK/Source/Gfx/Effect/effPolygonTex.c, effPolygonTexPivot.c: textured polygon effects. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONTEX_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONTEX_H

#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

/* Description of a textured polygon effect to spawn (from effect data). */
typedef struct PolyTexDesc {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 kind;
    /* 0x0E */ u8 unk0e[0xE];
    /* 0x1C */ u16 resourceType;  /* 1/9 texture, 2 and 7 other resources, 4 texture id */
} PolyTexDesc;

/* effPolygonTex.c object (0xD4 bytes). */
typedef struct PolyTexObject {
    /* 0x00 */ PolyVec4 rotation0;
    /* 0x10 */ PolyVec4 rotation1;
    /* 0x20 */ f32 scale;
    /* 0x24 */ s32 unk24;         /* -1 */
    /* 0x28 */ u32 kind;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u8 params[0x98];   /* copy of the effect's parameter block */
    /* 0xC8 */ PolyGeom *geom;
    /* 0xCC */ void *resource7;
    /* 0xD0 */ void *resource2;
} PolyTexObject;

/* effPolygonTexPivot.c object (0x148 bytes): the same with a bigger parameter block. */
typedef struct PolyTexPivotObject {
    /* 0x00 */ PolyVec4 rotation0;
    /* 0x10 */ PolyVec4 rotation1;
    /* 0x20 */ f32 scale;
    /* 0x24 */ s32 unk24;         /* -1 */
    /* 0x28 */ u32 kind;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u8 params[0x10C];
    /* 0x13C */ PolyGeom *geom;
    /* 0x140 */ void *resource7;
    /* 0x144 */ void *resource2;
} PolyTexPivotObject;

#endif
