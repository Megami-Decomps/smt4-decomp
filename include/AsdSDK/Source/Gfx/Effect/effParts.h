/* AsdSDK/Source/Gfx/Effect/effParts.c: effect parts (particle-like building blocks). */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPARTS_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPARTS_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include <stddef.h>

enum {
    EFF_PART_DEFAULTS_BYTES = 0x80,
    EFF_PART_SCALE_LOCAL_OFFSET = 0x80,
    EFF_PART_DEFAULT_TINT = 0xFFFFFFFF
};

/* A part object (0x90 bytes; the 0xC0-byte variant adds the fields after it). Its transform,
 * tint and time parameters occupy the first 0x80 bytes. */
typedef struct EffPart {
    /* 0x00 */ PolyVec4 position;
    /* 0x10 */ PolyVec4 localPosition;
    /* 0x20 */ PolyVec4 color;
    /* 0x30 */ u8 unk30[0x10];
    /* 0x40 */ PolyVec4 origin;
    /* 0x50 */ PolyVec4 rotation;
    /* 0x60 */ f32 timeStep;
    /* 0x64 */ u32 tint;
    /* 0x68 */ u32 flags;
    /* 0x6C */ u8 unk6C[8];
    /* 0x74 */ f32 timeScale;
    /* 0x78 */ u8 unk78[8];
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u8 unk88;
    /* 0x89 */ u8 unk89;
    /* 0x8A */ u8 unk8a;
    /* 0x8B */ u8 unk8b[5];
    /* 0x90 */ u8 unk90[0x30];
} EffPart;
typedef char EffPartParametersLayoutCheck[
    offsetof(EffPart, unk80) == EFF_PART_DEFAULTS_BYTES && offsetof(EffPart, tint) == 0x64 &&
    offsetof(EffPart, timeScale) == 0x74 ? 1 : -1];

/* Resets a homogeneous vector to (0, 0, 0, 1), also the identity rotation. */
static __inline void effPartResetVector(PolyVec4 *vector)
{
    PolyVec4 zero = {0, 0, 0, 0};
    *vector = zero;
    vector->w = 1.0f;
}

extern "C" {
void asdModelSlotSetTranslation(s32 slot,u32 bank,f32 x,f32 y,f32 z);
}

extern "C" {
void effBlockSetBlobB(EffBlock *block, const void *src, s32 size, u16 tag);
}

#endif
