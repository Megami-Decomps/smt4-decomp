/* NON_MATCHING: block layout now matches retail (inlined copy of ifTouchRegionAdd); retail loads the coordinates and explicit sizes with ldrsh (here ldrh) and keeps the shared -1 in r7 (push r4-r8; here r3). */
#include "ui/TouchRectangleRequest.h"
extern "C" TouchRectangleRequest *asdTMTexTableEntryAt();

// Inlined copy of ifTouchRegionAdd: adds a touch region; returns its index, or -1 when all 200 are in use.
static s32 touchRegionAppend(u16 x, u16 y, u16 width, u16 height)
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

// Append the current requested touch rectangle, stripping the encoded dimension flags.
extern "C" s32 FUN_002b8584()
{
    IfTouchState *initialState = g_ifTouch.state;
    TouchRectangleRequest *request = asdTMTexTableEntryAt();
    if (initialState->regionCount >= 200)
        return -1;
    if (request->dimensions == NULL)
        return touchRegionAppend(request->x, request->y, request->width & 0x7fff, request->height & 0x7fff);
    return touchRegionAppend(request->x, request->y, request->dimensions->width, request->dimensions->height);
}
