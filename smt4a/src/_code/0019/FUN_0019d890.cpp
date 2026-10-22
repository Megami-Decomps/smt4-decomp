/* NON_MATCHING: inlined append has different argument-load order and capacity-branch placement. */
#include "ui/TouchRectangleRequest.h"

extern "C" {
const TouchRectangleRequest* FUN_001834a4(void);

// Append the active touch rectangle, using explicit extents when provided.
s32 FUN_0019d890(void)
{
    IfTouchState* state = g_ifTouch.state;
    const TouchRectangleRequest* input = FUN_001834a4();
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
