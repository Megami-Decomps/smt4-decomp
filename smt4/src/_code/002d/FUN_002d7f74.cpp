/* NON_MATCHING: two spots differ: the stack context is loaded into another register for the first push and first pop (retail builds the stack address in place in r4), and the third push (the stack's own top state as its argument) addresses its count through a literal offset where retail adds 0x10C0 and uses an immediate; layout, calls and offsets agree */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

extern RenderCtx *g_titleScene;

void effMenuCallHandler(s32 handler, s32 flag);
void requestDispatch(void *request);
void FUN_0028186c(EffectNode *node);
void layoutApplyForState(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);
u32 FUN_002c501c(void);
s32 FUN_002c5d80(u32 first, u32 second);
void effectRestoreSavedRenderPairs(RenderCtx *context, u32 value);

/* Draws the effect editor's menu with its own render states pushed, then pops them again. */
void FUN_002d7f74(void)
{
    renderCtxPushD(g_titleScene, 0);
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    renderCtxPushB(g_titleScene, g_titleScene->stackB.entries[g_titleScene->stackB.count]);
    if (g_effectEditor.dispatch.unk00 == 0) {
        effectRestoreSavedRenderPairs(g_titleScene, FUN_002c501c());
    } else {
        layoutApplyForState(g_titleScene);
    }
    effMenuCallHandler(1, 1);
    if (g_effectEditor.selection.resource != NULL) {
        requestDispatch(g_effectEditor.selection.resource);
    }
    if (g_effectEditor.dispatch.node != NULL) {
        FUN_0028186c(g_effectEditor.dispatch.node);
    }
    if (g_effectEditor.dispatch.cachedEvent != 0) {
        requestDispatch(reinterpret_cast<void *>(g_effectEditor.dispatch.cachedEvent));
    }
    FUN_002c18e4(g_titleScene);
    renderCtxApplyTransforms(g_titleScene);
    renderStackPop(&g_titleScene->depthStacks.stackD);
    renderStackPop(&g_titleScene->stackA);
    renderStackPop(&g_titleScene->stackB);
}

}
