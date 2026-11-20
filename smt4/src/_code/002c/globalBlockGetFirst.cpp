#include "shard/Sys4651e8.h"

extern "C" {

u32 globalBlockGetFirst(void)
{
    return g_processResultState.unk00;
}

} /* extern "C" */
