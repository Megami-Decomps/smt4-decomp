#include "util/FUN_002a4894.h"
/* NON_MATCHING: only sprite origin/dimension argument load ordering and scratch-register allocation differ. */
#include "title/titleConfig.h"
#include "shard/S1ListPanel.h"
#include "shard/Shard0031.h"

extern "C" {
extern TitleConfigA *g_titleConfig;
void ifTouchRegionRemove();
void fillTwoWordsWithByte(void *destination, u32 value);
const SpriteInfo *asdTMTexTableEntryAt(s32 table, s32 image);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height);

void FUN_0024b0e8()
{
    TitleConfigA *menu = g_titleConfig;
    for (s32 index = 0; index < menu->countB; ++index) {
        ifTouchRegionRemove();
    }
    fillTwoWordsWithByte(menu->touchRegions, 0xffffffff);
    menu->countB = 0;
    // A word-aligned cursor cannot enter the odd-sized shared padding beginning at +0x26.
    struct CursorView { u8 prefix[0xf0]; u8 cursor[0x64]; };
    const CursorView *view = reinterpret_cast<const CursorView *>(menu);
    const SpriteInfo *anchor = asdTMTexTableEntryAt(36, FUN_002a4894(reinterpret_cast<const Object *>(view->cursor)) + 31);
    const SpriteInfo *image = asdTMTexTableEntryAt(36, 27);
    menu->touchRegions[0] = ifTouchRegionAdd(static_cast<s16>(anchor->x + image->x),
        static_cast<s16>(anchor->y + image->y), image->bounds.width & 0x7fff, image->bounds.height & 0x7fff);
    ++menu->countB;
    image = asdTMTexTableEntryAt(36, 52);
    menu->touchRegions[1] = ifTouchRegionAdd(static_cast<s16>(anchor->x + image->x),
        static_cast<s16>(anchor->y + image->y), image->bounds.width & 0x7fff, image->bounds.height & 0x7fff);
    image = asdTMTexTableEntryAt(36, 56);
    menu->touchRegions[2] = ifTouchRegionAdd(static_cast<s16>(anchor->x + image->x),
        static_cast<s16>(anchor->y + image->y), image->bounds.width & 0x7fff, image->bounds.height & 0x7fff);
    image = asdTMTexTableEntryAt(36, 51);
    menu->touchRegions[3] = ifTouchRegionAdd(static_cast<s16>(anchor->x + image->x),
        static_cast<s16>(anchor->y + image->y), image->size[0], image->size[1]);
    menu->countB += 3;
}
}
