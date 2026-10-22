#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFECTSCALARKEYS_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFECTSCALARKEYS_H
#include "common.h"
#include <stddef.h>

struct EffectScalarKey {
    /* 0x00 */ s32 frame;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ f32 value;
    /* 0x24 */ u8 unk24[0x20];
};
struct EffectScalarKeySource {
    /* 0x000 */ u8 unk000[0x24];
    /* 0x024 */ EffectScalarKey keys[4];
};
struct EffectScalarKeyState {
    /* 0x000 */ u8 unk000[0x24];
    /* 0x024 */ EffectScalarKey keys[4];
    /* 0x134 */ u8 unk134[0xF4];
    /* 0x228 */ f32 step;
    /* 0x22C */ u8 unk22C[0x28];
    /* 0x254 */ f32 target;
    /* 0x258 */ u8 unk258[0x8D];
    /* 0x2E5 */ s8 index;
    /* 0x2E6 */ u8 unk2E6[0x3E];
    /* 0x324 */ s32 duration;
};
typedef char EffectScalarKeySizeCheck[sizeof(EffectScalarKey) == 0x44 ? 1 : -1];
typedef char EffectScalarKeyStateOffsetCheck[offsetof(EffectScalarKeyState, step) == 0x228 &&
    offsetof(EffectScalarKeyState, target) == 0x254 && offsetof(EffectScalarKeyState, index) == 0x2E5 &&
    offsetof(EffectScalarKeyState, duration) == 0x324 ? 1 : -1];

struct EffectScalarKeyTrack {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ EffectScalarKey keys[4];
    /* 0x130 */ u8 unk130[0xF4];
    /* 0x224 */ f32 step;
    /* 0x228 */ u8 unk228[0x28];
    /* 0x250 */ f32 target;
    /* 0x254 */ u8 unk254[0x90];
    /* 0x2E4 */ s8 index;
    /* 0x2E5 */ u8 unk2E5[0x3B];
    /* 0x320 */ s32 duration;
};
typedef char EffectScalarKeyTrackOffsetCheck[
    offsetof(EffectScalarKeyTrack, step) == 0x224 &&
    offsetof(EffectScalarKeyTrack, target) == 0x250 &&
    offsetof(EffectScalarKeyTrack, index) == 0x2E4 &&
    offsetof(EffectScalarKeyTrack, duration) == 0x320 &&
    sizeof(EffectScalarKeyTrack) == 0x324 ? 1 : -1];
struct EffectIntegerKey {
    /* 0x00 */ s32 value;
    /* 0x04 */ s32 frame;
    /* 0x08 */ u8 unk08[0x10];
};
struct EffectIntegerKeySource {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ EffectIntegerKey keys[4];
};
typedef char EffectIntegerKeySizeCheck[sizeof(EffectIntegerKey) == 0x18 ? 1 : -1];
typedef char EffectIntegerKeySourceOffsetCheck[offsetof(EffectIntegerKeySource, keys) == 0x44 ? 1 : -1];

struct EffectScalarKeyLegacySource {
    u8 unk000[0x18];
    EffectScalarKey keys[4]; // 0x18
};
struct EffectScalarKeyLegacyTrack {
    u8 unk000[0x18];
    EffectScalarKey keys[4]; // 0x18
    u8 unk128[0xf8];
    f32 step; // 0x220
    u8 unk224[0x28];
    f32 target; // 0x24c
    u8 unk250[0x93];
    s8 index; // 0x2e3
    u8 unk2e4[0x38];
    s32 duration; // 0x31c
};
typedef char EffectScalarKeyLegacyTrackOffsetCheck[
    offsetof(EffectScalarKeyLegacyTrack, keys) == 0x18 &&
    offsetof(EffectScalarKeyLegacyTrack, step) == 0x220 &&
    offsetof(EffectScalarKeyLegacyTrack, target) == 0x24c &&
    offsetof(EffectScalarKeyLegacyTrack, index) == 0x2e3 &&
    offsetof(EffectScalarKeyLegacyTrack, duration) == 0x31c &&
    sizeof(EffectScalarKeyLegacyTrack) == 0x320 ? 1 : -1];
#endif
