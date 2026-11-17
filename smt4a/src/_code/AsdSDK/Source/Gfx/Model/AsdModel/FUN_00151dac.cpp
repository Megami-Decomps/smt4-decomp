/* NON_MATCHING: slotFlags is now read through its own pointer as in retail, but the build forms it before the enable test (retail after the light count test) and materialises the final zero late (retail keeps it in r5). */
#include "camp/RenderCtxA.h"
#include "gfx/GfxSettings.h"

extern "C" {

extern s32 g_asdLightCount; /* 0x636e00 */
extern u32 g_asdModelSlotArray3; /* 0x5b3cb8 */
s32 FUN_0032fab0(void);
void gfxFlushLightRenderCommands(u32 a, u32 b);
void renderCtxResetFrameState(RenderCtxA *scene);
void registerBlockRequestGroups(u32 groups);

// Refresh the render context when the graphics settings are enabled and lights or the first model slot are active.
void FUN_00151dac(void)
{
    const u32 *flags = &g_gfxSettings.slotFlags[0];
    if (g_gfxSettings.lightingEnabled != 0 && (g_asdLightCount > 0 || (*flags & 1) != 0)) {
        gfxFlushLightRenderCommands(g_asdModelSlotArray3, g_gfxSettings.unk28);
        if (FUN_0032fab0() != 0) {
            registerBlockRequestGroups(0x3fff);
        }
        renderCtxResetFrameState(g_renderCtx);
        g_gfxSettings.unk14 = 0;
    }
}

} /* extern "C" */
