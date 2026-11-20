#include "shard/Sys471a70.h"

extern "C" {

s32 nn_gxlow_CTR_IsGpuServiceAvailable(void)
{
    return g_nngxState.unk00;
}

} /* extern "C" */
