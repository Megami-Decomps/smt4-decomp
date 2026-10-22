#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFECTALPHAKEYS_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFECTALPHAKEYS_H

#include "common.h"
#include <stddef.h>

struct EffectAlphaKey {
    u8 unk00[0x14];
    s32 frame;
    u8 unk18[0x1F];
    u8 alpha;
    u8 unk38[0xC];
};
struct EffectAlphaKeyState {
    EffectAlphaKey keys[4];
    u8 unk110[0x10C];
    f32 step;
    u8 unk220[0x28];
    f32 target;
    u8 unk24C[0x96];
    s8 index;
    u8 unk2E3[0x35];
    s32 duration;
};
typedef char EffectAlphaKeyLayoutCheck[sizeof(EffectAlphaKey) == 0x44 &&
    offsetof(EffectAlphaKey, alpha) == 0x37 &&
    offsetof(EffectAlphaKeyState, step) == 0x21C &&
    offsetof(EffectAlphaKeyState, target) == 0x248 &&
    offsetof(EffectAlphaKeyState, index) == 0x2E2 &&
    offsetof(EffectAlphaKeyState, duration) == 0x318 ? 1 : -1];

#endif
