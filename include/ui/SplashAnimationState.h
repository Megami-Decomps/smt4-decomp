#ifndef UI_SPLASH_ANIMATION_STATE_H
#define UI_SPLASH_ANIMATION_STATE_H

#include "common.h"
#include <stddef.h>

struct SplashAnimationState {
    s32 scriptState; // 0x00
    u8 unk04[0x18];
    s32 phase; // 0x1c
    union {
        f32 fade; // 0x20
        s32 fadeBits;
    };
    union {
        f32 frame; // 0x24
        s32 frameBits;
    };
    f32 firstAlpha; // 0x28
    f32 firstScale; // 0x2c
    f32 secondAlpha; // 0x30
    f32 secondScale; // 0x34
    s32 wait; // 0x38
    s32 touchRegion; // 0x3c
};
typedef char SplashAnimationStateLayoutCheck[
    sizeof(SplashAnimationState) == 0x40 &&
    offsetof(SplashAnimationState, phase) == 0x1c &&
    offsetof(SplashAnimationState, fade) == 0x20 &&
    offsetof(SplashAnimationState, frame) == 0x24 &&
    offsetof(SplashAnimationState, firstAlpha) == 0x28 &&
    offsetof(SplashAnimationState, secondAlpha) == 0x30 &&
    offsetof(SplashAnimationState, touchRegion) == 0x3c ? 1 : -1];

#endif
