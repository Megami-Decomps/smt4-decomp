/* NON_MATCHING: after the second button lookup retail loads its height last and keeps the region values in other
 * callee-saved registers; only that scheduling differs. */
/* Builds the two touch regions from the selected page's frame and button rectangles. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
u32 ifTouchRegionAdd(s16 x, s16 y, s16 width, s16 height); // declcheck: local (the shared declaration does not compile here or changes this unit)

void pageRegisterButtonTouchRegions(void *object)
{
    struct PageView {
        u8 unk00[0xC];
        s32 page;
        u16 unk10;
        u16 firstRegion;
        u16 secondRegion;
    };
    struct TouchBounds { s32 x, y, width, height; }; /* x/y: the top-left corner */
    PageView *page = (PageView *)object;
    const TextureTableEntryIV *rect = asdTMTexTableEntryAt(43, page->page + 79);
    s32 x = rect->x;
    s32 y = rect->y;
    rect = asdTMTexTableEntryAt(43, 200);
    x += rect->x;
    y += rect->y;
    rect = asdTMTexTableEntryAt(43, 194);
    TouchBounds firstButton = {x + rect->x, y + rect->y, rect->width & 0x7FFF, rect->height & 0x7FFF};
    rect = asdTMTexTableEntryAt(43, 195);
    TouchBounds secondButton = {x + rect->x, y + rect->y, rect->width & 0x7FFF, rect->height & 0x7FFF};
    /* Each touch area is twice its button's size, starting half a button up and left of it. */
    TouchBounds firstArea = {firstButton.x - firstButton.width / 2, firstButton.y - firstButton.height / 2,
                             firstButton.width * 2, firstButton.height * 2};
    TouchBounds secondArea = {secondButton.x - secondButton.width / 2, secondButton.y - secondButton.height / 2,
                              secondButton.width * 2, secondButton.height * 2};
    page->firstRegion = (u16)ifTouchRegionAdd((s16)firstArea.x, (s16)firstArea.y,
                                              (s16)firstArea.width, (s16)firstArea.height);
    page->secondRegion = (u16)ifTouchRegionAdd((s16)secondArea.x, (s16)secondArea.y,
                                               (s16)secondArea.width, (s16)secondArea.height);
}
}
