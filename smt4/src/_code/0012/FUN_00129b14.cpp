/* NON_MATCHING: register numbering (retail keeps the acquire result in r5 and the suppress flag in r4) and mov r1 / add r0 order */
/* Acquires the GPU right for the current process and, when the VRAM bank check passes, stops the PDC interrupt events.
 * Returns the acquire result (0x202BF8 when the GPU service is not available). */
#include "nn/Result.h"

extern "C" {
extern u32 DAT_0040b74c;
s32 FUN_002ad254(void);
void *FUN_002ad244(void);
void *nn_gxlow_CTR_GetGpu(void);
s32 nn_gxlow_CTR_Gpu_AcquireRight(void *gpu, u32 process, u32 flags);
s32 nngxCheckVramBank(void);
void nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents(void *queue, s32 suppress);

s32 FUN_00129b14(void)
{
    if (FUN_002ad254() == 0) {
        return 0x202BF8;
    }
    u32 process = DAT_0040b74c;
    s32 result = nn_gxlow_CTR_Gpu_AcquireRight(nn_gxlow_CTR_GetGpu(), process, 0);
    if (nnResultIsFailure(result)) {
        return result;
    }
    if (nngxCheckVramBank() != 0) {
        s32 suppress = 0;

        nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents((u8 *)FUN_002ad244() + 0x30, suppress);
    }
    return result;
}
}
