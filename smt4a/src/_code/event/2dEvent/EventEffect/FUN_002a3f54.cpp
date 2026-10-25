#include "gfx/StereoParallax.h"
#include "event/2dEvent/EventFilter.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
extern EventFilterTexture DAT_0057f3e8[6];
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
void FUN_00183bb0(void);
void efctSetSpeed(f32 speed);
s32 FUN_001692ac(u32 first, u32 second);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);

// Draw callback of the full-screen event filter: one overlay image faded by the work's opacity and pulse.
u32 FUN_002a3f54(void *)
{
    EventFilterWork *work = g_eventEffect.filterState.work;
    if (work->state != 0 && work->state != 1 && work->state != 5) {
        s32 entry = DAT_0057f3e8[work->texture].node * 1000;
        FUN_00157558(g_renderCtx);
        renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
        if (work->texture == 3 || work->texture == 4 || work->texture == 5) {
            renderCtxPushB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        }
        f32 level = work->pulse;
        if (work->texture == 4 || work->texture == 5) {
            level = 0.5f + (work->pulse - 0.5f) * 0.6f;
        }
        efctSetSpeed(work->opacity * level);
        s32 x = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        FUN_001835b4(2, DAT_0057f3e8[work->texture].table, entry, x, 0, 0x2E);
        if (work->texture == 3 || work->texture == 4 || work->texture == 5) {
            renderStackPop(&g_renderCtx->stackB);
        }
        FUN_00183bb0();
        efctSetSpeed(1.0f);
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
}
