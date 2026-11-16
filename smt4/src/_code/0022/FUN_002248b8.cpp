#include "camp/RenderCtx.h"
#include "shard/JobWork.h"
#include "code/Code0028.h"

extern "C" {
extern RenderCtx *g_titleScene;
s32 renderCtxPackPassFlags(u32 mode, u32 flags);
s32 packNibblesAndByte(u32 first, u32 second, u32 value);
void effectNodeUpdatePlacedChildren(u32 handle);

/* Draw callback: when enabled, draws the work's handle with the raster, blend and depth states pushed. */
s32 FUN_002248b8(u32 job)
{
    struct DrawWork {
        u8 prefix00[0xC];
        u32 handle;
        u8 enabled;
    };
    typedef char DrawWorkOffsetsCheck[
        offsetof(DrawWork, handle) == 0xC && offsetof(DrawWork, enabled) == 0x10 ? 1 : -1];
    DrawWork *work = (DrawWork *)jobGetWork(job);
    if (work->enabled) {
        RenderCtx *context = g_titleScene;
        s32 state = FUN_002865c0(6, 0.0f);
        renderStackPush(&context->additional.stackC, state);
        context = g_titleScene;
        state = renderCtxPackPassFlags(1, 0);
        renderStackPush(&context->stackA, state);
        context = g_titleScene;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPush(&context->stackB, state);
        effectNodeUpdatePlacedChildren(work->handle);
        renderStackPop(&g_titleScene->stackB);
        renderStackPop(&g_titleScene->stackA);
        renderStackPop(&g_titleScene->additional.stackC);
    }
    return 0;
}
}
