/* AsdSDK/Source/Gfx/Effect/effAsdLight.c: light effect objects. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFASDLIGHT_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFASDLIGHT_H

#include "common.h"

typedef struct EffLightVec4 {
    f32 x, y, z, w;
} EffLightVec4;

/* A light effect object: its transform, a kind, and a copy of the effect's 0xB4-byte parameters. */
typedef struct EffAsdLight {
    /* 0x00 */ EffLightVec4 rotation0;  /* identity quaternion (0, 0, 0, 1) when created */
    /* 0x10 */ EffLightVec4 rotation1;
    /* 0x20 */ f32 scale;               /* 1.0 when created */
    /* 0x24 */ s32 unk24;               /* -1 when created */
    /* 0x28 */ u32 kind;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u8 params[0xB4];
    /* 0xE4 */ u8 unkE4[0x3C];          /* smt4: 0x2C bytes */
} EffAsdLight;

/* Description of a light effect to spawn (from effect data). */
typedef struct EffAsdLightDesc {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 kind;
} EffAsdLightDesc;

#endif
