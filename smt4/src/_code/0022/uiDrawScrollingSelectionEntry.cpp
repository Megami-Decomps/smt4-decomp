#include "shard/S1ListPanel.h"
#include "ui/UiSpriteApi.h"
#include "camp/RenderCtxTitle.h"
struct ScrollingWidgetView {
    u8 prefix[0xC8];
    u8 sprites[0x14C];
    UiSpriteState entrance;
    UiSpriteState scroll;
};
typedef char ScrollingWidgetOffsets[offsetof(ScrollingWidgetView, entrance) == 0x214 &&
    offsetof(ScrollingWidgetView, scroll) == 0x2A0 ? 1 : -1];
extern "C" {
SpriteInfo *layoutFindTableEntry(void *sprites, u32 id); // declcheck: local (the shared declaration in AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h does not compile here: a value of type "TextureTableEntryIV *" cannot be used to initialize an entity of type "SpriteInfo *")
void efctSetSpeed(f32 speed);
void uiDrawBottomRightOffset(void *sprites, u32 id, s32 x, s32 y, u32 color);
void uiDrawSizedTextureAtRegionEnd(void *sprites, u32 id, s32 x, s32 y, u32 color, u32 mode);
void gxSetClippedBottomScreenScissor(s32 x, s32 y, s32 width, s32 height);

void uiDrawScrollingSelectionEntry(ScrollingWidgetView *widget, s32 index, u32 color, s32 selected)
{
    SpriteInfo *origin = layoutFindTableEntry(widget->sprites, index + 0x42F);
    s32 x = origin->x;
    s32 y = origin->y;
    UiSpriteState *entrance = &widget->entrance;
    efctSetSpeed(vec2GetSpeed(entrance));
    uiDrawBottomRightOffset(widget->sprites, 0x426, x, y, color);
    uiDrawBottomRightOffset(widget->sprites, 0x427, x, y, color);
    uiDrawBottomRightOffset(widget->sprites, 0x428, x, y, color);
    efctSetSpeed(1.0f);
    uiDrawSizedTextureAtRegionEnd(widget->sprites, 0x429, x, y, color, 1);
    if (selected)
        uiDrawSizedTextureAtRegionEnd(widget->sprites, 0x42B, x, y, color, 1);
    else
        uiDrawSizedTextureAtRegionEnd(widget->sprites, 0x42A, x, y, color, 1);
    SpriteInfo *clip = layoutFindTableEntry(widget->sprites, 0x42A);
    s32 clipX = clip->x + x;
    s32 clipY = clip->y + y;
    s32 clipWidth = clip->size[0];
    s32 clipHeight = clip->size[1];
    gxSetClippedBottomScreenScissor(clipX, clipY, clipWidth, clipHeight);
    SpriteInfo *content = layoutFindTableEntry(widget->sprites, 0x42C);
    UiSpriteState *scroll = &widget->scroll;
    s32 scrollX = vec2GetXInt(scroll);
    s32 contentX = scrollX + x - (content->bounds.width & 0x7FFF);
    s32 contentY = vec2GetYInt(scroll) + y;
    uiDrawSizedTextureAtRegionEnd(widget->sprites, 0x42C, contentX, contentY, color, 1);
    renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);
}
}
