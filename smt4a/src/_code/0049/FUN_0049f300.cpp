/* NON_MATCHING: render-stack push address scheduling and icon cold-branch placement differ. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
struct PanelFrameDrawWork {
    u32 job;
    u8 state;
    u8 unk005[0x46F];
    u8 showIcon;
};
typedef char PanelFrameDrawWorkIconCheck[offsetof(PanelFrameDrawWork, showIcon) == 0x474 ? 1 : -1];
extern "C" {
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(u32 mode, u32 flags);
void FUN_0049d594(PanelFrameDrawWork *work);
void efctSetSpeed(f32 speed);
s32 packNibblesAndByte(u32 low, u32 high, u32 byte);
void renderCtxResetColorScale(RenderCtxA *context);

u32 FUN_0049f300(PanelFrameDrawWork *work)
{
    if (work->state == 0 || work->state == 2)
        return 0;
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_001692ac(1, 0);
    renderStackPush(&context->stackA, state);
    if (work->state != 7) {
        if (work->state != 8 && work->state != 9)
            FUN_0049d594(work);
        else if (work->showIcon)
            FUN_001835b4(2, 0x33, 0x7E, 0, 0, 0xC9);
    }
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 7, 0);
    renderStackSet(&context->stackB, state);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
