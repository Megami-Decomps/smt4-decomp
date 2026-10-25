/* NON_MATCHING: readable rebuild from asm of a scene overlay draw (the slide-in banner and the mark sprites inside render states); armcc here orders the render-state operations and keeps the scene pointer in other registers than retail. */
#include "gfx/RenderStateStack.h"
#include "shard/TextureDrawCall.h"

/* The render context: two render-state stacks. */
struct RenderCtx {
    /* 0x0000 */ u8 unk0000[0x1258];
    /* 0x1258 */ RenderStateStack firstStack;
    /* 0x1278 */ u8 unk1278[0x40];
    /* 0x12B8 */ RenderStateStack secondStack;
};

/* The overlay's scene (only the fields the draw reads). */
struct OverlayScene {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ f32 position[2];
    /* 0x0028 */ u8 unk0028[0x8B6];
    /* 0x08DE */ u8 hidden;
    /* 0x08DF */ u8 unk08DF[0x3A85];
    /* 0x4364 */ s32 state;
    /* 0x4368 */ u8 unk4368[4];
    /* 0x436C */ s32 step;
    /* 0x4370 */ u8 unk4370[0xC];
    /* 0x437C */ s32 timer;
};

/* The engine cleanup owner global: the overlay's scene and its banner alpha. */
struct OverlayOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ OverlayScene *scene;
    /* 0x08 */ u8 unk08[0x18];
    /* 0x20 */ f32 alpha;
};

extern "C" {
extern RenderCtx *g_renderCtx;
extern OverlayOwner g_engineCleanupOwner;

s32 scriptProcessCreateWhenReady(OverlayScene *scene);
void FUN_00157558(RenderCtx *ctx);
u32 FUN_001692ac(s32 a, s32 b);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);
void efctSetSpeed(f32 speed);
u32 vec2GetXInt(void *vec);
u32 vec2GetYInt(void *vec);
void FUN_004b0164(OverlayScene *scene, u32 x, u32 y);
void skinObjectUpdateMatrices(RenderCtx *ctx);
void renderCtxResetColorScale(RenderCtx *ctx);

/* Draws the overlay when its scene is ready: the sliding banner while the scene is in the intro
 * step, then the scene's own parts. Always returns 0. */
u32 FUN_00229324(void)
{
    OverlayScene *scene = g_engineCleanupOwner.scene;
    if (scene == NULL || scriptProcessCreateWhenReady(scene) == 0)
        return 0;
    FUN_00157558(g_renderCtx);
    RenderCtx *ctx = g_renderCtx;
    u32 firstState = FUN_001692ac(1, 0);
    renderStackPushCounted(&ctx->firstStack, firstState);
    ctx = g_renderCtx;
    if (scene->state == 13 && scene->step == 5 && scene->hidden == 0) {
        if (scene->timer < 16) {
            s32 offset = scene->timer * -30;
            if (offset < -240)
                offset = -240;
            renderStackSet(&ctx->secondStack, packNibblesAndByte(6, 1, 0));
            if (offset > -240)
                FUN_001835b4(2, 0x1D, 0x113, 0, offset, 0xF1);
            FUN_001835b4(2, 0x1D, 0x114, 0, offset + 240, 0xF1);
            renderStackSet(&g_renderCtx->secondStack, packNibblesAndByte(6, 7, 0));
        }
        if (scene->timer >= 9) {
            efctSetSpeed(g_engineCleanupOwner.alpha);
            FUN_001835b4(2, 0x1D, 0x115, 0, 0, 0xF2);
            efctSetSpeed(1.0f);
        }
    }
    renderStackPop(&g_renderCtx->firstStack);
    ctx = g_renderCtx;
    if (scene->state < 10) {
        if (scene->state != 0) {
            u32 secondState = FUN_001692ac(1, 0);
            renderStackPushCounted(&ctx->firstStack, secondState);
            FUN_004b0164(scene, vec2GetXInt(scene->position), vec2GetYInt(scene->position));
            renderStackPop(&g_renderCtx->firstStack);
        }
        renderStackSet(&g_renderCtx->secondStack, packNibblesAndByte(6, 7, 0));
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
    return 0;
}

} /* extern "C" */
