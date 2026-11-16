#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
u32 gxFlushDataCacheCurrentProcess(u32 first, u32 second);

/* Forwards the GPU service request. */
u32 nn_gxlow_CTR_FlushDataCacheForward(u32 first, u32 second)
{
    return gxFlushDataCacheCurrentProcess(first, second);
}
}
