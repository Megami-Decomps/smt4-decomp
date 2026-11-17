#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "event/2dEvent/EventEffect.h"

struct EventOverlayWork {
    u8 unk00[8];
    s32 state;
    u8 unk0C[4];
    f32 opacity;
    u8 alternateLayer;
};
struct EventOverlayTexture {
    u32 texture;
    s32 frame;
};
extern "C" {
extern EventEffectGlobalsA g_eventEffect;
extern EventOverlayTexture DAT_0057f430;
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
s32 renderCtxPackPassFlags(s32 first, s32 second);
void efctSetSpeed(f32 alpha);
void gxResetColorQuadToWhite(void);

/* Draws the running event overlay under a temporary render state and restores the previous state. */
u32 FUN_002a4334(void)
{
    EventOverlayWork *work = (EventOverlayWork *)g_eventEffect.unk08;
    if (work->state != 0 && work->state != 5) {
        s32 x = DAT_0057f430.frame * 1000;
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        s32 state = renderCtxPackPassFlags(1, 0);
        renderStackPush(&context->stackA, state);
        efctSetSpeed(work->opacity);
        u32 layer = 2;
        if (work->alternateLayer != 0) {
            layer = 0x3002;
        }
        s32 y = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        texDrawTableEntryAtStoredOrigin(layer, DAT_0057f430.texture, x, y, 0, 0x2E);
        gxResetColorQuadToWhite();
        efctSetSpeed(1.0f);
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
}
