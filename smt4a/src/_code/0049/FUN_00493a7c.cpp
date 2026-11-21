/* NON_MATCHING: each control's centre and size are kept unclipped and halved at the call like retail; remaining: retail also computes the second control's arguments before the first call (kept in r5-r8, sign-extended after it) where the build computes them after it and spills the first centre. */
#include "shard/S1ListPanel.h"
#include "ui/IfTouch.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
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
    const TextureTableEntryIV* layout = asdTMTexTableEntryAt(0x20, work->layout + 0x4F);
    s32 originX = layout->x;
    s32 originY = layout->y;
    const TextureTableEntryIV* common = asdTMTexTableEntryAt(0x20, 0xC8);
    originX += common->x;
    originY += common->y;
    const TextureTableEntryIV* first = asdTMTexTableEntryAt(0x20, 0xC2);
    s32 firstX = originX + first->x;
    s32 firstY = originY + first->y;
    s32 firstWidth = first->width & 0x7FFF;
    s32 firstHeight = first->height & 0x7FFF;
    const TextureTableEntryIV* second = asdTMTexTableEntryAt(0x20, 0xC3);
    s32 secondX = originX + second->x;
    s32 secondY = originY + second->y;
    s32 secondWidth = second->width & 0x7FFF;
    s32 secondHeight = second->height & 0x7FFF;
    work->firstRegion = (s16)ifTouchRegionAdd((s16)(firstX - firstWidth / 2), (s16)(firstY - firstHeight / 2),
                                              (s16)(firstWidth * 2), (s16)(firstHeight * 2));
    work->secondRegion = (s16)ifTouchRegionAdd((s16)(secondX - secondWidth / 2), (s16)(secondY - secondHeight / 2),
                                               (s16)(secondWidth * 2), (s16)(secondHeight * 2));
}
}
