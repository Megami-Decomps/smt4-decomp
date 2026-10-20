#include "common.h"

extern "C" {

void nn_gxlow_CTR_FlushDataCache(u32 address, u32 size);

/* Forwards to nn_gxlow_CTR_FlushDataCache, the function that follows it. */
void nn_gxlow_CTR_FlushDataCacheForward(u32 address, u32 size)
{
    nn_gxlow_CTR_FlushDataCache(address, size);
}

} /* extern "C" */
