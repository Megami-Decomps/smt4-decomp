/* NON_MATCHING: speed read is now the inlined vec2GetSpeed; remaining: retail derives the selected-state glyph id as id | (id >> 5), keeps the entrance pointer in a temp and allocates sl/fp differently */
#include "shard/S1ListPanel.h"
#include "ui/UiSpriteState.h"
struct ScrollingWidgetView {
    u8 prefix[0xC8];
    u8 sprites[0x14C];
    UiSpriteState entrance;
    UiSpriteState scroll;
};
typedef char ScrollingWidgetOffsets[offsetof(ScrollingWidgetView, entrance) == 0x214 &&
    offsetof(ScrollingWidgetView, scroll) == 0x2A0 ? 1 : -1];
extern "C" {
extern RenderCtx *g_titleScene;
SpriteInfo *FUN_002bf4f0(void *sprites, u32 id);
void efctSetSpeed(f32 speed);
void FUN_00230d84(void *sprites, u32 id, s32 x, s32 y, u32 color);
void FUN_00231bcc(void *sprites, u32 id, s32 x, s32 y, u32 color, u32 mode);
void gxSetClippedBottomScreenScissor(s32 x, s32 y, s32 width, s32 height);
f32 vec2GetSpeed(const UiSpriteState *sprite);
s32 vec2GetXInt(const UiSpriteState *sprite);
s32 vec2GetYInt(const UiSpriteState *sprite);

void FUN_0022d800(ScrollingWidgetView *widget, s32 index, u32 color, s32 selected)
{
    SpriteInfo *origin = FUN_002bf4f0(widget->sprites, index + 0x42F);
    s32 x = origin->x;
    s32 y = origin->y;
    efctSetSpeed(vec2GetSpeed(&widget->entrance));
    FUN_00230d84(widget->sprites, 0x426, x, y, color);
    FUN_00230d84(widget->sprites, 0x427, x, y, color);
    FUN_00230d84(widget->sprites, 0x428, x, y, color);
    efctSetSpeed(1.0f);
    FUN_00231bcc(widget->sprites, 0x429, x, y, color, 1);
    if (selected)
        FUN_00231bcc(widget->sprites, 0x42B, x, y, color, 1);
    else
        FUN_00231bcc(widget->sprites, 0x42A, x, y, color, 1);
    SpriteInfo *clip = FUN_002bf4f0(widget->sprites, 0x42A);
    gxSetClippedBottomScreenScissor(clip->x + x, clip->y + y, clip->size[0], clip->size[1]);
    SpriteInfo *content = FUN_002bf4f0(widget->sprites, 0x42C);
    UiSpriteState *scroll = &widget->scroll;
    s32 scrollX = vec2GetXInt(scroll);
    s32 contentX = scrollX + x - (content->bounds.width & 0x7FFF);
    s32 contentY = vec2GetYInt(scroll) + y;
    FUN_00231bcc(widget->sprites, 0x42C, contentX, contentY, color, 1);
    struct BaseRenderScissorView { u8 prefix[0x130C]; RenderCtxCachedState state; };
    ((BaseRenderScissorView *)g_titleScene)->state.set(0);
}
}
