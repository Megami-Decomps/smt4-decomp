#include "common.h"

extern "C" {
void *nn_gxlow_CTR_GetGpu();
s32 nn_gxlow_CTR_Gpu_ReadHWRegs(void *gpu, u32 address, void *data, u32 size);
}

/* Read GPU hardware registers through the current low-level GPU object. */
extern "C" s32 FUN_0018b080(u32 address, void *data, u32 size)
{
    return nn_gxlow_CTR_Gpu_ReadHWRegs(nn_gxlow_CTR_GetGpu(), address, data, size);
}
