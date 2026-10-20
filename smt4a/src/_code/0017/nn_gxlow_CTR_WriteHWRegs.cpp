#include "common.h"

extern "C" {

void nn_gxlow_CTR_Gpu_WriteHWRegs(u32 a, u32 b, u32 c, u32 d);
u32 nn_gxlow_CTR_GetGpu(void);

/* Calls nn_gxlow_CTR_Gpu_WriteHWRegs with the result of nn_gxlow_CTR_GetGpu followed by its own three arguments. */
void nn_gxlow_CTR_WriteHWRegs(u32 a, u32 b, u32 c)
{
    nn_gxlow_CTR_Gpu_WriteHWRegs(nn_gxlow_CTR_GetGpu(), a, b, c);
}

} /* extern "C" */
