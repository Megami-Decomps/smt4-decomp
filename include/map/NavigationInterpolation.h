#ifndef MAP_NAVIGATION_INTERPOLATION_H
#define MAP_NAVIGATION_INTERPOLATION_H
#include "common.h"
#include <stddef.h>

struct NavigationPoint {
    f32 x, y;
};
struct NavigationInterpolation {
    union {
        /* 0x000 */ u8 unk000[0x10];
        struct {
            u8 unk000[0xC];
            /* 0x00C */ u8 active;
        } state;
        struct {
            /* 0x000 */ u32 unk000;
            /* 0x004 */ s32 step;
            /* 0x008 */ s32 substep;
        } progress;
    };
    /* 0x010 */ u32 flags;
    /* 0x014 */ u32 unk014;
    /* 0x018 */ s32 elapsed;
    /* 0x01C */ NavigationPoint source;
    /* 0x024 */ NavigationPoint target;
    /* 0x02C */ u8 unk02C[0x136];
    /* 0x162 */ u8 cursorData[1];
};
typedef char NavigationInterpolationOffsets[
    offsetof(NavigationInterpolation, flags) == 0x10 &&
    offsetof(NavigationInterpolation, elapsed) == 0x18 &&
    offsetof(NavigationInterpolation, source) == 0x1C &&
    offsetof(NavigationInterpolation, target) == 0x24 &&
    offsetof(NavigationInterpolation, cursorData) == 0x162 ? 1 : -1];
typedef char NavigationInterpolationStateCheck[
    offsetof(NavigationInterpolation, state.active) == 0xC &&
    sizeof(NavigationInterpolation) == 0x164 ? 1 : -1];
#endif
