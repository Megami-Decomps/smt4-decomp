/* NON_MATCHING: panel completion/speed getters and x/y evaluation match; remaining differences are render-stack set/pop operands and shared return-block layout. */
#include "common.h"
#include "result/Result.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"

extern "C" {

s32 modelPairTryBind(ResultWork *result);
u32 packNibblesAndByte(u32 a, u32 b, u32 c);
void efctSetSpeed(f32 speed);
void FUN_003b3388(ResultWork *result, u32 x, u32 y);
void renderCtxResetColorScale(RenderCtx *context);

/* Draws the result screen: while the curtain closes after the results step, slides the curtain
 * halves in and runs the effect speed; then draws the result sprites for phases below 9.
 * Always returns 0. */
u32 FUN_001a16c0(u32 job)
{
    ResultWork *result = g_result;

    if (result != NULL && modelPairTryBind(result) != 0) {
        renderCtxSelectStereoLayout(g_titleScene);
        renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
        if (result->state == 12 && result->step == 5 && uiSpriteGetCompletionState((const UiSpriteState *)result->curtain.curtainSprite) == 0) {
            s32 curtain = result->curtainStep;

            if (curtain < 16) {
                curtain = curtain * -30;
                curtain = curtain < -240 ? -240 : curtain;
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                if (curtain > -240) {
                    texDrawTableEntryAtStoredOrigin(2, 0x28, 0x113, 0, curtain, 0xF1);
                }
                texDrawTableEntryAtStoredOrigin(2, 0x28, 0x114, 0, curtain + 240, 0xF1);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
            }
            if (result->curtainStep > 8) {
                efctSetSpeed(vec2GetSpeed((const UiSpriteState *)result->curtain.curtainSprite));
                texDrawTableEntryAtStoredOrigin(2, 0x28, 0x115, 0, 0, 0xF2);
                efctSetSpeed(1.0f);
            }
        }
        renderStackPopChecked(g_titleScene->stacks + RENDER_STACK_A);
        if (result->state < 9) {
            if (result->state != 0) {
                renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
                u32 x = vec2GetXInt((const UiSpriteState *)&result->screen.position);
                u32 y = vec2GetYInt((const UiSpriteState *)&result->screen.position);
                FUN_003b3388(result, x, y);
                renderStackPopChecked(g_titleScene->stacks + RENDER_STACK_A);
            }
            renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
            renderCtxApplyTransforms(g_titleScene);
            renderCtxResetColorScale(g_titleScene);
        }
    }
    return 0;
}

}
