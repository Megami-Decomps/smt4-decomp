/* NON_MATCHING: 7 lines; retail has a leading linker NOP and resets the GPU handle through r0 instead of r1. */
#include "gfx/NngxCommandDefaults.h"
#include "nn/svc.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern NngxInitializationPrefixIV g_nngxState; // declcheck: local (the initialization view includes the service handles omitted by Sys471a70.h)
extern CriticalSection g_nngxCriticalSection;
void nn_gxlow_CTR_InterruptReceiver_Finalize(s32 receiver); // declcheck: local (matches the definition; protos__code.h is the decompiler's prototype)

/* Shuts down the interrupt receiver and releases the service handle under the GX lock. */
void FUN_0011d12c(void)
{
    nn_os_CriticalSection_Enter(&g_nngxCriticalSection);
    if (g_nngxState.initialized != 0) {
        nn_gxlow_CTR_InterruptReceiver_Finalize((s32)g_nngxState.commandState);
        nn::svc::CloseHandle(g_nngxState.configuredGpu);
        g_nngxState.acquiredGpu = g_nngxDefaultCommandState.gpu;
        g_nngxState.initialized = 0;
        nn_os_CriticalSection_Leave(&g_nngxCriticalSection);
        return;
    }
    nn_os_CriticalSection_Leave(&g_nngxCriticalSection);
}
} /* extern "C" */
