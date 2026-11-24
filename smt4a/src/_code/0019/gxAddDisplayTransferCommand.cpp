#include "common.h"

extern "C" {

void FUN_001a283c(u32 srcAddr, u32 srcWidth, u32 srcHeight, u32 dstAddr, u32 dstWidth, u32 dstHeight, u32 flags);

/* Queues a display transfer (the replayed type 3 command), forwarding every argument. */
void gxAddDisplayTransferCommand(u32 srcAddr, u32 srcWidth, u32 srcHeight, u32 dstAddr, u32 dstWidth, u32 dstHeight, u32 flags)
{
    FUN_001a283c(srcAddr, srcWidth, srcHeight, dstAddr, dstWidth, dstHeight, flags);
}

} /* extern "C" */
