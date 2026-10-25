#include "common.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"

extern "C" {

typedef struct TouchRegion {
    /* 0x0 */ u16 x;
    /* 0x2 */ u16 y;
    /* 0x4 */ u16 width;
    /* 0x6 */ u16 height;
} TouchRegion;

typedef struct IfTouchState {
    /* 0x000 */ u8 unk000[10];
    /* 0x00A */ TouchRegion regions[200];
    /* 0x64A */ s16 count;
} IfTouchState;

typedef struct IfTouch {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ IfTouchState *state;
} IfTouch;

extern IfTouch g_ifTouch;

/* Adds a touch region; returns its index, or -1 when all 200 are in use. */
s32 ifTouchRegionAdd(u16 x, u16 y, u16 width, u16 height)
{
    IfTouchState *state = g_ifTouch.state;
    s32 index = state->count;

    if (index >= 200) {
        return -1;
    }
    state->regions[index].x = x;
    state->regions[index].y = y;
    state->regions[index].width = width;
    state->regions[index].height = height;
    state->count++;
    return index;
}

} /* extern "C" */
