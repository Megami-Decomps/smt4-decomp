/* NON_MATCHING: two spots differ: the stack context is loaded into another register for the first push and first pop (retail builds the stack address in place in r4), and the third push (the stack's own top state as its argument) addresses its count through a literal offset where retail adds 0x10C0 and uses an immediate; layout, calls and offsets agree */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "code/Code0014.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "code/Code0015.h"
#include "code/Code0030.h"
extern "C" {

void requestDispatch(void *request);
void effectNodeUpdatePlacedChildren(EffectNode *node);
void uiSpriteRefreshMode(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);
void skinObjectUpdateMatrices(RenderCtxA *context);
s32 renderCtxPackPassFlags(u32 first, u32 second);

/* Draws the effect editor's menu under its own render states, then pops them again. */
void effectEditorDrawMenu(void)
{
    renderCtxPushD(g_renderCtx, 0);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    renderCtxPushB(g_renderCtx, g_renderCtx->stackB.entries[g_renderCtx->stackB.count]);
    if (g_effectEditor.toggle == 0) {
        effectRestoreSavedRenderPairs(g_renderCtx, reinterpret_cast<void *>(asdCameraGetSavedRenderPairs()));
    } else {
        uiSpriteRefreshMode(g_renderCtx);
    }
    effMenuCallHandler(2, 1);
    if (g_effectEditor.resource != NULL) {
        requestDispatch(g_effectEditor.resource);
    }
    if (g_effectEditor.node != NULL) {
        effectNodeUpdatePlacedChildren(g_effectEditor.node);
    }
    if (g_effectEditor.cachedEvent != 0) {
        requestDispatch(reinterpret_cast<void *>(g_effectEditor.cachedEvent));
    }
    renderCtxResetColorScale(g_renderCtx);
    skinObjectUpdateMatrices(g_renderCtx);
    renderStackPop(&g_renderCtx->depthStacks.stackD);
    renderStackPop(&g_renderCtx->stackA);
    renderStackPop(&g_renderCtx->stackB);
}

}
