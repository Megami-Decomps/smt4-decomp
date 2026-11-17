/* NON_MATCHING: slotFlags is now read through its own pointer as in retail, but the build forms it before the enable test (retail after the light count test) and materialises the final zero late (retail keeps it in r5). */
#include "camp/RenderCtxTitle.h"
#include "gfx/GfxSettings.h"

extern "C" {

extern s32 g_asdLightCount; /* 0x4dad80 */
extern u32 g_asdModelSlotArray3; /* 0x464bb4 */
s32 sceneQueryFalse(void);
void FUN_0013290c(u32 a, u32 b);
void FUN_002c3a14(RenderCtx *scene);
void registerBlockRequestGroups(u32 groups);

// Refresh the title scene when the graphics settings are enabled and lights or the first model slot are active.
void FUN_0011891c(void)
{
    const u32 *flags = &g_gfxSettings.slotFlags[0];
    if (g_gfxSettings.lightingEnabled != 0 && (g_asdLightCount > 0 || (*flags & 1) != 0)) {
        FUN_0013290c(g_asdModelSlotArray3, g_gfxSettings.unk28);
        if (sceneQueryFalse() != 0) {
            registerBlockRequestGroups(0x3fff);
        }
        FUN_002c3a14(g_titleScene);
        g_gfxSettings.unk14 = 0;
    }
}

} /* extern "C" */
