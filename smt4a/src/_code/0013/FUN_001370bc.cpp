#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {
s32 FUN_001696f4(void);
void FUN_00167eb0(u32);
void FUN_00145084(s32);

// Submit the active title command list when enabled, then update the title mode.
u32 FUN_001370bc(void)
{
    if (!g_titleFlags.disabled && FUN_001696f4() == 1 && g_titleFlags.commandActive)
        FUN_00167eb0(g_titleFlags.commandList);
    if (FUN_001696f4() == 1)
        FUN_00145084(0x410);
    return 0;
}
}
