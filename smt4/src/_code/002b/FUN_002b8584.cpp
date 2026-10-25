/* NON_MATCHING: compiler merges the two rectangle-source branches and their capacity checks; retail retains separate stores. */
#include "ui/TouchRectangleRequest.h"
extern "C" TouchRectangleRequest *asdTMTexTableEntryAt();

// Append the current requested touch rectangle, stripping the encoded dimension flags.
extern "C" s32 FUN_002b8584()
{
    IfTouchState *initialState = g_ifTouch.state;
    TouchRectangleRequest *request = asdTMTexTableEntryAt();
    IfTouchState *state = g_ifTouch.state;
    if (initialState->regionCount >= 200)
        return -1;
    u16 x = request->x;
    u16 y = request->y;
    u16 width;
    u16 height;
    if (request->dimensions) {
        width = request->dimensions->width;
        height = request->dimensions->height;
    } else {
        width = request->width & 0x7fff;
        height = request->height & 0x7fff;
    }
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
