/* NON_MATCHING: scalar rectangle loads replace retail's four-float aggregate load and reorder VFP conversions. */
#include "classes/SelectionState.h"

extern "C" void FUN_00162790(void *target, u32 style, const u16 *text, f32 x, f32 y);

/* Add the rectangle's origin and extent, then snap the text coordinates to pixels. */
extern "C" void drawTextAtSnappedRectangle(const SelectionRectangle *rectangle, void *target, u32 style,
                               const u16 *text, f32 x, f32 y)
{
    FUN_00162790(target, style, text,
                 (f32)(s32)(rectangle->x + rectangle->width + x),
                 (f32)(s32)(rectangle->y + rectangle->height + y));
}
