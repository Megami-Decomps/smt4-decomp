#include "gfx/DrawParameterOwner.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

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
ParameterOverlayWorkView *jobGetWork(void);
extern RenderCtx *g_titleScene;
s32 FUN_002c5d80(u32 preset, u32 index);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *animation);
void FUN_002bed3c(void);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

// Draw the enabled overlay at the owner's animation speed and restore render state.
u32 aocBoardDrawParameterOverlay(void)
{
    ParameterOverlayWorkView *work = jobGetWork();
    if (work->owner.dirty == 0)
        return 0;
    u32 enabled = work->owner.control.flags & 0x10;
    if (enabled == 0)
        return enabled;
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 0));
    efctSetSpeed(vec2GetSpeed(work->animation));
    FUN_002bf288(2, 14, 0x14F, 0, 0, 6);
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    FUN_002bed3c();
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return 0;
}
}
