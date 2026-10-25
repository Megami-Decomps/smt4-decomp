/* NON_MATCHING: scalar rectangle loads replace retail's four-float aggregate load and reorder VFP conversions. */
#include "classes/SelectionState.h"
#include "text/TextDraw.h"

/* Add the rectangle's origin and extent, then snap the text coordinates to pixels. The depth, spacing and
 * opacity arguments are forwarded unchanged (retail tail-calls textDrawString, placed right after). */
extern "C" f32 drawTextAtSnappedRectangle(const SelectionRectangle *rectangle, u32 layer, u32 color,
                                          const char *text, f32 x, f32 y, f32 depth, f32 spacing,
                                          f32 opacity)
{
    return textDrawString(layer, color, text,
                        (f32)(s32)(rectangle->x + rectangle->width + x),
                        (f32)(s32)(rectangle->y + rectangle->height + y),
                        depth, spacing, opacity);
}
