/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 37 diff lines remain, scheduling/register allocation only. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match8_FadeQuad.h"
#include "shard/JobWork.h"


extern "C" {
extern RenderCtx *g_titleScene;
u32 FUN_002c5d80(u32 state, u32 flags);
u32 asdGxPresetsGetByKind(u32 target);
u32 FUN_002c15ac(u32 target);
void FUN_002c0944(u32 topLeft, u32 topRight, u32 bottomLeft, u32 bottomRight,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

// Draw a full-target fade quad with its stored alpha scaled by the job's fade amount.
u32 uiFadeQuadDrawJob(u32 job)
{
    FadeQuadWork *work = (FadeQuadWork *)jobGetWork(job);
    if (work->alpha != 0.0f) {
        u32 color = work->color;
        RenderCtx *context = g_titleScene;
        u32 alpha = static_cast<u32>(work->alpha * static_cast<f32>(color & 0xff));
        if (alpha > 255) {
            alpha = 255;
        }
        color = (color & 0xffffff00) | alpha;
        renderCtxPushA(context, FUN_002c5d80(1, 0));
        renderCtxSelectTexture(g_titleScene, 0);
        f32 height = static_cast<f32>(asdGxPresetsGetByKind(g_titleScene->unk0528));
        f32 width = static_cast<f32>(FUN_002c15ac(g_titleScene->unk0528));
        FUN_002c0944(color, color, color, color, 0.0f, 0.0f, width, height, 0.0f);
        renderStackPop(&g_titleScene->stackA);
    }
    return 0;
}
}
