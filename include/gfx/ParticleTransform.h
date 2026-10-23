#ifndef GFX_PARTICLETRANSFORM_H
#define GFX_PARTICLETRANSFORM_H
#include "common.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include <stddef.h>
struct ParticleTransformSample {
    EffectColor position;
    u32 unk10;
    u32 color;
    f32 scale;
    f32 angle;
};
struct ParticleTransformCurves {
    u8 unk00[0x2C];
    u8 colorCurve[0x24];
    u32 opacity; /* 0x50 */
    u8 unk54[0xC];
    u8 scaleCurve[0x2C]; /* 0x60 */
    u8 angleCurve[0x10]; /* 0x8C */
    u8 angleMode; /* 0x9C */
    u8 unk9D[0x1B];
    s32 duration; /* 0xB8 */
};
typedef char ParticleTransformOffsets[offsetof(ParticleTransformCurves, colorCurve) == 0x2C && offsetof(ParticleTransformCurves, scaleCurve) == 0x60 && offsetof(ParticleTransformCurves, angleMode) == 0x9C && offsetof(ParticleTransformCurves, duration) == 0xB8 && sizeof(ParticleTransformSample) == 0x20 ? 1 : -1];
#endif
