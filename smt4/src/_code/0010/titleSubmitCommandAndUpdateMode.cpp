#include "shard/W6_W6Match2_TitleCommand.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
s32 gxIsStereoscopic3dEnabled(void);
void asdGxCommandListReplayCopy(u32 commandList); // declcheck: local (the shared declaration does not compile here or changes this unit)
void renderBindPreset(s32 display);

/* In stereoscopic 3D, replays the title command list's saved copy when the list is enabled and active,
 * then binds the right-eye display. */
u32 titleSubmitCommandAndUpdateMode(void)
{
    if (g_titleFlags.disabled == 0 && gxIsStereoscopic3dEnabled() == 1 && g_titleFlags.commandActive != 0) {
        asdGxCommandListReplayCopy(g_titleFlags.commandList);
    }
    if (gxIsStereoscopic3dEnabled() == 1) {
        renderBindPreset(ASD_GX_DISPLAY_TOP_RIGHT);
    }
    return 0;
}

} /* extern "C" */
