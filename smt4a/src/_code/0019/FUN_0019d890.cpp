/* NON_MATCHING: inlined append has different argument-load order and capacity-branch placement. */
#include "ui/IfTouch.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
// Append the touch rectangle of a table entry, using explicit extents when provided.
s32 FUN_0019d890(u32 file, s32 index)
{
    IfTouchState* state = g_ifTouch.state;
    const TextureTableEntryIV* input = asdTMTexTableEntryAt(file, index);
    if (state->timer >= 10) {
        return -1;
    }
    if (input->placement == NULL) {
        return ifTouchAppendRegion(input->x, input->y,
                                    input->width & 0x7FFF, input->height & 0x7FFF);
    }
    return ifTouchAppendRegion(input->x, input->y, input->placement->width, input->placement->height);
}
}
