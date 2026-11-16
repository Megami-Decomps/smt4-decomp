/* NON_MATCHING: real fade-animation speed getter recovered; effect/draw VFP argument placement and render-state pop bookkeeping differ. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

struct TitleFadeAnimation {
    u8 prefix[0x20];
    f32 speed;
};
/* A title-scene overlay object: flags at 0 (0x80: fade overlay), a state at 4 (drawn from 3 on) and
 * its fade amount at 0x208. */
typedef struct TitleOverlay {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s32 state;
    /* 0x008 */ u8 unk008[0x1E0];
    /* 0x1E8 */ TitleFadeAnimation fadeAnimation;
} TitleOverlay;

extern RenderCtx *g_titleScene;

void renderCtxSelectStereoLayout(RenderCtx *ctx);
void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);
s32 renderCtxPackPassFlags(u32 kind, u32 arg);
u32 asdGxPresetsGetByKind(u32 kind);
u32 asdGxPresetsGetHeightByKind(u32 kind);
void FUN_002c0944(u32 a, u32 b, u32 c, u32 d, f32 e, f32 f, f32 g, f32 h, f32 i);
f32 vec2GetSpeed(const void *object);
void FUN_0038368c(TitleOverlay *overlay);
void renderCtxResetColorScale(RenderCtx *ctx);

/* Draws the title overlay once it is past state 2: under a pushed render state, an optional
 * full-screen fade of the scene's preset, then the overlay itself. */
void FUN_003844a0(TitleOverlay *overlay)
{
    if (overlay->state <= 2) {
        return;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    if ((overlay->flags & 0x80) != 0) {
        u8 alpha = (u8)(u32)(vec2GetSpeed(&overlay->fadeAnimation) * 192.0f);

        renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
        renderCtxSelectTexture(g_titleScene, 0);
        f32 preset = (f32)asdGxPresetsGetByKind(*(u32 *)((u8 *)g_titleScene + 0x528));
        f32 factor = (f32)asdGxPresetsGetHeightByKind(*(u32 *)((u8 *)g_titleScene + 0x528));
        FUN_002c0944(alpha, alpha, alpha, alpha, 0.0f, 0.0f, factor, preset, 0.0f);
        renderStackPop(&g_titleScene->stackA);
    }
    FUN_0038368c(overlay);
    renderStackPop(&g_titleScene->stackA);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}

}
