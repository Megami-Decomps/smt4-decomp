#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtxA.h"
#include "shard/W6_W6Match3_SlotState.h"

extern "C" {
extern W6Match3SlotState DAT_006357d8[2];
u32 renderCtxPackPassFlags(u32 kind, bool enabled);
u32 asdGxPresetsGetByKind(u32 kind);
u32 asdGxPresetsGetHeightByKind(u32 kind);

// Draw the requested fade slot's color over the full selected render target.
void screenFadeSlotDraw(s32 index)
{
    W6Match3SlotState *fade = &DAT_006357d8[index];
    u32 color = fade->index;
    u32 alpha = static_cast<u32>(fade->value * static_cast<f32>(color & 0xFF));
    if (alpha != 0) {
        if (alpha > 255)
            alpha = 255;
        color = (color & 0xFFFFFF00) | alpha;
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, renderCtxPackPassFlags(1, false));
        renderCtxSelectTexture(g_renderCtx, NULL);
        f32 height = static_cast<f32>(asdGxPresetsGetByKind(renderCtxGetStereoMode(g_renderCtx)));
        f32 width = static_cast<f32>(asdGxPresetsGetHeightByKind(renderCtxGetStereoMode(g_renderCtx)));
        gxSubmitDrawZeroExtraParams(0.0f, 0.0f, width, height, color, color, color, 0.0f, color);
        renderStackPop(&g_renderCtx->stackA);
    }
}
}
