#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "gamedata/SaveLoadProcessState.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern SaveByteSettings g_byteSettings;
s32 saveLoadGetThreadStatus();
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite();
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);

// Draw the animated save/load indicator while its worker is active.
u32 saveLoadDrawIndicator()
{
    if (saveLoadGetThreadStatus()) {
        renderCtxSelectStereoLayout(g_titleScene);
        renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
        texDrawTableEntryAtStoredOrigin(2, 14, g_byteSettings.value + 0x185, parallax, 0, 6);
        renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
        efctSetSpeed(1.0f);
        gxResetColorQuadToWhite();
    }
    return 0;
}
}
