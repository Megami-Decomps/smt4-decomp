/* NON_MATCHING: initial scissor-stack addressing/flush registers and blend-address scheduling differ. */
#include "ui/UiSpriteApi.h"
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxA.h"

namespace {
struct MaskedSpriteWidget {
    u8 unk00[0x44];
    u8 position[0x20];
};
typedef char MaskedSpriteWidgetPositionCheck[
    offsetof(MaskedSpriteWidget, position) == 0x44 ? 1 : -1];
}

extern "C" {
void FUN_00168e00(s32 x, s32 y, s32 width, s32 height);
void renderPopStateStacks();

void FUN_003b7960(const MaskedSpriteWidget *widget, s32 x, s32 y,
                  u32 foreground, u32 background)
{
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x12, 0x6E);
    texDrawTableEntryAtStoredOrigin(2, 0x12, background, x, y, 0xDD);
    RenderCtxScissorA *context = g_renderCtx;
    bool scissored = false;
    if (context->scissor.entries[context->scissor.count] == RENDER_STATE_SCISSOR) {
        renderStackSet(&context->scissor, 0);
        scissored = true;
    }
    FUN_00168e00(frame->x + x, frame->y + y, frame->placement->width, frame->placement->height);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    s32 targetY = vec2GetYInt((UiSpriteState *)widget->position) + y;
    s32 targetX = vec2GetXInt((UiSpriteState *)widget->position) + x;
    texDrawTableEntryAtStoredOrigin(2, 0x12, foreground, targetX, targetY, 0xDD);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    if (scissored) {
        renderStackSet(&g_renderCtx->scissor, RENDER_STATE_SCISSOR);
    }
    renderPopStateStacks();
}
}
