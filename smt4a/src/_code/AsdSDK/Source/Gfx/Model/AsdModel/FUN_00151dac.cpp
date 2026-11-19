/* NON_MATCHING: retail keeps a zero in r5 (set after the enable test, pushing r4-r6) and stores it into unk14 at the
 * end; asdModelRenderLightPass (fp = 0) and renderSceneUpdate (r5 = 1) keep their slot index the same way, so the
 * three passes probably share an inline helper taking the slot. The build materialises the zero at the store and
 * forms the slotFlags address before the light-count branch. */
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
    if (g_gfxSettings.lightingEnabled == 0) {
        return;
    }
    const u32 *flags = g_gfxSettings.slotFlags;
    if (g_asdLightCount > 0 || (flags[0] & 1) != 0) {
        gfxFlushLightRenderCommands(g_asdModelSlotArray3, g_gfxSettings.unk28);
        if (FUN_0032fab0() != 0) {
            registerBlockRequestGroups(0x3fff);
        }
        renderCtxResetFrameState(g_renderCtx);
        g_gfxSettings.unk14 = 0;
    }
}

} /* extern "C" */
