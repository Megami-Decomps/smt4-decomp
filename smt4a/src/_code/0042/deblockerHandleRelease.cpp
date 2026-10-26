#include "shard/Shard0042.h"
#include "shard/W6_W6Match3_MovieRead.h"
#include "mobiclip_ctrl/DeblockerHandle.h"

extern "C" {


void deblockerHandleRelease(u32 *handle)
{
    mwmofilterDeblockerRelease(*handle);
    *handle = 0;
}

} /* extern "C" */
