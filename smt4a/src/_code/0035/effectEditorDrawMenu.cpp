/* NON_MATCHING: 17 lines. Pushes, pops (stack D through renderStackPopChecked) and the third push's top read (stack 6
 * of the 0x11F8 bank) match; the third push still reads the count through a pooled 0x11F8 where retail builds it from
 * immediates, and the pool shifts with it. */
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
    renderStackPushCounted(g_renderCtx->stacks + RENDER_STACK_B, renderCtxStackTop(g_renderCtx, RENDER_STACK_B));
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
    renderStackPopChecked(g_renderCtx->stacks + RENDER_STACK_D);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
}

}
