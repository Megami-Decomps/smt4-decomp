/* NON_MATCHING: inlined append has different argument-load order and capacity-branch placement. */
#include "ui/TouchRectangleRequest.h"

extern "C" {
const TouchRectangleRequest* FUN_002bf4f8(void);

// Append the active touch rectangle, using explicit extents when provided.
s32 FUN_002aa024(void)
{
    IfTouchState* state = g_ifTouch.state;
    const TouchRectangleRequest* input = FUN_002bf4f8();
    if (state->timer >= 10) {
        return -1;
    }
    if (input->dimensions == NULL) {
        return ifTouchAppendRegion(input->x, input->y,
                                    input->width & 0x7FFF, input->height & 0x7FFF);
    }
    return ifTouchAppendRegion(input->x, input->y, input->dimensions->width, input->dimensions->height);
}
}
