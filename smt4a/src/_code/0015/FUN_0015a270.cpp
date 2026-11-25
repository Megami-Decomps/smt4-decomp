/* NON_MATCHING: 7 lines; retail has a leading linker NOP and resets the GPU handle through r0 instead of r1. */
#include "gfx/NngxCommandDefaults.h"
#include "nn/svc.h"
#include "shard/S2NngxState.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern NngxState g_nngxState; // declcheck: local (the initialization view includes the service handles omitted by GlobalBlocks.h)
extern CriticalSection g_nngxCriticalSection;
void FUN_001701c0(s32 receiver);

/* Shuts down the interrupt receiver and releases the service handle under the GX lock. */
void FUN_0015a270(void)
{
    nn_os_CriticalSection_Enter(&g_nngxCriticalSection);
    if (g_nngxState.initialized != 0) {
        FUN_001701c0((s32)g_nngxState.work);
        nn::svc::CloseHandle(g_nngxState.unk10);
        g_nngxState.unk14 = g_nngxDefaultCommandState.gpu;
        g_nngxState.initialized = 0;
        nn_os_CriticalSection_Leave(&g_nngxCriticalSection);
        return;
    }
    nn_os_CriticalSection_Leave(&g_nngxCriticalSection);
}
} /* extern "C" */
