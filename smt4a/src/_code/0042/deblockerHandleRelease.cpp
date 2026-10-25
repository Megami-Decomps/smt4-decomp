#include "shard/Shard0042.h"
#include "shard/W6_W6Match3_MovieRead.h"
#include "util/CalleeContracts.h"

extern "C" {

extern void mwmofilterDeblockerRelease(u32 handle);

void deblockerHandleRelease(u32 *handle)
{
    mwmofilterDeblockerRelease(*handle);
    *handle = 0;
}

} /* extern "C" */
