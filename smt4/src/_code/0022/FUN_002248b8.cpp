/* NON_MATCHING: render-stack address computation moves before state encoding and push-index registers differ from retail. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
void *jobGetWork(void);
s32 FUN_002865c0(u32 mode, f32 alpha);
s32 FUN_002c5d80(u32 mode, u32 flags);
s32 packNibblesAndByte(u32 first, u32 second, u32 value);
void FUN_0028186c(u32 handle);

u32 FUN_002248b8(void)
{
    struct DrawWork {
        u8 prefix00[0xC];
        u32 handle;
        u8 enabled;
    };
    typedef char DrawWorkOffsetsCheck[
        offsetof(DrawWork, handle) == 0xC && offsetof(DrawWork, enabled) == 0x10 ? 1 : -1];
    DrawWork *work = (DrawWork *)jobGetWork();
    if (work->enabled) {
        RenderCtx *context = g_titleScene;
        renderStackPush(&context->additional.stackC, FUN_002865c0(6, 0.0f));
        context = g_titleScene;
        renderStackPush(&context->stackA, FUN_002c5d80(1, 0));
        context = g_titleScene;
        renderStackPush(&context->stackB, packNibblesAndByte(6, 1, 0));
        FUN_0028186c(work->handle);
        renderStackPop(&g_titleScene->stackB);
        renderStackPop(&g_titleScene->stackA);
        renderStackPop(&g_titleScene->additional.stackC);
    }
    return 0;
}
}
