#include "common.h"

extern "C" {

void gxFlushDataCacheCurrentProcess(u32 address, u32 size);

/* Forwards to gxFlushDataCacheCurrentProcess, the function that follows it. */
void heapFlushDataCache(u32 address, u32 size)
{
    gxFlushDataCacheCurrentProcess(address, size);
}

} /* extern "C" */
