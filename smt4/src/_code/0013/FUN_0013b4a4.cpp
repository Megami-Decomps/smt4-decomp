#include "common.h"

extern "C" {

extern u32 *nn_gxlow_CTR_GetGpu(void);
extern u32 FUN_0013b4cc(u32 *session, u32 a, u32 b, u32 c);

/* Sends a GPU service request on the GPU session. */
u32 FUN_0013b4a4(u32 a, u32 b, u32 c)
{
    return FUN_0013b4cc(nn_gxlow_CTR_GetGpu(), a, b, c);
}

} /* extern "C" */
