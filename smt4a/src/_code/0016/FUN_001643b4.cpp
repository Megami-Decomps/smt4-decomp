/* NON_MATCHING: block layout now matches retail (inlined copy of ifTouchRegionAdd); retail loads the coordinates and explicit sizes with ldrsh (here ldrh) and keeps the shared -1 in r7 (push r4-r8; here r3). */
#include "ui/IfTouch.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

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

// Append the touch rectangle of texture `index` in table `file`, stripping the encoded dimension flags.
extern "C" s32 FUN_001643b4(u32 file, s32 index)
{
    IfTouchState *initialState = g_ifTouch.state;
    TextureTableEntryIV *request = asdTMTexTableEntryAt(file, index);
    if (initialState->regionCount >= 200)
        return -1;
    if (request->placement == NULL)
        return touchRegionAppend(request->x, request->y, request->width & 0x7fff, request->height & 0x7fff);
    return touchRegionAppend(request->x, request->y, request->placement->width, request->placement->height);
}
