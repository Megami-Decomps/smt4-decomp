#include "battle/Talk/btlTalkBustUp.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
void renderCtxSelectStereoLayout(RenderCtx *);
s32 renderCtxPackPassFlags(u32, u32);
f32 renderCtxCalculateStereoParallax(RenderCtx *, f32);
s32 aocJobIsValid(void);
s32 btlMainIsSecondJobValid(void);
void FUN_0032fe34(BtlTalkBustUp *, f32);
void renderCtxResetColorScale(RenderCtx *);

/* Draw the battle portrait with its stereo offset inside the temporary render state. */
u32 FUN_0022535c(void)
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait == NULL)
        return 0;
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    if (portrait->textureReady && portrait->state == 2) {
        s32 offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
        if (aocJobIsValid() || btlMainIsSecondJobValid()) {
            offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
        }
        FUN_0032fe34(portrait, (f32)offset);
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}
}
