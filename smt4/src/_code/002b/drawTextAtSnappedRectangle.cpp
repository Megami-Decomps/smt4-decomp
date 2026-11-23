#include "classes/SelectionState.h"
#include "text/TextDraw.h"

/* Add the rectangle's origin and extent, then snap the text coordinates to pixels. The depth, spacing and
 * opacity arguments are forwarded unchanged (retail tail-calls textDrawString, placed right after). */
extern "C" f32 drawTextAtSnappedRectangle(const SelectionRectangle *rectangle, f32 x, f32 y,
                            f32 depth, f32 spacing, u32 layer, u32 color, f32 opacity,
                            const char *text)
{
    f32 snappedX = (f32)(s32)(rectangle->x + rectangle->width + x);
    f32 snappedY = (f32)(s32)(rectangle->y + rectangle->height + y);
    return textDrawString(snappedX, snappedY, depth, layer, spacing, color, opacity, text);
}
