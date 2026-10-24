/* NON_MATCHING: speed read is now the inlined vec2GetSpeed; remaining: ands vs tst on the flag test, renderStackPush address scheduling (add ip before ldr) and the order of mov r0,#0/add sp at the return */
#include "gfx/DrawParameterOwner.h"
#include "camp/RenderCtx.h"

// The speed state lies beyond DrawParameterOwner's established 0x440-byte prefix.
struct EffectSpeedState {
    u8 unk00[0x20];
    f32 speed;
};
struct EffectDrawWorkView {
    DrawParameterOwner owner;
    /* 0x440 */ EffectSpeedState speedState;
};
extern "C" {
extern RenderCtxA* g_renderCtx;
EffectDrawWorkView* jobGetWork(void);
s32 FUN_001692ac(u32 enabled, u32 option);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const EffectSpeedState* state);
void FUN_001835b4(s32 layer, s32 category, s32 effect, s32 option, s32 flags, s32 mode);
void FUN_00183bb0(void);
void skinObjectUpdateMatrices(RenderCtxA* context);
void renderCtxResetColorScale(RenderCtxA* context);

// Draw the enabled effect with its own speed, restoring render state afterward.
u32 FUN_00472e1c(void)
{
    EffectDrawWorkView* work = jobGetWork();
    if (work->owner.dirty && (work->owner.control.flags & 0x10)) {
        RenderCtxA* context = g_renderCtx;
        s32 mode = FUN_001692ac(1, 0);
        renderStackPush(&context->stackA, mode);
        efctSetSpeed(vec2GetSpeed(&work->speedState));
        FUN_001835b4(2, 8, 0x14F, 0, 0, 6);
        efctSetSpeed(1.0f);
        renderStackPop(&g_renderCtx->stackA);
        FUN_00183bb0();
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
    return 0;
}
}
