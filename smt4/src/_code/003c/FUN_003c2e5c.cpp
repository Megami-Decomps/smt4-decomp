/* NON_MATCHING: count snapshots use LDM, with different float register allocation and scheduling. */
#include "shard/ScrollbarGeometry.h"

extern "C" void FUN_003c2e5c(const ScrollbarGeometry *bar, s32 *x, s32 *y,
                             s32 *width, s32 *height)
{
    s32 totalCount = bar->totalCount;
    s32 visibleCount = bar->visibleCount;
    s32 trackHeight = bar->trackHeight;
    s32 scrollOffset = bar->scrollOffset;
    f32 thumbHeight = (f32)trackHeight * ((f32)visibleCount / (f32)totalCount);
    *x = 0;
    if (thumbHeight < 12.0f) {
        thumbHeight = 12.0f;
    }
    *y = (s32)(((f32)trackHeight - thumbHeight) *
               ((f32)scrollOffset / (f32)(totalCount - visibleCount)));
    *width = bar->width;
    *height = (s32)thumbHeight;
}
