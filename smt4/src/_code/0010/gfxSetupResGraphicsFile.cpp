#include "gfx/GfxSettings.h"

extern "C" {

u32 asdMemoryGetDefaultAllocator(void);
s32 nw_gfx_res_ResGraphicsFile_Setup(u32 *file, u32 allocator, u32 data);

void gfxSetupResGraphicsFile(u32 data)
{
    g_gfxSettings.resGraphicsFile = data;
    nw_gfx_res_ResGraphicsFile_Setup(&g_gfxSettings.resGraphicsFile, asdMemoryGetDefaultAllocator(), g_gfxSettings.resGraphicsFile);
}

} /* extern "C" */
