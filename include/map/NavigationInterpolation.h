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
    union {
        /* 0x02C */ u8 unk02C[0x134];
        /* The touch drag that scrolls the navigation map, and the buttons' highlight timers. */
        struct {
            /* 0x02C */ NavigationPoint touchOrigin;   /* where the drag started, in screen pixels */
            /* 0x034 */ NavigationPoint valueOrigin;   /* the navigation value when it started */
            /* 0x03C */ NavigationPoint velocity;      /* what the map keeps sliding by after release */
            /* 0x044 */ NavigationPoint touch;         /* the latest touch position */
            /* 0x04C */ NavigationPoint previousTouch;
            /* 0x054 */ s8 stillFrames;                /* frames the touch has not moved (up to 99) */
            /* 0x055 */ u8 unk055;
            /* 0x056 */ u8 nextTimer;                  /* highlight frames of each button help entry */
            /* 0x057 */ u8 zoomOutTimer;
            /* 0x058 */ u8 confirmTimer;
            /* 0x059 */ u8 zoomInTimer;
            /* 0x05A */ u8 previousTimer;
            /* 0x05B */ u8 cancelTimer;
            /* 0x05C */ u8 unk05C[8];
            /* 0x064 */ s8 selection;                  /* the selected category icon */
        } drag;
    };
    /* 0x160 */ u8 unk160[2];
    /* 0x162 */ u8 cursorData[1];
};
typedef char NavigationInterpolationOffsets[
    offsetof(NavigationInterpolation, flags) == 0x10 &&
    offsetof(NavigationInterpolation, elapsed) == 0x18 &&
    offsetof(NavigationInterpolation, source) == 0x1C &&
    offsetof(NavigationInterpolation, target) == 0x24 &&
    offsetof(NavigationInterpolation, cursorData) == 0x162 ? 1 : -1];
typedef char NavigationInterpolationDragCheck[
    offsetof(NavigationInterpolation, drag.velocity) == 0x3C &&
    offsetof(NavigationInterpolation, drag.stillFrames) == 0x54 &&
    offsetof(NavigationInterpolation, drag.cancelTimer) == 0x5B &&
    offsetof(NavigationInterpolation, drag.selection) == 0x64 ? 1 : -1];
typedef char NavigationInterpolationStateCheck[
    offsetof(NavigationInterpolation, state.active) == 0xC &&
    sizeof(NavigationInterpolation) == 0x164 ? 1 : -1];
#endif
