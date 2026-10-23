#ifndef GFX_SCALARCURVETRANSITION_H
#define GFX_SCALARCURVETRANSITION_H
#include "common.h"
#include <stddef.h>

struct ScalarCurveKey {
    s32 frame; // 0x00
    u8 unk04[0x1a];
    s16 value; // 0x1e
    u8 unk20[4];
    s32 randomAmplitude; // 0x24
    u8 unk28[0x1c];
};
struct ScalarCurveTransition {
    u8 unk000[0x2c];
    ScalarCurveKey keys[4]; // 0x02c
    u8 unk13c[0xf8];
    f32 slope; // 0x234
    u8 unk238[0x28];
    f32 target; // 0x260
    u8 unk264[0x84];
    s8 currentKey; // 0x2e8
    u8 unk2e9[0x47];
    s32 duration; // 0x330
};
typedef char ScalarCurveTransitionLayoutCheck[sizeof(ScalarCurveKey) == 0x44 &&
    offsetof(ScalarCurveKey, value) == 0x1e && offsetof(ScalarCurveKey, randomAmplitude) == 0x24 &&
    offsetof(ScalarCurveTransition, slope) == 0x234 && offsetof(ScalarCurveTransition, target) == 0x260 &&
    offsetof(ScalarCurveTransition, currentKey) == 0x2e8 && offsetof(ScalarCurveTransition, duration) == 0x330 ? 1 : -1];
#endif
