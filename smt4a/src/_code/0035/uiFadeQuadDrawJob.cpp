/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 37 diff lines remain, scheduling/register allocation only. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match8_FadeQuad.h"
#include "shard/JobWork.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
u32 FUN_001692ac(u32 state, u32 flags);
void FUN_0016c4b8(RenderCtxA *context, s32 mode);
u32 asdGxPresetsGetByKind(u32 target);
u32 asdGxPresetsGetHeightByKind(u32 target);
void FUN_0014e314(u32 topLeft, u32 topRight, u32 bottomLeft, u32 bottomRight,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

// Draw a full-target fade quad with its stored alpha scaled by the job's fade amount.
u32 uiFadeQuadDrawJob(u32 job)
{
    FadeQuadWork *work = (FadeQuadWork *)jobGetWork(job);
    if (work->alpha != 0.0f) {
        u32 color = work->color;
        RenderCtxA *context = g_renderCtx;
        u32 alpha = static_cast<u32>(work->alpha * static_cast<f32>(color & 0xff));
        if (alpha > 255) {
            alpha = 255;
        }
        color = (color & 0xffffff00) | alpha;
        renderCtxPushA(context, FUN_001692ac(1, 0));
        FUN_0016c4b8(g_renderCtx, 0);
        f32 height = static_cast<f32>(asdGxPresetsGetByKind(g_renderCtx->unk052C));
        f32 width = static_cast<f32>(asdGxPresetsGetHeightByKind(g_renderCtx->unk052C));
        FUN_0014e314(color, color, color, color, 0.0f, 0.0f, width, height, 0.0f);
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
}
