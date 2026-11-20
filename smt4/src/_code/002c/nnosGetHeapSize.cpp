#include "shard/Sys471b48.h"

extern "C" {

u32 nnosGetHeapSize(void)
{
    return g_nnosHeapState.unk04;
}

} /* extern "C" */
