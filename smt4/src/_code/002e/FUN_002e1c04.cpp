/* NON_MATCHING: two spots differ: the stack context is loaded into another register for the first push and first pop (retail builds the stack address in place in r4), and the third push (the stack's own top state as its argument) addresses its count through a literal offset where retail adds 0x10C0 and uses an immediate; layout, calls and offsets agree */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

extern RenderCtx *g_titleScene;

void effMenuCallHandler(s32 handler, s32 flag);
void requestDispatch(void);
void FUN_0028186c(void);
void layoutApplyForState(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);
void FUN_002c198c(RenderCtx *context);
u32 FUN_002c501c(void);
s32 FUN_002c5d80(u32 first, u32 second);
void effectRestoreSavedRenderPairs(RenderCtx *context, u32 value);

/* Draws the effect editor's menu with its own render states pushed, then pops them again. */
void FUN_002e1c04(void)
{
    renderCtxPushD(g_titleScene, 0);
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    renderCtxPushB(g_titleScene, g_titleScene->stackB.entries[g_titleScene->stackB.count]);
    if (g_effectEditor.dispatch.unk00 == 0) {
        effectRestoreSavedRenderPairs(g_titleScene, FUN_002c501c());
    } else {
        layoutApplyForState(g_titleScene);
    }
    effMenuCallHandler(2, 1);
    if (g_effectEditor.selection.resource != NULL) {
        requestDispatch();
    }
    if (g_effectEditor.dispatch.blocked != 0) {
        FUN_0028186c();
    }
    if (g_effectEditor.dispatch.cachedEvent != 0) {
        requestDispatch();
    }
    FUN_002c18e4(g_titleScene);
    FUN_002c198c(g_titleScene);
    renderStackPop(&g_titleScene->depthStacks.stackD);
    renderStackPop(&g_titleScene->stackA);
    renderStackPop(&g_titleScene->stackB);
}

}
