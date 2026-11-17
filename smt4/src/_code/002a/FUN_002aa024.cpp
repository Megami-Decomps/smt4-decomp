/* NON_MATCHING: block layout now matches retail (ifTouchRegionAdd-shaped inline append); retail loads the coordinates and explicit sizes with ldrsh (here ldrh) and keeps the shared -1 in r7 (push r4-r8; here r3). */
#include "ui/IfTouch.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

// Adds a timed touch region (the ifTouchRegionAdd shape on the 10-entry list); returns its index, or -1 when full.
static s32 touchTimedRegionAdd(u16 x, u16 y, u16 width, u16 height)
{
    IfTouchState* state = g_ifTouch.state;
    s32 index = state->timer;

    if (index >= 10) {
        return -1;
    }
    state->regions[index].x = x;
    state->regions[index].y = y;
    state->regions[index].width = width;
    state->regions[index].height = height;
    state->timer++;
    return index;
}

// Append the touch rectangle of texture `index` in table `file`, using explicit extents when provided.
extern "C" s32 FUN_002aa024(u32 file, s32 index)
{
    IfTouchState* state = g_ifTouch.state;
    const TextureTableEntryIV* input = asdTMTexTableEntryAt(file, index);
    if (state->timer >= 10) {
        return -1;
    }
    if (input->placement == NULL) {
        return touchTimedRegionAdd(input->x, input->y, input->width & 0x7FFF, input->height & 0x7FFF);
    }
    return touchTimedRegionAdd(input->x, input->y, input->placement->width, input->placement->height);
}
