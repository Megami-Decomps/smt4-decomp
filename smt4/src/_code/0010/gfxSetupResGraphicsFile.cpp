#include "shard/Sys464af0.h"

extern "C" {

u32 asdMemoryGetDefaultAllocator(void);
s32 nw_gfx_res_ResGraphicsFile_Setup(u32 *file, u32 allocator, u32 data);

void gfxSetupResGraphicsFile(u32 data)
{
    DAT_00464af0.unk7C = data;
    nw_gfx_res_ResGraphicsFile_Setup(&DAT_00464af0.unk7C, asdMemoryGetDefaultAllocator(), DAT_00464af0.unk7C);
}

} /* extern "C" */
