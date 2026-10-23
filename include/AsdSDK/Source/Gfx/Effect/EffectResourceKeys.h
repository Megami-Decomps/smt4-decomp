#ifndef ASDSDK_GFX_EFFECT_EFFECTRESOURCEKEYS_H
#define ASDSDK_GFX_EFFECT_EFFECTRESOURCEKEYS_H
#include "common.h"
#include <stddef.h>

struct EffectResourceKey {
    s32 frame; // 0x00
    u8 unk04[0x1c];
    s16 value; // 0x20
    u8 unk22[0x12];
    s32 resource; // 0x34
    u8 unk38[0xc];
};
struct EffectResourceKeyTrack {
    u8 unk000[0x1c];
    EffectResourceKey keys[4]; // 0x01c
    u8 unk12C[0x100];
    f32 step; // 0x22c
    u8 unk230[0x28];
    f32 target; // 0x258
    u8 unk25C[0x8a];
    s8 index; // 0x2e6
    u8 unk2E7[0x41];
    s32 duration; // 0x328
};
typedef char EffectResourceKeyOffsets[
    sizeof(EffectResourceKey) == 0x44 &&
    offsetof(EffectResourceKey, value) == 0x20 &&
    offsetof(EffectResourceKey, resource) == 0x34 &&
    offsetof(EffectResourceKeyTrack, step) == 0x22c &&
    offsetof(EffectResourceKeyTrack, target) == 0x258 &&
    offsetof(EffectResourceKeyTrack, index) == 0x2e6 &&
    offsetof(EffectResourceKeyTrack, duration) == 0x328 ? 1 : -1];
#endif
