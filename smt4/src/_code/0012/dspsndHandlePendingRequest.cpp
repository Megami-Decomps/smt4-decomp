#include "nn/svc.h"

/* The sound engine's flags (at DAT_0044e7c0): the event that signals the DSP thread is at +8. */
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
extern DspSoundFlags DAT_0044e7c0;
extern u8 g_dspsndState;
extern u8 g_nnSndMasterManager;
void FUN_00129214(u8 *state, s32 flag);
void FUN_00146e40(u8 *manager, s8 value);
void nn_os_LightEvent_Signal(u8 *event);

/* When the DSP sound engine is enabled and has a pending request: runs it, latches the DSP status, clears the pending and busy flags and signals the DSP event. */
void dspsndHandlePendingRequest(void)
{
    if ((DAT_0044e7c0.enabled & DAT_0044e7c0.pending) != 0) {
        FUN_00129214(&g_dspsndState, 1);
        s8 status = ((DspRegisters *)0x1ff81000)->status;
        DAT_0044e7c0.status = status;
        FUN_00146e40(&g_nnSndMasterManager, status);
        DAT_0044e7c0.pending = 0;
        DAT_0044e7c0.busy = 0;
        nn::os::DataSynchronizationBarrier();
        nn_os_LightEvent_Signal(DAT_0044e7c0.event);
    }
}
}
