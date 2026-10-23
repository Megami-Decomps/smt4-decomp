/* NON_MATCHING: initial scissor-stack addressing/flush registers and blend-address scheduling differ. */
#include "shard/S1ListPanel.h"

namespace {
struct MaskedSpriteWidget {
    u8 unk00[0x44];
    u8 position[0x20];
};
typedef char MaskedSpriteWidgetPositionCheck[
    offsetof(MaskedSpriteWidget, position) == 0x44 ? 1 : -1];
}

extern "C" {
extern RenderCtx *g_renderCtx;
SpriteInfo *FUN_001834a4(u32 group, u32 sprite);
void FUN_001835b4(s32 display, u32 group, u32 sprite, s32 x, s32 y, u32 flags);
void FUN_00168e00(s32 x, s32 y, s32 width, s32 height);
s32 packNibblesAndByte(u32 first, u32 second, u32 byte);
s32 vec2GetXInt(const void *position);
s32 vec2GetYInt(const void *position);
void renderPopStateStacks();

void FUN_003b7960(const MaskedSpriteWidget *widget, s32 x, s32 y,
                  u32 foreground, u32 background)
{
    SpriteInfo *frame = FUN_001834a4(0x12, 0x6E);
    FUN_001835b4(2, 0x12, background, x, y, 0xDD);
    RenderCtx *context = g_renderCtx;
    bool scissored = false;
    if (context->states[context->stateIndex] == RENDER_STATE_SCISSOR) {
        // Scissor mode uses the same cached-state stack layout as blend mode.
        reinterpret_cast<RenderCtxCachedState *>(&context->stateIndex)->set(0);
        scissored = true;
    }
    FUN_00168e00(frame->x + x, frame->y + y, frame->size[0], frame->size[1]);
    g_renderCtx->blendStateView.state.set(packNibblesAndByte(6, 1, 0));
    s32 targetY = vec2GetYInt(widget->position) + y;
    s32 targetX = vec2GetXInt(widget->position) + x;
    FUN_001835b4(2, 0x12, foreground, targetX, targetY, 0xDD);
    g_renderCtx->blendStateView.state.set(packNibblesAndByte(6, 7, 0));
    if (scissored) {
        reinterpret_cast<RenderCtxCachedState *>(&g_renderCtx->stateIndex)->set(RENDER_STATE_SCISSOR);
    }
    renderPopStateStacks();
}
}
