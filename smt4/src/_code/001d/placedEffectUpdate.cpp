/* NON_MATCHING: 188 lines: retail unpacks each colour with its channels in other registers and stores them as two singles plus a pair, multiplies the scratch colours in place from memory, loads the velocity as one vldmia and scales the direction by the speed before the time terms; armcc here schedules all three differently. */
#include "common.h"
#include <math.h>
#include "gfx/VectorScratch.h"
#include "gfx/EffectColorMath.h"

/* What the placed effect hands to its model each frame. */
struct PlacedEffectOutput {
    /* 0x00 */ Vec3f position;
    /* 0x0C */ f32 w;
    /* 0x10 */ EffectColor color;
    /* 0x20 */ f32 curveA;
    /* 0x24 */ f32 curveB;
};

/* unit-local: the animated placed-effect object (keyed colour and scale curves evaluated per frame);
 * only this unit reads it. */
struct PlacedEffect {
    /* 0x00 */ Vec3f position;
    /* 0x0C */ u8 unk0c[0x18];
    /* 0x24 */ u32 baseColor;
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ s32 frame;
    union {
        /* 0x30 */ u8 colorCurve[0x24];
        struct {
            u8 unk30[8];
            /* 0x38 */ f32 startScale;
        } curve;
    };
    /* 0x54 */ u8 colorKeys[0x10];
    /* 0x64 */ u8 curveA[0x2C];
    /* 0x90 */ u8 curveB[0x2C];
    /* 0xBC */ s32 duration;
    /* 0xC0 */ u8 loops;
    /* 0xC1 */ u8 unkC1[0x0F];
    /* 0xD0 */ Vec3f velocity;
    /* 0xDC */ f32 speed;
    /* 0xE0 */ f32 gravity;
    /* 0xE4 */ PlacedEffectOutput out;
};

struct EffectDefaults {
    s8 enabled;
    f32 scale;
};

extern "C" {

extern EffectDefaults DAT_00472398;

s32 effGetFrameCounter(void);
u32 colorRampBlendWithFade(void *curve, void *keys, s32 frame, s32 duration);
f32 FUN_00269508(void *curve, s32 frame, s32 duration);
void placedModelApplyLook(PlacedEffect *effect);

/* Unpacks an RGBA8 colour into floats. */
static void colorUnpack(EffectColor *color, u32 packed)
{
    color->red = (f32)(packed >> 24) * 0.003921569f;
    color->green = (f32)((packed >> 16) & 255) * 0.003921569f;
    color->blue = (f32)((packed >> 8) & 255) * 0.003921569f;
    color->alpha = (f32)(packed & 255) * 0.003921569f;
}

/* Scales a colour by another, channel by channel (the same helper as colorQuadEffectUpdateLifetimeColor's). */
static void effectColorScale(const EffectColor *factor, EffectColor *color)
{
    color->red *= factor->red;
    color->green *= factor->green;
    color->blue *= factor->blue;
    color->alpha *= factor->alpha;
}

/* Advances the effect by the frame counter and recomputes its output position and colour. */
void placedEffectUpdate(PlacedEffect *effect)
{
    if (effect->frame == 0 && DAT_00472398.enabled != 0)
        effect->curve.startScale = DAT_00472398.scale;
    s32 frame = effGetFrameCounter() + effect->frame;
    s32 duration = effect->duration;
    PlacedEffectOutput *out = &effect->out;
    effect->frame = frame;
    if (frame == 0)
        return;
    f32 t = (f32)frame;
    if (frame >= duration && duration > 0) {
        if (effect->loops == 0)
            return;
        frame = 0;
        effect->frame = 0;
    }

    u32 tint = colorRampBlendWithFade(effect->colorCurve, effect->colorKeys, frame, duration);
    colorUnpack(&g_vectorScratch.second.color, effect->baseColor);
    colorUnpack(&g_vectorScratch.first.color, tint);
    effectColorScale(&g_vectorScratch.second.color, &g_vectorScratch.first.color);
    out->color = g_vectorScratch.first.color;
    out->curveA = FUN_00269508(effect->curveA, frame, duration);
    out->curveB = FUN_00269508(effect->curveB, frame, duration);

    Vec3f velocity = effect->velocity;
    Vec3f direction;
    if (velocity.x != 0.0f || velocity.y != 0.0f || velocity.z != 0.0f) {
        f32 scale = 1.0f / sqrtf(velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z);
        direction.x = velocity.x * scale;
        direction.y = velocity.y * scale;
        direction.z = velocity.z * scale;
    } else {
        direction.x = 0.0f;
        direction.y = 0.0f;
        direction.z = 0.0f;
    }
    f32 half = t * 0.5f;
    f32 accel = effect->speed;
    Vec3f move;
    move.x = (velocity.x + direction.x * accel * half) * t;
    move.y = (velocity.y + direction.y * accel * half) * t - effect->gravity * t * t * 0.5f;
    move.z = (velocity.z + direction.z * accel * half) * t;
    out->position.x = effect->position.x + move.x;
    out->position.y = effect->position.y + move.y;
    out->position.z = effect->position.z + move.z;
    out->w = 1.0f;
    placedModelApplyLook(effect);
}

} /* extern "C" */
