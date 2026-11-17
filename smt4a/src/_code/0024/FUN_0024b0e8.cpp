#include "code/Code002a_VariantA.h"
/* NON_MATCHING: only sprite origin/dimension argument load ordering and scratch-register allocation differ. */
#include "title/titleConfig.h"
#include "shard/S1ListPanel.h"
#include "shard/Shard0031.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern TitleConfigA *g_titleConfig;
void ifTouchRegionRemove();
void fillTwoWordsWithByte(void *destination, u32 value);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height);

void FUN_0024b0e8()
{
    s32 index;
    TitleConfigA *menu = g_titleConfig;
    for (index = 0; index < menu->countB; ++index) {
        ifTouchRegionRemove();
    }
    fillTwoWordsWithByte(menu->touchRegions, 0xffffffff);
    menu->countB = 0;
    // A word-aligned cursor cannot enter the odd-sized shared padding beginning at +0x26.
    struct CursorView { u8 prefix[0xf0]; u8 cursor[0x64]; };
    const CursorView *view = reinterpret_cast<const CursorView *>(menu);
    const TextureTableEntryIV *anchor = asdTMTexTableEntryAt(36, listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(view->cursor)) + 31);
    const TextureTableEntryIV *image = asdTMTexTableEntryAt(36, 27);
    menu->touchRegions[0] = ifTouchRegionAdd(static_cast<s16>(anchor->x + image->x),
        static_cast<s16>(anchor->y + image->y), image->width & 0x7fff, image->height & 0x7fff);
    ++menu->countB;
    image = asdTMTexTableEntryAt(36, 52);
    menu->touchRegions[1] = ifTouchRegionAdd(static_cast<s16>(anchor->x + image->x),
        static_cast<s16>(anchor->y + image->y), image->width & 0x7fff, image->height & 0x7fff);
    image = asdTMTexTableEntryAt(36, 56);
    menu->touchRegions[2] = ifTouchRegionAdd(static_cast<s16>(anchor->x + image->x),
        static_cast<s16>(anchor->y + image->y), image->width & 0x7fff, image->height & 0x7fff);
    image = asdTMTexTableEntryAt(36, 51);
    menu->touchRegions[3] = ifTouchRegionAdd(static_cast<s16>(anchor->x + image->x),
        static_cast<s16>(anchor->y + image->y), image->placement->width, image->placement->height);
    menu->countB += 3;
}
}
