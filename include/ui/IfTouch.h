/* Touch-interface regions, selection and repeat state (both games). */
#ifndef UI_IFTOUCH_H
#define UI_IFTOUCH_H
#include "common.h"
#include <stddef.h>

typedef struct TouchRegion {
    /* 0x00 */ u16 x;
    /* 0x02 */ u16 y;
    /* 0x04 */ u16 width;
    /* 0x06 */ u16 height;
} TouchRegion;

typedef struct IfTouchState {
    union {
        /* 0x000 */ u8 unk000[8];
        /* 0x000 */ u32 process;
    };
    /* 0x008 */ u8 selectionMode;
    /* 0x009 */ u8 unk009;
    /* 0x00A */ TouchRegion regions[200];
    /* 0x64A */ s16 regionCount;
    /* 0x64C */ s16 timer;
    /* 0x64E */ s16 selectedRegion;
    /* 0x650 */ s16 repeatCounter;
    /* 0x652 */ u8 unk652[6];
    /* 0x658 */ u32 unk658;
    /* 0x65C */ u8 unk65C[4];
    /* 0x660 */ u32 unk660;
    /* 0x664 */ u32 unk664;
    /* 0x668 */ u8 unk668[8];
    /* 0x670 */ u32 unk670;
    /* 0x674 */ u8 unk674[8];
    /* 0x67C */ u8 enabled;
} IfTouchState;

typedef struct IfTouchGlobals {
    union {
        /* 0x00 */ u8 unk00[4];
        /* 0x00 */ s8 userCount;
    };
    /* 0x04 */ IfTouchState *state;
} IfTouchGlobals;
extern "C" IfTouchGlobals g_ifTouch;


static __inline s32 ifTouchAppendRegion(s16 x, s16 y, s16 width, s16 height)
{
    IfTouchState* state = g_ifTouch.state;
    s32 index = state->timer;
    if (index < 10) {
        state->regions[index].x = x;
        state->regions[index].y = y;
        state->regions[index].width = width;
        state->regions[index].height = height;
        ++state->timer;
        return index;
    }
    return -1;
}

/* Retail 32-bit layout invariants. */
typedef char TouchRegionSizeCheck[sizeof(TouchRegion) == 0x8 ? 1 : -1];
typedef char IfTouchStateSizeCheck[sizeof(IfTouchState) == 0x680 ? 1 : -1];
typedef char IfTouchGlobalsSizeCheck[sizeof(IfTouchGlobals) == 0x8 ? 1 : -1];
typedef char IfTouchProcessOffsetCheck[offsetof(IfTouchState, process) == 0 ? 1 : -1];
typedef char IfTouchUserCountOffsetCheck[offsetof(IfTouchGlobals, userCount) == 0 ? 1 : -1];

#endif
