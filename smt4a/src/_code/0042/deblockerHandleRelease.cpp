#include "shard/Shard0042.h"
#include "shard/deblockerHandleRelease.h"

extern "C" {

extern void mwmofilterDeblockerRelease(u32 handle);

void deblockerHandleRelease(u32 *handle)
{
    mwmofilterDeblockerRelease(*handle);
    *handle = 0;
}

} /* extern "C" */
