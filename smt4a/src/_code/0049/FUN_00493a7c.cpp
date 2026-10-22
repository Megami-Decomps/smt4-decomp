/* NON_MATCHING: rectangle liveness spills local bounds instead of native's register-only layout. */
#include "shard/S1ListPanel.h"
#include "ui/IfTouch.h"

extern "C" {
const SpriteInfo* FUN_001834a4(u32 group, u32 id);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height);

// Register the two selection controls using the page's shared sprite origin.
void FUN_00493a7c(void* owner)
{
    struct SelectionTouchView {
        u8 unk00[0xC];
        s32 layout;
        u8 unk10[2];
        s16 firstRegion;
        s16 secondRegion;
    };
    SelectionTouchView* work = static_cast<SelectionTouchView*>(owner);
    const SpriteInfo* layout = FUN_001834a4(0x20, work->layout + 0x4F);
    s16 originX = layout->x;
    s16 originY = layout->y;
    const SpriteInfo* common = FUN_001834a4(0x20, 0xC8);
    originX += common->x;
    originY += common->y;
    const SpriteInfo* first = FUN_001834a4(0x20, 0xC2);
    s32 firstWidth = first->bounds.width & 0x7FFF;
    s32 firstHeight = first->bounds.height & 0x7FFF;
    s16 firstLeft = (s16)(originX + first->x - firstWidth / 2);
    s16 firstTop = (s16)(originY + first->y - firstHeight / 2);
    const SpriteInfo* second = FUN_001834a4(0x20, 0xC3);
    s32 secondWidth = second->bounds.width & 0x7FFF;
    s32 secondHeight = second->bounds.height & 0x7FFF;
    s16 secondLeft = (s16)(originX + second->x - secondWidth / 2);
    s16 secondTop = (s16)(originY + second->y - secondHeight / 2);
    work->firstRegion = (s16)ifTouchRegionAdd(
        firstLeft, firstTop,
        (s16)(firstWidth * 2), (s16)(firstHeight * 2));
    work->secondRegion = (s16)ifTouchRegionAdd(
        secondLeft, secondTop,
        (s16)(secondWidth * 2), (s16)(secondHeight * 2));
}
}
