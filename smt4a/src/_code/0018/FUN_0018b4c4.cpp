#include "common.h"

extern "C" {

extern void *nn_gxlow_CTR_IsGpuServiceAvailable(void);
extern u32 nn_gxlow_CTR_GetGpu(void *context);
extern u32 nn_gxlow_CTR_Gpu_RestoreVramSysArea(u32 area);

/* Saves the VRAM system area of the current GPU context; without one it fails with this result code. */
u32 FUN_0018b4c4(void)
{
    void *context = nn_gxlow_CTR_IsGpuServiceAvailable();

    if (context == NULL) {
        return 0x00202bf8;
    }
    return nn_gxlow_CTR_Gpu_RestoreVramSysArea(nn_gxlow_CTR_GetGpu(context));
}

} /* extern "C" */
