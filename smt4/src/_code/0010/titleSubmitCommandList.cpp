#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {
s32 gxIsStereoscopic3dEnabled();
void renderBindPreset(u32 size);

// Submit the title command list when active, then restore its allocation budget.
u32 titleSubmitCommandList()
{
    if (g_titleFlags.disabled == 0 && gxIsStereoscopic3dEnabled() == 1 && g_titleFlags.commandActive != 0) {
        asdGxCommandListEnd(g_titleFlags.commandList, 1);
    }
    renderBindPreset(0x400);
    return 0;
}
}
