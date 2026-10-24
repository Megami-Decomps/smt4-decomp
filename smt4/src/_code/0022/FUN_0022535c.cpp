#include "battle/Talk/btlTalkBustUp.h"
#include "camp/RenderCtx.h"

extern "C" {
extern BtlTalkBustUp *g_btlTalkBustUp;
extern RenderCtx *g_titleScene;
void FUN_002c39a4(RenderCtx *);
s32 FUN_002c5d80(u32, u32);
f32 renderCtxCalculateStereoParallax(RenderCtx *, f32);
s32 aocJobIsValid(void);
s32 btlMainIsSecondJobValid(void);
void FUN_0032fe34(BtlTalkBustUp *, f32);
void FUN_002c198c(RenderCtx *);
void FUN_002c18e4(RenderCtx *);

/* Draw the battle portrait with its stereo offset inside the temporary render state. */
u32 FUN_0022535c(void)
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait == NULL)
        return 0;
    FUN_002c39a4(g_titleScene);
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    if (portrait->unk2F4 && portrait->state == 2) {
        s32 offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
        if (aocJobIsValid() || btlMainIsSecondJobValid()) {
            offset = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
        }
        FUN_0032fe34(portrait, (f32)offset);
    }
    renderStackPop(&g_titleScene->stackA);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return 0;
}
}
