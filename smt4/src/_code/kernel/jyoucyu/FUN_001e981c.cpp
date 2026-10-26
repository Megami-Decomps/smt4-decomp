/* NON_MATCHING: background rectangle width/height VFP setup is scheduled before packed-color argument moves. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "kernel/jyoucyu.h"
#include "title/titleMain.h"

// The accessed status lies beyond the recovered JyoucyuWork prefix; do not grow that shared type.
struct JyoucyuDrawStatusViewIV {
    u8 unk00[8];
    s32 status;
};
typedef char JyoucyuDrawStatusOffset[offsetof(JyoucyuDrawStatusViewIV, status) == 8 ? 1 : -1];

extern "C" {
extern JyoucyuWork *g_jyoucyu;
extern TitleScene *g_titleScene;
s32 FUN_002c5d80(u32 first, u32 second);
void efctSetSpeed(f32 speed);
void FUN_002bed3c(void);
void FUN_002c0944(u32 firstColor, u32 secondColor, u32 thirdColor, u32 fourthColor, f32 x, f32 y, f32 width, f32 height, f32 depth);

// Draw the startup background and resident sprite until the resident status reaches completion.
u32 FUN_001e981c(void)
{
    JyoucyuDrawStatusViewIV *resident = (JyoucyuDrawStatusViewIV *)g_jyoucyu;
    if (resident->status >= 100)
        return 0;
    renderCtxSelectStereoLayout(g_titleScene);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 0));
    efctSetSpeed(1.0f);
    FUN_002bed3c();
    renderCtxSelectTexture(g_titleScene, 0);
    FUN_002c0944(255, 255, 255, 255, 0.0f, 0.0f, 400.0f, 240.0f, 0.0f);
    if (resident->status < 100)
        FUN_002bf288(2, 14, 394, 0, 0, 11);
    renderStackPop(&g_titleScene->stackA);
    efctSetSpeed(1.0f);
    return 0;
}
}
