#include "classes/SelectionState.h"
#include "text/TextDraw.h"

/* Add the rectangle's origin and extent, then snap the text coordinates to pixels. The depth, spacing and
 * opacity arguments are forwarded unchanged (retail tail-calls textDrawString, placed right after). */
extern "C" f32 drawTextAtSnappedRectangle(const SelectionRectangle *rectangle, u32 layer, u32 color,
                            const char *text, f32 x, f32 y, f32 depth, f32 spacing,
                            f32 opacity)
{
    SelectionRectangle bounds = *rectangle;
    f32 snappedX = (f32)(s32)(bounds.x + bounds.width + x);
    f32 snappedY = (f32)(s32)(bounds.y + bounds.height + y);
    return textDrawString(layer, color, text, snappedX, snappedY, depth, spacing, opacity);
}
