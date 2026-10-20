#include "shard/Sys464af0.h"

extern "C" {

u32 asdMemoryGetDefaultAllocator(void);
s32 nw_gfx_res_ResGraphicsFile_Setup(u32 *file, u32 allocator, u32 data);

void gfxSetupResGraphicsFile(u32 data)
{
    g_gfxSettings.unk7C = data;
    nw_gfx_res_ResGraphicsFile_Setup(&g_gfxSettings.unk7C, asdMemoryGetDefaultAllocator(), g_gfxSettings.unk7C);
}

} /* extern "C" */
