/* NON_MATCHING: final render-state pop becomes a tail call; retail keeps a shared VFP/register epilogue after BL. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes_VariantA.h"
#include "shard/W6_W6Match8_TitleOverlay.h"
#include "camp/RenderCtxTitle.h"


extern "C" {
u32 renderCtxPackPassFlags(u32 slot, u32 flags);
void renderStackPushIndexed(RenderCtx *context, s32 stack, u32 value);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite();
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 scale);
void effectRenderTransformedInstance(UiSpriteState *element, f32 value);
s32 renderCtxPopState(RenderCtx *context, s32 stack);
}

// Draw the visible title overlay, using a separate render state for its special-mode element.
extern "C" void titleOverlayDraw(TitleOverlay *overlay)
{
    if (overlay->visible) {
        renderStackPushIndexed(g_titleScene, 3, renderCtxPackPassFlags(1, 0));
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();
        s32 frame = static_cast<s32>(renderCtxCalculateStereoParallax(g_titleScene, 0.27f));
        if (overlay->mode == 7 || overlay->mode == 8 || overlay->mode == 9) {
            RenderCtx *context = g_titleScene;
            renderCtxSetB(context, packNibblesAndByte(6, 1, 0));
            effectRenderTransformedInstance(&overlay->elements[6], static_cast<f32>(frame));
            context = g_titleScene;
            renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
        }
        effectRenderTransformedInstance(&overlay->elements[0], static_cast<f32>(frame));
        effectRenderTransformedInstance(&overlay->elements[1], static_cast<f32>(frame));
        effectRenderTransformedInstance(&overlay->elements[2], static_cast<f32>(frame));
        effectRenderTransformedInstance(&overlay->elements[3], static_cast<f32>(frame));
        effectRenderTransformedInstance(&overlay->elements[5], static_cast<f32>(frame));
        renderCtxPopState(g_titleScene, 3);
    }
}
