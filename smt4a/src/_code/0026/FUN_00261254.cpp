/* NON_MATCHING: named effect-color snapshot restores packet initialization loads; final quad argument/VFP scheduling still differs. */
#include "camp/RenderCtx.h"
#include "event/2dEvent/EventEffect.h"
#include "event/EffectQuadParameters.h"
#include "Model/MoriModelShadowMap.h"
extern "C" {
extern EventEffectGlobalsA g_eventEffect;
s32 FUN_001692ac(s32 mode, s32 flags);
void FUN_00164034(const EffectQuadParameters *first, const EffectQuadParameters *second, const EffectQuadParameters *third, const EffectQuadParameters *fourth, f32 x, f32 y, f32 width, f32 height, f32 depth);
void FUN_00183bb0(void);
void efctSetSpeed(f32 speed);

/* Draw a full-screen quad in the effect color while preserving the render-state stack. */
u32 FUN_00261254(void)
{
    /* The color lies beyond the shared EventEffectA job/state prefix. */
    struct EffectColorView {
        u8 prefix[0xC];
        u32 color;
    };
    const EffectColorView *effect = reinterpret_cast<const EffectColorView *>(g_eventEffect.effect);
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    u32 color = effect->color;
    EffectQuadParameters parameters;
    parameters.weight = 1.0f;
    parameters.u = 0.0f;
    parameters.v = 0.0f;
    parameters.color = color;
    renderCtxSelectTexture(g_renderCtx, 0);
    FUN_00164034(&parameters, &parameters, &parameters, &parameters, 0.0f, 0.0f, 400.0f, 240.0f, 0.21484375f);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}
}
