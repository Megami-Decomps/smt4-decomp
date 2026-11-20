#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFECTSCALARKEYS_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFECTSCALARKEYS_H
#include "common.h"
#include <stddef.h>

/* A key as the key tracks lay their four keys out from the track's start (0x44 bytes): their
 * interpolators address key i at track + i * 0x44, its frame 0x20 into the record. */
struct EffectScalarTrackKey {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 frame;
    /* 0x24 */ u8 unk24[0x1C];
    /* 0x40 */ f32 value;
};
struct EffectScalarKeyTrack {
    /* 0x000 */ EffectScalarTrackKey keys[4];
    /* 0x110 */ u8 unk110[0x114];
    /* 0x224 */ f32 step;
    /* 0x228 */ u8 unk228[0x28];
    /* 0x250 */ f32 target;
    /* 0x254 */ u8 unk254[0x90];
    /* 0x2E4 */ s8 index;
    /* 0x2E5 */ u8 unk2E5[0x3B];
    /* 0x320 */ s32 duration;
};
typedef char EffectScalarKeyTrackOffsetCheck[
    sizeof(EffectScalarTrackKey) == 0x44 &&
    offsetof(EffectScalarKeyTrack, step) == 0x224 &&
    offsetof(EffectScalarKeyTrack, target) == 0x250 &&
    offsetof(EffectScalarKeyTrack, index) == 0x2E4 &&
    offsetof(EffectScalarKeyTrack, duration) == 0x320 &&
    sizeof(EffectScalarKeyTrack) == 0x324 ? 1 : -1];

/* The state and source tracks hold the same four keys one word in. */
struct EffectScalarKeySource {
    /* 0x000 */ u8 unk000[0x4];
    /* 0x004 */ EffectScalarTrackKey keys[4];
};
struct EffectScalarKeyState {
    /* 0x000 */ u8 unk000[0x4];
    /* 0x004 */ EffectScalarTrackKey keys[4];
    /* 0x114 */ u8 unk114[0x114];
    /* 0x228 */ f32 step;
    /* 0x22C */ u8 unk22C[0x28];
    /* 0x254 */ f32 target;
    /* 0x258 */ u8 unk258[0x8D];
    /* 0x2E5 */ s8 index;
    /* 0x2E6 */ u8 unk2E6[0x3E];
    /* 0x324 */ s32 duration;
};
typedef char EffectScalarKeyStateOffsetCheck[offsetof(EffectScalarKeyState, step) == 0x228 &&
    offsetof(EffectScalarKeyState, target) == 0x254 && offsetof(EffectScalarKeyState, index) == 0x2E5 &&
    offsetof(EffectScalarKeyState, duration) == 0x324 ? 1 : -1];
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

/* Legacy key records start at offset 0 of their owner; the frame sits 0x18 into the record. */
struct EffectScalarKeyLegacy {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 frame;
    /* 0x1C */ u8 unk1C[0x1C];
    /* 0x38 */ f32 value;
    /* 0x3C */ u8 unk3C[0x8];
};
struct EffectScalarKeyLegacySource {
    EffectScalarKeyLegacy keys[4]; // 0x00
};
struct EffectScalarKeyLegacyTrack {
    EffectScalarKeyLegacy keys[4]; // 0x00
    u8 unk110[0x110];
    f32 step; // 0x220
    u8 unk224[0x28];
    f32 target; // 0x24c
    u8 unk250[0x93];
    s8 index; // 0x2e3
    u8 unk2e4[0x38];
    s32 duration; // 0x31c
};
typedef char EffectScalarKeyLegacySizeCheck[sizeof(EffectScalarKeyLegacy) == 0x44 ? 1 : -1];
typedef char EffectScalarKeyLegacyTrackOffsetCheck[
    offsetof(EffectScalarKeyLegacyTrack, keys) == 0 &&
    offsetof(EffectScalarKeyLegacyTrack, step) == 0x220 &&
    offsetof(EffectScalarKeyLegacyTrack, target) == 0x24c &&
    offsetof(EffectScalarKeyLegacyTrack, index) == 0x2e3 &&
    offsetof(EffectScalarKeyLegacyTrack, duration) == 0x31c &&
    sizeof(EffectScalarKeyLegacyTrack) == 0x320 ? 1 : -1];
#endif
