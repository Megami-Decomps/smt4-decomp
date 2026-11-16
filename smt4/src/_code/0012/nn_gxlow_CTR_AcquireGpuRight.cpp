/* Acquires the GPU right for the current process and, when the VRAM bank check passes, stops the PDC interrupt events.
 * Returns the acquire result (0x202BF8 when the GPU service is not available). */
#include "nn/Result.h"
#include "shard/S3CmdMsg.h"

extern "C" {
extern u32 DAT_0040b74c;
s32 FUN_002ad254(void);
CmdManager *FUN_002ad244(void);
void *nn_gxlow_CTR_GetGpu(void);
nn::Result nn_gxlow_CTR_Gpu_AcquireRight(void *gpu, u32 process, u32 flags);
s32 nngxCheckVramBank(void);
void nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents(InterruptRelayQueueRx *queue, s32 suppress);

nn::Result nn_gxlow_CTR_AcquireGpuRight(void)
{
    if (FUN_002ad254() == 0) {
        return 0x202BF8;
    }
    u32 process = DAT_0040b74c;
    nn::Result result = nn_gxlow_CTR_Gpu_AcquireRight(nn_gxlow_CTR_GetGpu(), process, 0);
    if (nnResultIsFailure(result)) {
        return result;
    }
    if (nngxCheckVramBank() != 0) {
        s32 suppress = 0;
        CmdManager *manager = FUN_002ad244();
        nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents(&manager->relayRx, suppress);
    }
    return result;
}
}
