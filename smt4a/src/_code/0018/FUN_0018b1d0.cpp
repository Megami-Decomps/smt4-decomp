/* NON_MATCHING: register numbering (retail keeps the acquire result in r5 and the suppress flag in r4) and mov r1 / add r0 order */
/* Acquires the GPU right for the current process and, when the VRAM bank check passes, stops the PDC interrupt events.
 * Returns the acquire result (0x202BF8 when the GPU service is not available). */
#include "nn/Result.h"

extern "C" {
extern u32 DAT_0053f528;
s32 FUN_001a2480(void);
void *FUN_001a2a4c(void);
void *nn_gxlow_CTR_GetGpu(void);
s32 nn_gxlow_CTR_Gpu_AcquireRight(void *gpu, u32 process, u32 flags);
s32 nngxCheckVramBank(void);
void FUN_001a28a8(void *queue, s32 suppress);

s32 FUN_0018b1d0(void)
{
    if (FUN_001a2480() == 0) {
        return 0x202BF8;
    }
    u32 process = DAT_0053f528;
    s32 result = nn_gxlow_CTR_Gpu_AcquireRight(nn_gxlow_CTR_GetGpu(), process, 0);
    if (nnResultIsFailure(result)) {
        return result;
    }
    if (nngxCheckVramBank() != 0) {
        s32 suppress = 0;

        FUN_001a28a8((u8 *)FUN_001a2a4c() + 0x30, suppress);
    }
    return result;
}
}
