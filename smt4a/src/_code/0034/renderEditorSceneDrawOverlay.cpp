#include "camp/RenderCtx.h"
#include "code/Code0030.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(u32 kind, u32 flags);
s32 getFloatPairValue(void);
s32 displayIsStereoActive(void);
void FUN_00280840(u32 style, f32 x, f32 y, f32 depth, f32 size, u32 firstColor, u32 secondColor);
s32 renderCtxGetStereoMode(RenderCtxA *context);

// Render the editor scene in a temporary state and draw its enabled overlay.
void renderEditorSceneDrawOverlay(void)
{
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 1));
    renderCtxSelectTexture(g_renderCtx, 0);
    u32 mono = 1;
    if (getFloatPairValue() && renderCtxGetStereoMode(g_renderCtx) == 0 && displayIsStereoActive()) {
        mono = 0;
    }
    FUN_00300100(0, mono);
    renderStackPop(&g_renderCtx->stackA);
    // This flag lies beyond the shared editor prefix; do not extend that layout.
    struct EditorOverlayView {
        EffectEditorMenuState editor;
        u8 unk6C[0xC];
        u32 enabled;
    };
    if (reinterpret_cast<EditorOverlayView *>(&g_effectEditor)->enabled) {
        FUN_00280840(30, 0.0f, 0.0f, 0.0f, 17.5f, 0x606060FF, 0x909090FF);
    }
}
}
