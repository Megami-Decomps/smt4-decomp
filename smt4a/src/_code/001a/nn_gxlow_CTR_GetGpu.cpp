#include "common.h"

extern "C" {

extern u32 g_nngxGpu;

/* Returns the address of the word at 0x5C0AB4. */
u32 *nn_gxlow_CTR_GetGpu(void)
{
    return &g_nngxGpu;
}

} /* extern "C" */
