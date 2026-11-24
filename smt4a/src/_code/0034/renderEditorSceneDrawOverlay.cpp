#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "code/Code0030.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
s32 getFloatPairValue(void);
s32 displayIsStereoActive(void);
void debugGuideDrawGrid(u32 style, f32 x, f32 y, f32 depth, f32 size, u32 firstColor, u32 secondColor);

// Render the editor scene in a temporary state and draw its enabled overlay.
void renderEditorSceneDrawOverlay(void)
{
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 1));
    renderCtxSelectTexture(g_renderCtx, 0);
    u32 mono = 1;
    if (getFloatPairValue() && renderCtxGetStereoMode(g_renderCtx) == 0 && displayIsStereoActive()) {
        mono = 0;
    }
    effMenuCallHandler(0, mono);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    if (g_effectEditor.overlayEnabled) {
        debugGuideDrawGrid(30, 0.0f, 0.0f, 0.0f, 17.5f, 0x606060FF, 0x909090FF);
    }
}
}
