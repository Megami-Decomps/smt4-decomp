#ifndef GFX_TRANSFORM_INTERPOLATION_H
#define GFX_TRANSFORM_INTERPOLATION_H
#include "common.h"
#include <stddef.h>
#include "ui/ScreenObject.h"

struct TransformInterpolation {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 flags;
    union {
        /* 0x24 */ u8 unk24[0x34];
        struct {
            u32 unk24;
            /* 0x28 */ s32 state;
            /* 0x2C */ s32 phase;
        } runtime;
    };
    /* 0x58 */ f32 x;
    /* 0x5C */ f32 y;
    /* 0x60 */ f32 startX;
    /* 0x64 */ f32 startY;
    /* 0x68 */ f32 targetX;
    /* 0x6C */ f32 targetY;
    /* 0x70 */ f32 valueA;
    /* 0x74 */ f32 valueB;
    /* 0x78 */ f32 startA;
    /* 0x7C */ f32 startB;
    /* 0x80 */ f32 targetA;
    /* 0x84 */ f32 targetB;
    /* 0x88 */ s32 elapsed;
    /* 0x8C */ s32 duration;
};
typedef char TransformInterpolationLayoutCheck[sizeof(TransformInterpolation) == 0x90 &&
    offsetof(TransformInterpolation, flags) == 0x20 &&
    offsetof(TransformInterpolation, elapsed) == 0x88 ? 1 : -1];
typedef char TransformInterpolationStateLayoutCheck[
    offsetof(TransformInterpolation, runtime.state) == 0x28 &&
    offsetof(TransformInterpolation, runtime.phase) == 0x2c ? 1 : -1];

/* Starts the view's scroll from where it is to the point that centres (x, y) on the 400x240 screen, over
 * `duration` frames (the content menus open with 1, the quest menu follows its selection with 10). */
static __inline void transformInterpolationScrollTo(TransformInterpolation *scroll, s16 x, s16 y, s32 duration)
{
    scroll->flags |= 0x1000;
    scroll->startX = scroll->x;
    scroll->startY = scroll->y;
    scroll->targetX = (f32)x - 200.0f;
    scroll->targetY = (f32)y - 120.0f;
    uiClampScrollOffset((ScreenObject *)scroll, &scroll->startX);
    uiClampScrollOffset((ScreenObject *)scroll, &scroll->targetX);
    scroll->startA = scroll->valueA;
    scroll->startB = scroll->valueB;
    scroll->targetA = (f32)x;
    scroll->targetB = (f32)y;
    scroll->elapsed = 0;
    scroll->duration = duration;
}
#endif
