/* Shared by the thunder effect kinds that build bolt strips (effPolygonThunder.c): the parameter block
 * they read and the vertex colour ramp they write. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONTHUNDERBOLT_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPOLYGONTHUNDERBOLT_H

#include <stddef.h>
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "gfx/PackedColorBytes.h"

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
    /* 0x00 */ PackedColorBytes colorA;
    /* 0x04 */ PackedColorBytes colorB;
    /* 0x08 */ PackedColorBytes colorC;
    /* 0x0C */ PackedColorBytes repeatB;
    /* 0x10 */ PackedColorBytes repeatA;
} ThunderBoltVertex;

/* The three parameter colours split into their rgb and alpha parts, computed once per effect. */
typedef struct ThunderBoltColors {
    u32 rgbA;
    u32 rgbB;
    u32 rgbC;
    u32 alphaA;
    u32 alphaB;
    u32 alphaC;
} ThunderBoltColors;

static inline ThunderBoltColors thunderBoltSplitColors(const ThunderBoltParams *params)
{
    ThunderBoltColors colors;
    colors.rgbA = params->colorA & 0xFFFFFF;
    colors.rgbB = params->colorB & 0xFFFFFF;
    colors.rgbC = params->colorC & 0xFFFFFF;
    colors.alphaA = params->colorA >> 24;
    colors.alphaB = params->colorB >> 24;
    colors.alphaC = params->colorC >> 24;
    return colors;
}

/* Colours every vertex of a bolt strip: the alpha of each colour is scaled by a ramp that rises
 * over the first `rampIn` steps, holds, and falls from step `rampOut` to the end. */
static inline void thunderBoltFillColors(PolyGeom *geom, const ThunderBoltColors *colors, s32 rampIn, s32 rampOut)
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
        u32 alphaA = (u32)((f32)colors->alphaA * ramp);
        u32 alphaB = (u32)((f32)colors->alphaB * ramp);
        u32 alphaC = (u32)((f32)colors->alphaC * ramp);
        packedColorBytesSet(&vertex->colorA, colors->rgbA | (alphaA << 24));
        packedColorBytesSet(&vertex->colorB, colors->rgbB | (alphaB << 24));
        packedColorBytesSet(&vertex->colorC, colors->rgbC | (alphaC << 24));
        vertex->repeatB = vertex->colorB;
        vertex->repeatA = vertex->colorA;
        vertex++;
    }
}

#endif
