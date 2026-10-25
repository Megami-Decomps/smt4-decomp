/* NON_MATCHING: two spots differ: the stack context is loaded into another register for the first push and first pop (retail builds the stack address in place in r4), and the third push (the stack's own top state as its argument) addresses its count through a literal offset where retail adds 0x10C0 and uses an immediate; layout, calls and offsets agree */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

extern RenderCtxA *g_renderCtx;

void FUN_00300100(s32 handler, s32 flag);
void requestDispatch(void *request);
void FUN_00182540(EffectNode *node);
void uiSpriteRefreshMode(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);
void skinObjectUpdateMatrices(RenderCtxA *context);
u32 FUN_00152f54(void);
s32 FUN_001692ac(u32 first, u32 second);
void FUN_00145e24(RenderCtxA *context, u32 value);

/* Draws the effect editor's menu under its own render states, then pops them again. */
void FUN_00345cd4(void)
{
    renderCtxPushD(g_renderCtx, 0);
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
    renderCtxPushB(g_renderCtx, g_renderCtx->stackB.entries[g_renderCtx->stackB.count]);
    if (g_effectEditor.dispatch.unk00 == 0) {
        FUN_00145e24(g_renderCtx, FUN_00152f54());
    } else {
        uiSpriteRefreshMode(g_renderCtx);
    }
    FUN_00300100(1, 1);
    if (g_effectEditor.selection.resource != NULL) {
        requestDispatch(g_effectEditor.selection.resource);
    }
    if (g_effectEditor.dispatch.node != NULL) {
        FUN_00182540(g_effectEditor.dispatch.node);
    }
    if (g_effectEditor.dispatch.cachedEvent != 0) {
        requestDispatch(reinterpret_cast<void *>(g_effectEditor.dispatch.cachedEvent));
    }
    renderCtxResetColorScale(g_renderCtx);
    skinObjectUpdateMatrices(g_renderCtx);
    renderStackPop(&g_renderCtx->depthStacks.stackD);
    renderStackPop(&g_renderCtx->stackA);
    renderStackPop(&g_renderCtx->stackB);
}

}
