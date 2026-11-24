#include "common.h"

extern "C" {

void FUN_001a25d0(u32 srcAddr, u32 dstAddr, u32 size, u32 srcLineWidth, u32 srcGap, u32 dstLineWidth, u32 dstGap, u32 flags);

/* Queues a texture copy (the replayed type 4 command), forwarding every argument. */
void gxAddTextureCopyCommand(u32 srcAddr, u32 dstAddr, u32 size, u32 srcLineWidth, u32 srcGap, u32 dstLineWidth, u32 dstGap, u32 flags)
{
    FUN_001a25d0(srcAddr, dstAddr, size, srcLineWidth, srcGap, dstLineWidth, dstGap, flags);
}

} /* extern "C" */
