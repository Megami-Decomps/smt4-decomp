/* NON_MATCHING: the two rectangle sources now have separate inlined appends like retail; retail loads the sizes before the state, keeps the index in r0 (no final mov) and hoists the -1 result into r7. */
#include "ui/TouchRectangleRequest.h"
extern "C" TouchRectangleRequest *asdTMTexTableEntryAt();

// Appends a touch region to the state; returns its index, or -1 when the list is full.
static __inline s32 touchRegionAppend(s16 x, s16 y, s16 width, s16 height)
{
    IfTouchState *state = g_ifTouch.state;
    s32 index = state->regionCount;
    if (index >= 200)
        return -1;
    state->regions[index].x = x;
    state->regions[index].y = y;
    state->regions[index].width = width;
    state->regions[index].height = height;
    ++state->regionCount;
    return index;
}

// Append the current requested touch rectangle, stripping the encoded dimension flags.
extern "C" s32 FUN_001643b4()
{
    IfTouchState *initialState = g_ifTouch.state;
    TouchRectangleRequest *request = asdTMTexTableEntryAt();
    if (initialState->regionCount >= 200)
        return -1;
    if (request->dimensions)
        return touchRegionAppend(request->x, request->y, request->dimensions->width, request->dimensions->height);
    return touchRegionAppend(request->x, request->y, request->width & 0x7fff, request->height & 0x7fff);
}
