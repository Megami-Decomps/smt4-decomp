#include "classes/AllocatorState.h"

extern "C" {
s32 padButtonIsPressed(u32 button);
void gfxDrawSolidRectangle(s32 left, s32 top, s32 right, s32 bottom, u32 color);
void gfxDrawColoredRectangles(s32 index, u32 value);
u32 memoryDebugDrawMap(s32 mode, DebugLabelCallback label, DebugDetailCallback detail);

/* Updates the asdMemMap debug display: button 9 switches the memory limit between its two values, then
 * the map is drawn. */
u32 memoryDebugRefresh(void)
{
    if (g_asdMemState.debugEnabled != 0 && padButtonIsPressed(9) != 0) {
        AllocationUsage *usage = g_asdMemState.usage;
        usage->limit = usage->limit == ASD_MEM_MAP_LIMIT_DEFAULT ? ASD_MEM_MAP_LIMIT_EXTENDED : ASD_MEM_MAP_LIMIT_DEFAULT;
    }
    memoryDebugDrawMap(0, gfxDrawColoredRectangles, gfxDrawSolidRectangle);
    return 0;
}

} /* extern "C" */
