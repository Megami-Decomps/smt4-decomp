/* NON_MATCHING: work pointer and zero constant occupy exchanged saved registers; canonical render wrappers match stack scheduling. */
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

extern "C" {
extern RenderCtx *g_titleScene;
s32 FUN_002865c0(u32 mode, f32 alpha);
s32 FUN_002c5d80(u32 mode, u32 flags);
s32 packNibblesAndByte(u32 first, u32 second, u32 value);
void FUN_0028186c(u32 handle);

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
        renderCtxPushC(g_titleScene, FUN_002865c0(6, 0.0f));
        renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
        renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
        FUN_0028186c(work->handle);
        renderStackPop(&g_titleScene->stackB);
        renderStackPop(&g_titleScene->stackA);
        renderStackPop(&g_titleScene->additional.stackC);
    }
    return 0;
}
}
