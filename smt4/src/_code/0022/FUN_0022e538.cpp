/* NON_MATCHING: touch-bound geometry retains an extra saved register and uses different intermediate arithmetic scheduling. */
/* Builds the two touch regions from the selected page's frame and button rectangles. */
#include "common.h"

extern "C" {
void *asdTMTexTableEntryAt(u32 table, u32 id);
u32 ifTouchRegionAdd(s16 x, s16 y, s16 width, s16 height);

void FUN_0022e538(void *object)
{
    struct PageView {
        u8 unk00[0xC];
        s32 page;
        u16 unk10;
        u16 firstRegion;
        u16 secondRegion;
    };
    struct FrameRect {
        u32 unk00;
        u16 width;
        u16 height;
        u16 x;
        u16 y;
    };
    struct TouchBounds { u32 x, y, width, height; };
    PageView *page = (PageView *)object;
    const FrameRect *rect = (const FrameRect *)asdTMTexTableEntryAt(43, page->page + 79);
    s32 x = rect->x;
    s32 y = rect->y;
    rect = (const FrameRect *)asdTMTexTableEntryAt(43, 200);
    x += rect->x;
    y += rect->y;
    rect = (const FrameRect *)asdTMTexTableEntryAt(43, 194);
    TouchBounds first = {x + rect->x, y + rect->y, rect->width & 0x7FFF, rect->height & 0x7FFF};
    rect = (const FrameRect *)asdTMTexTableEntryAt(43, 195);
    TouchBounds second = {x + rect->x, y + rect->y, rect->width & 0x7FFF, rect->height & 0x7FFF};
    page->firstRegion = (u16)ifTouchRegionAdd((s16)(first.x - first.width / 2),
        (s16)(first.y - first.height / 2), (s16)(first.width * 2), (s16)(first.height * 2));
    page->secondRegion = (u16)ifTouchRegionAdd((s16)(second.x - second.width / 2),
        (s16)(second.y - second.height / 2), (s16)(second.width * 2), (s16)(second.height * 2));
}
}
