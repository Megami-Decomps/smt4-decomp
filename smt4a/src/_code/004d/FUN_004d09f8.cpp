/* NON_MATCHING: same loads and operations; retail schedules the float conversions differently (the scroll offset is loaded early, the track height converted again just before the multiply) and clears *x after the conversions, where armcc hoists the zero to the entry. */
#include "shard/ScrollbarGeometry.h"

extern "C" void FUN_004d09f8(const ScrollbarGeometry *bar, s32 *x, s32 *y,
                             s32 *width, s32 *height)
{
    s32 visibleCount = bar->visibleCount;
    s32 totalCount = bar->totalCount;
    s32 trackHeight = bar->trackHeight;
    s32 scrollOffset = bar->scrollOffset;
    s32 hidden = totalCount - visibleCount;
    f32 thumbHeight = (f32)trackHeight * ((f32)visibleCount / (f32)totalCount);
    *x = 0;
    if (thumbHeight < 12.0f) {
        thumbHeight = 12.0f;
    }
    *y = (s32)(((f32)trackHeight - thumbHeight) *
               ((f32)scrollOffset / (f32)hidden));
    *width = bar->width;
    *height = (s32)thumbHeight;
}
