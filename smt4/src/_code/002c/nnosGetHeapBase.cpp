#include "shard/Sys471b48.h"

extern "C" {

u32 nnosGetHeapBase(void)
{
    return g_nnosHeapState.unk00;
}

} /* extern "C" */
