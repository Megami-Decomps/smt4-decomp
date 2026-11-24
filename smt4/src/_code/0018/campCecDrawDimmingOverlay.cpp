/* NON_MATCHING: the 0.0 and 1.0 color literals occupy opposite VFP registers in retail. */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "camp/RenderCtxTitle.h"
#include "gfx/ColoredQuad.h"
#include "camp/CecMenu.h"

extern "C" {
void gxResetColorQuadToWhite();
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);
void efctSetSpeed(f32 alpha);

/* Draws the dimming backdrop before the StreetPass reward portrait comes back. */
u32 campCecDrawDimmingOverlay()
{
    const CampCecMenu *menu = g_campCec;
    EffectColor color;
    effectColorSet(&color, 1.0f, 1.0f, 1.0f, 1.0f);
    switch (menu->screen.mode) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
    case 4:
    case 5:
        if (menu->rewardPortraitPending != 0) {
            gxResetColorQuadToWhite();
            renderCtxSelectStereoLayout(g_titleScene);
            RenderCtx *context = g_titleScene;
            renderCtxPushA(context, renderCtxPackPassFlags(1, false));
            effectColorSet(&color, 0.0f, 0.0f, 0.0f, 0.5f);
            renderCtxSelectTexture(g_titleScene, 0);
            f32 offset = renderCtxCalculateStereoParallax(g_titleScene, 0.35f);
            gfxDrawQuadFourColors((f32)(s32)offset, 0.0f, 400.0f, 240.0f, &color, &color, &color, &color, 0.95703125f);
            efctSetSpeed(1.0f);
            renderCtxPopCounted(g_titleScene, RENDER_STACK_A);
        }
        break;
    }
    return 0;
}

} /* extern "C" */
