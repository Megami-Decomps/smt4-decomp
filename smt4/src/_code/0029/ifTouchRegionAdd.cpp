#include "ui/IfTouch.h"

extern "C" {

/* Adds a touch region; returns its index, or -1 when all 200 are in use. */
s32 ifTouchRegionAdd(u16 x, u16 y, u16 width, u16 height)
{
    IfTouchState *state = g_ifTouch.state;
    s32 index = state->regionCount;

    if (index >= 200) {
        return -1;
    }
    state->regions[index].x = x;
    state->regions[index].y = y;
    state->regions[index].width = width;
    state->regions[index].height = height;
    state->regionCount++;
    return index;
}

} /* extern "C" */
