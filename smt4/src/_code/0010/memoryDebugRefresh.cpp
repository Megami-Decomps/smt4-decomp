#include "shard/W6_W6Match2_MemoryDebug.h"

extern "C" {
extern MemoryDebugState DAT_00465120;
s32 padIsButtonPressed(u32 button);
void gfxDrawSolidRectangle(s32 first, s32 second, s32 third, s32 fourth, u32 value);
void FUN_00118c38(s32 index, u32 value);
u32 FUN_00115cd0(s32 mode, DebugLabelCallback label, DebugDetailCallback detail);

// Toggle the debug memory limit on button nine and refresh the callback-driven display.
u32 memoryDebugRefresh()
{
    if (DAT_00465120.enabled != 0 && padIsButtonPressed(9) != 0) {
        MemoryDebugSettings* settings = DAT_00465120.settings;
        settings->limit = settings->limit == 0x08800000 ? 0x14000000 : 0x08800000;
    }
    FUN_00115cd0(0, FUN_00118c38, gfxDrawSolidRectangle);
    return 0;
}
}
