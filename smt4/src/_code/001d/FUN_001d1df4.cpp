/* NON_MATCHING: readable rewrite compiles; retail holds the output block as a separate pointer (r5) and schedules the colour unpacking differently (172 vs 156 rows) */
#include "common.h"
#include <math.h>

// Animated placed-effect object: keyed colour/scale curves evaluated per frame.
struct PlacedEffect {
    f32 position[3];        // 0x00
    u8 unk0c[0x18];
    u32 baseColor;          // 0x24
    u8 unk28[4];
    s32 frame;              // 0x2c
    u8 colorCurve[0x24];    // 0x30
    u8 unk54[0x30];
    u8 unk84[0x28];
    u8 unkAC[0x10];
    s32 duration;           // 0xbc
    u8 loops;               // 0xc0
    u8 unkC1[0x0f];
    f32 velocity[3];        // 0xd0
    f32 speed;              // 0xdc
    f32 gravity;            // 0xe0
    f32 out[0x0a];          // 0xe4: position, 1.0, colour rgb + a, two curve values
};

struct EffectDefaults {
    s8 enabled;
    f32 scale;
};

extern "C" {

extern EffectDefaults DAT_00472398;
extern f32 DAT_004ea91c[4];
extern f32 DAT_004ea92c[4];

s32 effGetFrameCounter(void);
u32 FUN_00269694(void* curve, void* keys, s32 frame, s32 duration);
f32 FUN_00269508(void* curve, s32 frame, s32 duration);
void placedModelApplyLook(PlacedEffect* effect);

// Advances the effect by the frame counter and recomputes its output position and colour.
void FUN_001d1df4(PlacedEffect* effect)
{
    if (effect->frame == 0 && DAT_00472398.enabled != 0) {
        *(f32*)((u8*)effect + 0x38) = DAT_00472398.scale;
    }
    s32 frame = effGetFrameCounter() + effect->frame;
    s32 duration = effect->duration;
    effect->frame = frame;
    if (frame == 0) return;
    f32 t = (f32)frame;
    if (frame >= duration && duration > 0) {
        if (effect->loops == 0) return;
        frame = 0;
        effect->frame = 0;
    }

    u32 tint = FUN_00269694(&effect->colorCurve, &effect->unk84, frame, duration);
    u32 base = effect->baseColor;
    DAT_004ea92c[0] = (f32)(base >> 24) * 0.003921569f;
    DAT_004ea92c[1] = (f32)((base >> 16) & 0xff) * 0.003921569f;
    DAT_004ea92c[2] = (f32)((base >> 8) & 0xff) * 0.003921569f;
    DAT_004ea92c[3] = (f32)(base & 0xff) * 0.003921569f;
    DAT_004ea91c[0] = (f32)(tint >> 24) * 0.003921569f;
    DAT_004ea91c[1] = (f32)((tint >> 16) & 0xff) * 0.003921569f;
    DAT_004ea91c[2] = (f32)((tint >> 8) & 0xff) * 0.003921569f;
    DAT_004ea91c[3] = (f32)(tint & 0xff) * 0.003921569f;
    for (s32 i = 0; i < 4; i++) DAT_004ea91c[i] *= DAT_004ea92c[i];
    effect->out[4] = DAT_004ea91c[0];
    effect->out[5] = DAT_004ea91c[1];
    effect->out[6] = DAT_004ea91c[2];
    effect->out[7] = DAT_004ea91c[3];
    effect->out[8] = FUN_00269508(&effect->unk54[0x10], frame, duration);
    effect->out[9] = FUN_00269508(&effect->unk84[0xc], frame, duration);

    f32 vx = effect->velocity[0];
    f32 vy = effect->velocity[1];
    f32 vz = effect->velocity[2];
    f32 dx = 0.0f, dy = 0.0f, dz = 0.0f;
    if (vx != 0.0f || vy != 0.0f || vz != 0.0f) {
        f32 inv = 1.0f / sqrtf(vx * vx + vy * vy + vz * vz);
        dx = vx * inv;
        dy = vy * inv;
        dz = vz * inv;
    }
    f32 half = t * 0.5f;
    effect->out[0] = effect->position[0] + (vx + dx * effect->speed * half) * t;
    effect->out[1] = effect->position[1] + ((vy + dy * effect->speed * half) * t - effect->gravity * t * t * 0.5f);
    effect->out[2] = effect->position[2] + (vz + dz * effect->speed * half) * t;
    effect->out[3] = 1.0f;
    placedModelApplyLook(effect);
}

} /* extern "C" */
