/* NON_MATCHING: retail keeps a zero in r5 (set after the enable test, pushing r4-r6) and stores it into unk14 at the
 * end; asdModelRenderLightPass (fp = 0) and renderSceneUpdate (r5 = 1) keep their slot index the same way, so the
 * three passes probably share an inline helper taking the slot. The build materialises the zero at the store and
 * forms the slotFlags address before the light-count branch. */
#include "camp/RenderCtxTitle.h"
#include "gfx/GfxSettings.h"

extern "C" {

extern s32 g_asdLightCount; /* 0x4dad80 */
extern u32 g_asdModelSlotArray3; /* 0x464bb4 */
s32 sceneQueryFalse(void);
void gfxFlushLightRenderCommands(u32 a, u32 b); // declcheck: local (the shared declaration in code/Code0013_Smt4.h does not compile here: argument of type "u32" is incompatible with parameter of type "LightRenderOwner *")
void renderCtxResetFrameStacks(RenderCtx *scene);
void registerBlockRequestGroups(u32 groups);

// Refresh the title scene when the graphics settings are enabled and lights or the first model slot are active.
void FUN_0011891c(void)
{
    if (g_gfxSettings.lightingEnabled == 0) {
        return;
    }
    const u32 *flags = g_gfxSettings.slotFlags;
    if (g_asdLightCount > 0 || (flags[0] & 1) != 0) {
        gfxFlushLightRenderCommands(g_asdModelSlotArray3, g_gfxSettings.unk28);
        if (sceneQueryFalse() != 0) {
            registerBlockRequestGroups(0x3fff);
        }
        renderCtxResetFrameStacks(g_titleScene);
        g_gfxSettings.unk14 = 0;
    }
}

} /* extern "C" */
