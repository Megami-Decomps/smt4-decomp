#ifndef SHARD_W6_W6MATCH3_EFFECTCOLOR_H
#define SHARD_W6_W6MATCH3_EFFECTCOLOR_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"

struct EffectColor {
    /* 0x00 */ f32 red;
    /* 0x04 */ f32 green;
    /* 0x08 */ f32 blue;
    /* 0x0C */ f32 alpha;
};

// Copies through pointers: armcc moves such a 16-byte value with VFP vldmia/vstmia, where a
// direct member-to-member assignment of a global uses integer ldm/stm.
static __inline void effectColorCopy(const EffectColor *source, EffectColor *destination)
{
    *destination = *source;
}

struct EffectRgb {
    f32 red;
    f32 green;
    f32 blue;
};

struct EffectColorTransition {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ EffectRgb delta;
};

struct EffectColorOverride {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ f32 red;
    /* 0x30 */ f32 green;
    /* 0x34 */ f32 blue;
    /* 0x38 */ union {
        u8 unk38[0x34];
        EffectColorTransition transition;
    };
    /* 0x6C */ u8 enabled;
};

struct EffectColorProductState {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ EffectColor color;
    /* 0x110 */ EffectColor factor;
};

struct EffectColorQuadState {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ EffectColor colors[4];
    /* 0x6C */ u8 unk6c[0x18];
    /* 0x84 */ f32 alpha;
};

extern "C" {
u32 FUN_00144eec(void);
}

#ifdef __cplusplus
extern "C" {
#endif

void asdCameraInitializeDefaults(AsdCamera *camera, s32 enabled);

#ifdef __cplusplus
}
#endif

#endif
