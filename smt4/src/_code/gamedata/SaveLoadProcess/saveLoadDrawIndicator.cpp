#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "gamedata/SaveLoadProcessState.h"

extern "C" {
extern RenderCtx *g_titleScene;
extern SaveByteSettings g_byteSettings;
s32 saveLoadGetThreadStatus();
void renderCtxSelectStereoLayout(RenderCtx *context);
s32 FUN_002c5d80(s32 first, s32 second);
void efctSetSpeed(f32 speed);
void FUN_002bed3c();
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);

// Draw the animated save/load indicator while its worker is active.
u32 saveLoadDrawIndicator()
{
    if (saveLoadGetThreadStatus()) {
        renderCtxSelectStereoLayout(g_titleScene);
        renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
        efctSetSpeed(1.0f);
        FUN_002bed3c();
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
        FUN_002bf288(2, 14, g_byteSettings.value + 0x185, parallax, 0, 6);
        renderStackPop(&g_titleScene->stackA);
        efctSetSpeed(1.0f);
        FUN_002bed3c();
    }
    return 0;
}
}
