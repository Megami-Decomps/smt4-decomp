#include "camp/RenderCtx.h"
#include "gfx/EffectColorUnpack.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(s32 mode, s32 flags);
void efctSetSpeed(f32 speed);
void FUN_001834e4(const EffectColor *color);
void FUN_00183bb0();
void screenDrawShadedRect(s32 x, s32 y, s32 width, s32 height, s32 alpha);

void uiDrawScreenDimmer(u32 unused, s32 topScreen)
{
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    efctSetSpeed(0.5f);
    EffectColor black;
    FUN_001834e4(effectColorUnpack(0x000000ff, &black));
    if (topScreen) {
        screenDrawShadedRect(0, 0, 400, 240, 245);
    } else {
        screenDrawShadedRect(0, 0, 320, 240, 211);
    }
    renderStackPop(&g_renderCtx->stackA);
    efctSetSpeed(1.0f);
    FUN_00183bb0();
}
}
