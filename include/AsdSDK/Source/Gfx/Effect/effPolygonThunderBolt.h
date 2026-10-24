/* Shared by the thunder effect kinds that build bolt strips (effPolygonThunder.c): the parameter block
 * they read and the vertex colour ramp they write. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONTHUNDERBOLT_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONTHUNDERBOLT_H

#include <stddef.h>
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

/* Parameter block of a bolt-strip thunder effect. */
typedef struct ThunderBoltParams {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 boltCount;
    /* 0x3C */ u32 level;       /* strip rows, at least 3 */
    /* 0x40 */ u8 unk40[0x28];
    /* 0x68 */ f32 rampIn;      /* fraction of the strip that fades in */
    /* 0x6C */ f32 rampOut;     /* fraction where the fade out begins */
    /* 0x70 */ u32 colorA;      /* alpha in the top byte */
    /* 0x74 */ u32 colorB;
    /* 0x78 */ u32 colorC;
} ThunderBoltParams;

typedef char ThunderBoltParamsLayoutCheck[
    offsetof(ThunderBoltParams, boltCount) == 0x38 && offsetof(ThunderBoltParams, colorC) == 0x78 &&
    sizeof(ThunderBoltParams) == 0x7C ? 1 : -1];

/* The three vertex colours of one strip step: 0x14 bytes, the last two repeat the first two. */
typedef struct ThunderBoltVertex {
    /* 0x00 */ u32 colorC;
    /* 0x04 */ u32 colorB;
    /* 0x08 */ u32 colorA;
    /* 0x0C */ u32 repeatB;
    /* 0x10 */ u32 repeatC;
} ThunderBoltVertex;

/* Colours every vertex of a bolt strip: the alpha of each colour is scaled by a ramp that rises
 * over the first `rampIn` steps, holds, and falls from step `rampOut` to the end. */
static inline void thunderBoltFillColors(PolyGeom *geom, const ThunderBoltParams *params, s32 rampIn, s32 rampOut)
{
    u32 steps = geom->size / 5;
    ThunderBoltVertex *vertex = (ThunderBoltVertex *)geom->buf->colors;
    for (u32 i = 0; i < steps; i++) {
        f32 ramp;
        if ((s32)i < rampIn)
            ramp = (f32)i / (f32)rampIn;
        else if (rampOut >= (s32)i)
            ramp = 1.0f;
        else
            ramp = (f32)(steps - i) / (f32)(steps - rampOut);
        u32 alphaC = (u32)((f32)(params->colorC >> 24) * ramp);
        u32 alphaB = (u32)((f32)(params->colorB >> 24) * ramp);
        u32 alphaA = (u32)((f32)(params->colorA >> 24) * ramp);
        vertex->colorC = (params->colorC & 0xFFFFFF) | (alphaC << 24);
        vertex->colorB = (params->colorB & 0xFFFFFF) | (alphaB << 24);
        vertex->colorA = (params->colorA & 0xFFFFFF) | (alphaA << 24);
        vertex->repeatB = vertex->colorB;
        vertex->repeatC = vertex->colorC;
        vertex++;
    }
}

#endif
