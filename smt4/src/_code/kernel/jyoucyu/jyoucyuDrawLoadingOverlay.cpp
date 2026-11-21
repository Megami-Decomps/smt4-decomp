#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
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
s32 renderCtxPackPassFlags(u32 first, u32 second);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);

// Draw the startup background and resident sprite until the resident status reaches completion.
u32 jyoucyuDrawLoadingOverlay(void)
{
    JyoucyuDrawStatusViewIV *resident = (JyoucyuDrawStatusViewIV *)g_jyoucyu;
    if (resident->status >= 100)
        return 0;
    renderCtxSelectStereoLayout(g_titleScene);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    renderCtxSelectTexture(g_titleScene, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 400.0f, 240.0f, 255, 255, 255, 0.0f, 255);
    if (resident->status < 100)
        texDrawTableEntryAtStoredOrigin(2, 14, 394, 0, 0, 11);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    efctSetSpeed(1.0f);
    return 0;
}
}
