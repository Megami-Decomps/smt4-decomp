/* NON_MATCHING: 28 lines: the jump table, the white colour initialisation and the draw call's argument order now match retail; the VFP registers holding 0.0f and 1.0f (s16/s17) are swapped, which also reorders the literal pool. */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "camp/RenderCtxTitle.h"
#include "gfx/ColoredQuad.h"

struct CampCecOverlayWork {
    u8 unk000[0xd28];
    u32 state;
    u8 unkd2c[0x36];
    u8 dimBackground;
};

extern "C" {
extern CampCecOverlayWork *g_campCec;
void gxResetColorQuadToWhite();
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);
void efctSetSpeed(f32 alpha);

u32 campCecDrawDimmingOverlay()
{
    EffectColor color;
    color.red = 1.0f;
    color.green = 1.0f;
    color.blue = 1.0f;
    color.alpha = 1.0f;
    switch (g_campCec->state) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
    case 4:
    case 5:
        if (g_campCec->dimBackground != 0) {
            gxResetColorQuadToWhite();
            renderCtxSelectStereoLayout(g_titleScene);
            RenderCtx *context = g_titleScene;
            s32 state = renderCtxPackPassFlags(1, 0);
            renderStackPush(context->stacks + RENDER_STACK_A, state);
            color.red = 0.0f;
            color.green = 0.0f;
            color.blue = 0.0f;
            color.alpha = 0.5f;
            renderCtxSelectTexture(g_titleScene, 0);
            f32 offset = renderCtxCalculateStereoParallax(g_titleScene, 0.35f);
            gfxDrawQuadFourColors((f32)(s32)offset, 0.0f, 400.0f, 240.0f, &color, &color, &color, &color, 0.95703125f);
            efctSetSpeed(1.0f);
            renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
        }
        break;
    }
    return 0;
}
}
