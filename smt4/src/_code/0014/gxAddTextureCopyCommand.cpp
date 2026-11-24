#include "common.h"

extern "C" {

void FUN_00147a18(u32 srcAddr, u32 dstAddr, u32 size, u32 srcLineWidth, u32 srcGap, u32 dstLineWidth, u32 dstGap, u32 flags);

/* Queues a texture copy (the replayed type 4 command), forwarding every argument. */
void gxAddTextureCopyCommand(u32 srcAddr, u32 dstAddr, u32 size, u32 srcLineWidth, u32 srcGap, u32 dstLineWidth, u32 dstGap, u32 flags)
{
    FUN_00147a18(srcAddr, dstAddr, size, srcLineWidth, srcGap, dstLineWidth, dstGap, flags);
}

} /* extern "C" */
