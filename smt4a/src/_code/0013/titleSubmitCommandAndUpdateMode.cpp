#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {
s32 gxIsStereoscopic3dEnabled(void);
void FUN_00167eb0(u32);
void renderBindPreset(s32);

// Submit the active title command list when enabled, then update the title mode.
u32 titleSubmitCommandAndUpdateMode(void)
{
    if (!g_titleFlags.disabled && gxIsStereoscopic3dEnabled() == 1 && g_titleFlags.commandActive)
        FUN_00167eb0(g_titleFlags.commandList);
    if (gxIsStereoscopic3dEnabled() == 1)
        renderBindPreset(0x410);
    return 0;
}
}
