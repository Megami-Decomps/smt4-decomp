#include "gfx/DrawParameterOwner.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

namespace {
// The speed belongs beyond the canonical draw-owner prefix, whose size remains 0x440.
struct ParameterOverlayWorkView {
    DrawParameterOwner owner;
    u8 animation[0x24]; // 0x440, speed at animation + 0x20
};
typedef char ParameterOverlayWorkSpeedOffsetCheck[
    offsetof(ParameterOverlayWorkView, animation) == 0x440 && sizeof(ParameterOverlayWorkView) == 0x464 ? 1 : -1];
}

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(u32 preset, u32 index);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *animation);
void FUN_00183bb0(void);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

// Draw the enabled overlay at the owner's animation speed and restore render state.
u32 aocBoardDrawParameterOverlay(u32 job)
{
    ParameterOverlayWorkView *work = (ParameterOverlayWorkView *)jobGetWork(job);
    if (work->owner.dirty == 0)
        return 0;
    u32 enabled = work->owner.control.flags & 0x10;
    if (enabled == 0)
        return enabled;
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    efctSetSpeed(vec2GetSpeed(work->animation));
    FUN_001835b4(2, 8, 0x14F, 0, 0, 6);
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    FUN_00183bb0();
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
