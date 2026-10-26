/* NON_MATCHING: updates the colour and flags of the particle emitters of an effect (effect tint times definition colour times emitter colour); written from the decompilation and the retail disassembly, the colour scratch lives in locals here (retail keeps it in four-float globals) and the float/int conversions are not compared with retail */
#include "common.h"

#define COLOR_SCALE (1.0f / 255.0f)
#define PARTICLE_FLAG_VISIBLE 0x100

/* An ARGB colour as four floats in 0..1 (or 0..255 when scaled back). */
struct Color4 {
    f32 a;
    f32 r;
    f32 g;
    f32 b;
};

struct ParticleSprite {
    /* 0x00 */ u16 flags;
    /* 0x02 */ u8 unk02[0xE];
    /* 0x10 */ u8 transform[0x40];
    /* 0x50 */ u32 color;
};

/* One emitter record (0x30 bytes). */
struct ParticleEmitter {
    /* 0x00 */ ParticleSprite *sprite;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ s32 particleCount;
    /* 0x18 */ u32 color;
    /* 0x1C */ u8 unk1C[0x14];
};

struct ParticleEmitterList {
    /* 0x00 */ ParticleEmitter *emitters;
};

struct ParticleDefinition {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 gradient[0x4];
    /* 0x28 */ u32 frame;
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ s32 lifetime;
    /* 0x38 */ s32 emitterCount;
    /* 0x3C */ u8 unk3C[0x20];
    /* 0x5C */ u8 visible;
};

struct ParticleEffect {
    /* 0x00 */ u8 origin[0x10];
    /* 0x10 */ u8 offset[0x14];
    /* 0x24 */ u32 color;             /* ARGB tint */
    /* 0x28 */ s32 frame;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ ParticleEmitterList *emitterList;
    /* 0x34 */ ParticleDefinition *definition;
};

extern "C" {
u32 FUN_0038136c(ParticleDefinition *definition, const void *gradient);
void matrixInitializeWithScaleAndOffset(void *matrix, const void *scale, const void *offset);
void matrixApplyByMode(void *transform, const void *matrix, s32 flag);
void FUN_002b3c9c(ParticleSprite *sprite, u32 frame);

/* Splits an ARGB word into floats scaled by `scale`. */
static __inline Color4 colorUnpack(u32 argb, f32 scale)
{
    Color4 color;
    color.a = (f32)(argb >> 24) * scale;
    color.r = (f32)((argb & 0xFFFFFF) >> 16) * scale;
    color.g = (f32)((argb & 0xFFFF) >> 8) * scale;
    color.b = (f32)(argb & 0xFF) * scale;
    return color;
}

void FUN_00392ed4(ParticleEffect *effect)
{
    ParticleEmitter *emitter = effect->emitterList->emitters;
    ParticleDefinition *definition = effect->definition;
    if (effect->frame > definition->lifetime && definition->lifetime != 0)
        return;

    s32 emitterCount = definition->emitterCount;
    u32 definitionColor = FUN_0038136c(definition, definition->gradient);
    Color4 tint = colorUnpack(effect->color, COLOR_SCALE);
    Color4 base = colorUnpack(definitionColor, COLOR_SCALE);
    Color4 effectColor;
    effectColor.a = base.a * tint.a;
    effectColor.r = base.r * tint.r;
    effectColor.g = base.g * tint.g;
    effectColor.b = base.b * tint.b;

    u8 matrix[0x5C];
    matrixInitializeWithScaleAndOffset(matrix, effect, effect->offset);
    for (s32 i = 0; i < emitterCount; i++, emitter++) {
        if (emitter->particleCount <= 0)
            continue;
        ParticleSprite *sprite = emitter->sprite;
        matrixApplyByMode(sprite->transform, matrix, 0);

        Color4 own = colorUnpack(emitter->color, COLOR_SCALE);
        u32 a = (u32)(own.a * effectColor.a * 255.0f);
        u32 r = (u32)(own.r * effectColor.r * 255.0f);
        u32 g = (u32)(own.g * effectColor.g * 255.0f);
        u32 b = (u32)(own.b * effectColor.b * 255.0f);
        sprite->color = (b & 0xFF) | ((g & 0xFF) << 8) | ((r & 0xFF) << 16) | (a << 24);
        if (definition->visible != 0)
            sprite->flags |= PARTICLE_FLAG_VISIBLE;
        else
            sprite->flags &= ~PARTICLE_FLAG_VISIBLE;
        FUN_002b3c9c(sprite, definition->frame & 0xFFFF);
    }
}

} /* extern "C" */
