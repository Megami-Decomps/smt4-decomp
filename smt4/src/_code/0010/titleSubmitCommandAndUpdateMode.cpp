#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {
s32 FUN_002c5210(void);
void FUN_002c4e98(u32);
void FUN_002c5030(s32);

// Submit the active title command list when enabled, then update the title mode.
u32 titleSubmitCommandAndUpdateMode(void)
{
    if (!g_titleFlags.disabled && FUN_002c5210() == 1 && g_titleFlags.commandActive)
        FUN_002c4e98(g_titleFlags.commandList);
    if (FUN_002c5210() == 1)
        FUN_002c5030(0x410);
    return 0;
}
}
