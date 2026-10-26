/* NON_MATCHING: the rectangle copy and rows now match retail; only the VFP registers of the snapped sums/conversions differ (retail writes the sums over s0 and converts in place). */
#include "classes/SelectionState.h"
#include "text/TextDraw.h"

/* Add the rectangle's origin and extent, then snap the text coordinates to pixels. The depth, spacing and
 * opacity arguments are forwarded unchanged (retail tail-calls textDrawString, placed right after). */
extern "C" f32 drawTextAtSnappedRectangle(const SelectionRectangle *rectangle, u32 layer, u32 color,
                                          const char *text, f32 x, f32 y, f32 depth, f32 spacing,
                                          f32 opacity)
{
    SelectionRectangle bounds = *rectangle;
    return textDrawString(layer, color, text,
                        (f32)(s32)(bounds.x + bounds.width + x),
                        (f32)(s32)(bounds.y + bounds.height + y),
                        depth, spacing, opacity);
}
