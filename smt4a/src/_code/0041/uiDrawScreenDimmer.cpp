#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "gfx/EffectColorUnpack.h"

extern "C" {
void efctSetSpeed(f32 speed);
void gxSetUniformQuadColors(const EffectColor *color);
void gxResetColorQuadToWhite();
void screenDrawShadedRect(s32 x, s32 y, s32 width, s32 height, s32 alpha);

void uiDrawScreenDimmer(u32 unused, s32 topScreen)
{
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(0.5f);
    EffectColor black;
    gxSetUniformQuadColors(effectColorUnpack(0x000000ff, &black));
    if (topScreen) {
        screenDrawShadedRect(0, 0, 400, 240, 245);
    } else {
        screenDrawShadedRect(0, 0, 320, 240, 211);
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
}
}
