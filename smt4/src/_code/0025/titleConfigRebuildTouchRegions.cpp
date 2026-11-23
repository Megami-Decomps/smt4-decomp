#include "shard/S1ListPanel.h"
#include "title/titleConfig.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern TitleConfigCallbackView *g_titleConfig;
void ifTouchRegionRemove(void);
void memFill8(void *, u32 value);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height);
}

static s32 addSpriteTouchRegion(const TextureTableEntryIV *anchor, const TextureTableEntryIV *sprite)
{
    return ifTouchRegionAdd((s16)(anchor->x + sprite->x),
                            (s16)(anchor->y + sprite->y),
                            sprite->width & 0x7fff, sprite->height & 0x7fff);
}

/* Rebuilds the four touch regions around the selected sprite-group anchor. */
extern "C" void titleConfigRebuildTouchRegions(void)
{
    TitleConfigCallbackView *panel = g_titleConfig;
    s32 index;
    for (index = 0; index < panel->countB; ++index) {
        ifTouchRegionRemove();
    }
    memFill8(&panel->resetButton, 0xffffffff);
    panel->countB = 0;
    TextureTableEntryIV *anchor = asdTMTexTableEntryAt(0x2f, listCursorGetRowIfUnblocked(panel->cursor) + 0x1f);
    const TextureTableEntryIV *sprite = asdTMTexTableEntryAt(0x2f, 0x1b);
    panel->resetButton = addSpriteTouchRegion(anchor, sprite);
    ++panel->countB;
    sprite = asdTMTexTableEntryAt(0x2f, 0x34);
    panel->leftButton = addSpriteTouchRegion(anchor, sprite);
    sprite = asdTMTexTableEntryAt(0x2f, 0x38);
    panel->rightButton = addSpriteTouchRegion(anchor, sprite);
    sprite = asdTMTexTableEntryAt(0x2f, 0x33);
    panel->slider = ifTouchRegionAdd((s16)(anchor->x + sprite->x),
                                   (s16)(anchor->y + sprite->y),
                                   sprite->placement->width, sprite->placement->height);
    panel->countB += 3;
}
