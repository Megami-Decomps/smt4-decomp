/* NON_MATCHING: native title-config global receiver and callback view recovered; masked sprite dimension/position loads and saved-pointer moves differ. */
#include "shard/S1ListPanel.h"
#include "title/titleConfig.h"

extern "C" {
extern TitleConfigCallbackView *g_titleConfig;
void ifTouchRegionRemove(void);
void memFill8(void *, u32 value);
s32 FUN_0029efa8(void *selection);
SpriteInfo *asdTMTexTableEntryAt(u32 group, u32 sprite);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height);
}

static __inline s32 addSpriteTouchRegion(const SpriteInfo *anchor, const SpriteInfo *sprite)
{
    return ifTouchRegionAdd(static_cast<s16>(anchor->x + sprite->x),
                            static_cast<s16>(anchor->y + sprite->y),
                            sprite->bounds.width & 0x7fff, sprite->bounds.height & 0x7fff);
}

// Rebuild four touch regions from the selected sprite-group anchor.
extern "C" void FUN_00259e98(void)
{
    TitleConfigCallbackView *panel = g_titleConfig;
    for (s32 index = 0; index < panel->countB; ++index) {
        ifTouchRegionRemove();
    }
    memFill8(&panel->resetButton, 0xffffffff);
    panel->countB = 0;
    SpriteInfo *anchor = asdTMTexTableEntryAt(0x2f, FUN_0029efa8(panel->cursor) + 0x1f);
    panel->resetButton = addSpriteTouchRegion(anchor, asdTMTexTableEntryAt(0x2f, 0x1b));
    ++panel->countB;
    panel->leftButton = addSpriteTouchRegion(anchor, asdTMTexTableEntryAt(0x2f, 0x34));
    panel->rightButton = addSpriteTouchRegion(anchor, asdTMTexTableEntryAt(0x2f, 0x38));
    SpriteInfo *sprite = asdTMTexTableEntryAt(0x2f, 0x33);
    panel->slider = ifTouchRegionAdd(static_cast<s16>(anchor->x + sprite->x),
                                   static_cast<s16>(anchor->y + sprite->y),
                                   sprite->size[0], sprite->size[1]);
    panel->countB += 3;
}
