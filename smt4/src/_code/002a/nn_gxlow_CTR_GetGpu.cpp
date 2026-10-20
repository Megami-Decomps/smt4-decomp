#include "common.h"

extern "C" {

extern u32 g_nngxGpu;

u32 *nn_gxlow_CTR_GetGpu(void)
{
    return &g_nngxGpu;
}

} /* extern "C" */
