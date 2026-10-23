/* NON_MATCHING: Inlined render-state push hoists the destination address into ip instead of reusing r3. */
#include "camp/RenderCtx.h"
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
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(s32 first, s32 second);
void efctSetSpeed(f32 alpha);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void FUN_001835b4(u32 layer, u32 texture, s32 x, s32 y, u32 color, s32 frame);
void FUN_00183bb0(void);

/* Draws the running event overlay under a temporary render state and restores the previous state. */
u32 FUN_002a4334(void)
{
    EventOverlayWork *work = (EventOverlayWork *)g_eventEffect.unk08;
    if (work->state != 0 && work->state != 5) {
        s32 x = DAT_0057f430.frame * 1000;
        FUN_00157558(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_001692ac(1, 0);
        renderStackPush(&context->stackA, state);
        efctSetSpeed(work->opacity);
        u32 layer = 2;
        if (work->alternateLayer != 0) {
            layer = 0x3002;
        }
        s32 y = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        FUN_001835b4(layer, DAT_0057f430.texture, x, y, 0, 0x2E);
        FUN_00183bb0();
        efctSetSpeed(1.0f);
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
}
