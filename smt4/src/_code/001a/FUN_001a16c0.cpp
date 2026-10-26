/* NON_MATCHING: panel completion/speed getters and x/y evaluation match; remaining differences are render-stack set/pop operands and shared return-block layout. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

extern "C" {

/* The curtain panel inside the result screen: the curtain speed and a hold flag. */
typedef struct ResultPanel {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 curtainSpeed;
    /* 0x24 */ u8 unk24[0x66];
    /* 0x8A */ s8 hold;
    /* 0x8B */ u8 unk8b;
} ResultPanel;

/* The result screen (only the fields used here, by their offsets). */
typedef struct ResultScreen {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u8 position[0x8];
    /* 0x0028 */ u8 unk0028[0x714];
    /* 0x073C */ ResultPanel panel;
    /* 0x07C8 */ u8 unk07c8[0x2D64];
    /* 0x352C */ s32 phase;
    /* 0x3530 */ u8 unk3530[4];
    /* 0x3534 */ s32 step;
    /* 0x3538 */ u8 unk3538[0xC];
    /* 0x3544 */ s32 curtain;
} ResultScreen;

extern ResultScreen *g_result;
extern RenderCtx *g_titleScene;

s32 modelPairTryBind(ResultScreen *result);
void renderCtxSelectStereoLayout(RenderCtx *context);
s32 FUN_002c5d80(s32 a, s32 b);
u32 packNibblesAndByte(u32 a, u32 b, u32 c);
void efctSetSpeed(f32 speed);
u32 vec2GetXInt(void *vector);
u32 vec2GetYInt(void *vector);
void FUN_003b3388(ResultScreen *result, u32 x, u32 y);
void FUN_002c18e4(RenderCtx *context);
s8 uiSpriteGetCompletionState(const void *sprite);
f32 vec2GetSpeed(const void *sprite);

/* Draws the result screen: while the curtain closes after the results step, slides the curtain
 * halves in and runs the effect speed; then draws the result sprites for phases below 9.
 * Always returns 0. */
u32 FUN_001a16c0(u32 job)
{
    ResultScreen *result = g_result;

    if (result != NULL && modelPairTryBind(result) != 0) {
        renderCtxSelectStereoLayout(g_titleScene);
        renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
        if (result->phase == 12 && result->step == 5 && uiSpriteGetCompletionState(&result->panel) == 0) {
            s32 curtain = result->curtain;

            if (curtain < 16) {
                curtain = curtain * -30;
                if (curtain < -240) {
                    curtain = -240;
                }
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                if (curtain > -240) {
                    FUN_002bf288(2, 0x28, 0x113, 0, curtain, 0xF1);
                }
                FUN_002bf288(2, 0x28, 0x114, 0, curtain + 240, 0xF1);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
            }
            if (result->curtain > 8) {
                efctSetSpeed(vec2GetSpeed(&result->panel));
                FUN_002bf288(2, 0x28, 0x115, 0, 0, 0xF2);
                efctSetSpeed(1.0f);
            }
        }
        renderStackPop(&g_titleScene->stackA);
        if (result->phase < 9) {
            if (result->phase != 0) {
                renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
                u32 x = vec2GetXInt(result->position);
                u32 y = vec2GetYInt(result->position);
                FUN_003b3388(result, x, y);
                renderStackPop(&g_titleScene->stackA);
            }
            renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
            renderCtxApplyTransforms(g_titleScene);
            FUN_002c18e4(g_titleScene);
        }
    }
    return 0;
}

}
