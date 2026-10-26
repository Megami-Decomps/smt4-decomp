#include "nn/svc.h"

/* The sound engine's flags (at DAT_005894e4): the event that signals the DSP thread is at +8. */
struct DspSoundFlags {
    s8 enabled;
    s8 pending;
    s8 busy;
    u8 unk03;
    s8 status;
    u8 unk05[3];
    u8 event[1];
};

/* The DSP shared-memory window's register block: the byte at 0xc0 mirrors the DSP status. */
struct DspRegisters {
    u8 unk00[0xc0];
    s8 status;
};

extern "C" {
extern DspSoundFlags DAT_005894e4;
extern u8 g_dspsndState;
extern u8 g_nnSndMasterManager;
void FUN_0016f574(u8 *state, s32 flag);
void FUN_001a167c(u8 *manager, s8 value);
void nn_os_LightEvent_Signal(u8 *event);

/* When the DSP sound engine is enabled and has a pending request: runs it, latches the DSP status, clears the pending and busy flags and signals the DSP event. */
void dspsndHandlePendingRequest(void)
{
    if ((DAT_005894e4.enabled & DAT_005894e4.pending) != 0) {
        FUN_0016f574(&g_dspsndState, 1);
        s8 status = ((DspRegisters *)0x1ff81000)->status;
        DAT_005894e4.status = status;
        FUN_001a167c(&g_nnSndMasterManager, status);
        DAT_005894e4.pending = 0;
        DAT_005894e4.busy = 0;
        nn::os::DataSynchronizationBarrier();
        nn_os_LightEvent_Signal(DAT_005894e4.event);
    }
}
}
