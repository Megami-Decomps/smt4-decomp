#include "common.h"

extern "C" {

extern void *FUN_001a2480(void);
extern u32 nn_gxlow_CTR_GetGpu(void *context);
extern u32 nn_gxlow_CTR_Gpu_SaveVramSysArea(u32 area);

/* Saves the VRAM system area of the current GPU context; without one it fails with this result code. */
u32 nn_gxlow_CTR_SaveVramSysArea(void)
{
    void *context = FUN_001a2480();

    if (context == NULL) {
        return 0x00202bf8;
    }
    return nn_gxlow_CTR_Gpu_SaveVramSysArea(nn_gxlow_CTR_GetGpu(context));
}

} /* extern "C" */
