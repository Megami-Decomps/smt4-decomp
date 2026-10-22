#include "shard/W6_W6Match2_MemoryDebug.h"

extern "C" {
extern MemoryDebugState g_allocationAddressRanges;
s32 padButtonIsPressed(u32 button);
void gfxDrawSolidRectangle(s32 first, s32 second, s32 third, s32 fourth, u32 value);
void FUN_001522a0(s32 index, u32 value);
u32 FUN_0014e444(s32 mode, DebugLabelCallback label, DebugDetailCallback detail);

// Toggle the debug memory limit on button nine and refresh the callback-driven display.
u32 memoryDebugRefresh()
{
    if (g_allocationAddressRanges.enabled != 0 && padButtonIsPressed(9) != 0) {
        MemoryDebugSettings* settings = g_allocationAddressRanges.settings;
        settings->limit = settings->limit == 0x08800000 ? 0x14000000 : 0x08800000;
    }
    FUN_0014e444(0, FUN_001522a0, gfxDrawSolidRectangle);
    return 0;
}
}
