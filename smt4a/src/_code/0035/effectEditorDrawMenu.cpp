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

/* unit-local: the draw context seen as its array of render-state stacks (from 0x11F8: D, E, F, A, C, G, B;
 * RenderCtxA names them one by one). */
struct RenderCtxStacksA {
    /* 0x0000 */ u8 unk0000[0x11F8];
    /* 0x11F8 */ RenderStateStack stacks[7];
};

/* The current (top) state of render-state stack `index`. */
static __inline u32 renderStackTop(RenderCtxA *context, s32 index)
{
    return ((RenderCtxStacksA *)context)->stacks[index].entries[((RenderCtxStacksA *)context)->stacks[index].count];
}

/* Draws the effect editor's menu under its own render states, then pops them again. */
void effectEditorDrawMenu(void)
{
    renderCtxPushD(g_renderCtx, 0);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    renderStackPushCounted(&g_renderCtx->stackB, renderStackTop(g_renderCtx, 6));
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
    renderStackPopChecked(&g_renderCtx->depthStacks.stackD);
    renderStackPop(&g_renderCtx->stackA);
    renderStackPop(&g_renderCtx->stackB);
}

}
