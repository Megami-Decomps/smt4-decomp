/* NON_MATCHING: 17 lines. Pushes, pops (stack D through renderStackPopChecked) and the third push's top read (stack 6
 * of the 0x11EC bank) match; the third push still reads the count through a pooled 0x11EC where retail adds
 * 0x10C0 + 0x1EC from the scene, and the pool shifts with it. */
#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "camp/RenderCtxTitle.h"
#include "code/Code0030.h"

extern "C" {

void requestDispatch(void *request);
void effectNodeUpdatePlacedChildren(EffectNode *node);
void layoutApplyForState(RenderCtx *context);
void renderCtxResetColorScale(RenderCtx *context);
u32 asdCameraGetSavedRenderPairs(void);
void effectRestoreSavedRenderPairs(RenderCtx *context, u32 value);

/* Draws the effect editor's menu with its own render states pushed, then pops them again. */
void titleSceneDrawEffectEditorMenu(void)
{
    renderCtxPushD(g_titleScene, 0);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    renderStackPushCounted(g_titleScene->stacks + RENDER_STACK_B, renderCtxStackTop(g_titleScene, RENDER_STACK_B));
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
    renderStackPopChecked(g_titleScene->stacks + RENDER_STACK_D);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_B);
}

}
