#include "common.h"
#include "gfx/GfxSettings.h"

extern "C" {

void nw_gfx_res_ResGraphicsFile_Setup(u32 *slot, u32 allocator, u32 value);
u32 asdMemoryGetDefaultAllocator(void);

/* Stores `value` at 0x7C of the global and registers it with the default allocator. */
void gfxSetupResGraphicsFile(u32 value)
{
    u32 allocator;

    g_gfxSettings.resGraphicsFile = value;
    allocator = asdMemoryGetDefaultAllocator();
    nw_gfx_res_ResGraphicsFile_Setup(&g_gfxSettings.resGraphicsFile, allocator, g_gfxSettings.resGraphicsFile);
}

} /* extern "C" */
