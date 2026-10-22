#include "shard/Sys471b48.h"

extern "C" {

u32 nnosGetApplicationMemorySize(void)
{
    return g_nnosHeapState.unk08;
}

} /* extern "C" */
