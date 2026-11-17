/* NON_MATCHING: two spots differ: the stack context is loaded into another register for the first push and first pop (retail builds the stack address in place in r4), and the third push (the stack's own top state as its argument) addresses its count through a literal offset where retail adds 0x10C0 and uses an immediate; layout, calls and offsets agree */
#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void effMenuCallHandler(s32 handler, s32 flag);
void requestDispatch(void *request);
void effectNodeUpdatePlacedChildren(EffectNode *node);
void layoutApplyForState(RenderCtx *context);
void renderCtxResetColorScale(RenderCtx *context);
u32 asdCameraGetSavedRenderPairs(void);
s32 renderCtxPackPassFlags(u32 first, u32 second);
void effectRestoreSavedRenderPairs(RenderCtx *context, u32 value);

/* Draws the effect editor's menu with its own render states pushed, then pops them again. */
void FUN_002d7f74(void)
{
    renderCtxPushD(g_titleScene, 0);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    renderCtxPushB(g_titleScene, g_titleScene->stackB.entries[g_titleScene->stackB.count]);
    if (g_effectEditor.toggle == 0) {
        effectRestoreSavedRenderPairs(g_titleScene, asdCameraGetSavedRenderPairs());
    } else {
        layoutApplyForState(g_titleScene);
    }
    effMenuCallHandler(1, 1);
    if (g_effectEditor.resource != NULL) {
        requestDispatch(g_effectEditor.resource);
    }
    if (g_effectEditor.node != NULL) {
        effectNodeUpdatePlacedChildren(g_effectEditor.node);
    }
    if (g_effectEditor.cachedEvent != 0) {
        requestDispatch(reinterpret_cast<void *>(g_effectEditor.cachedEvent));
    }
    renderCtxResetColorScale(g_titleScene);
    renderCtxApplyTransforms(g_titleScene);
    renderStackPop(&g_titleScene->depthStacks.stackD);
    renderStackPop(&g_titleScene->stackA);
    renderStackPop(&g_titleScene->stackB);
}

}
